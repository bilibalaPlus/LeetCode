//
// Created by lx on 19-3-13.
//

#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> words;
        map<string, string> pattern_map;
        map<string, int> str_map;
        string word;
        for (auto c : str) {
            if (c != ' ') {
                word += c;
            }
            else if (word != "") {
                words.push_back(word);
                word = "";
            }
        }
        if (word != "") words.push_back(word);

        if (pattern.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < pattern.size(); i++) {
            auto sit = str_map.find(words[i]);
            if (sit == str_map.end()) {
                str_map[words[i]] = 1;
            }
            auto it = pattern_map.find(to_string(pattern[i]));
            if (it == pattern_map.end()) {
                pattern_map[to_string(pattern[i])]=words[i];
            }
            else if (pattern_map[to_string(pattern[i])]!=words[i]) {
                return false;
            }
        }
        return pattern_map.size()==str_map.size();
    }
};