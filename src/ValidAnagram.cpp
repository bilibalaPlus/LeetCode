class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
		
		int* CntS = new int[26];
		int* CntT = new int[26];
		
		memset(CntS,0,26*sizeof(int));
		memset(CntT,0,26*sizeof(int));
		
		for(int i = 0; i < s.size(); i++)
		{
			CntS[s[i]-'a']++;
			CntT[t[i]-'a']++;
		}
		
		for(int i = 0; i < 26; i++)
		{
			if(CntS[i] != CntT[i]) return false;
		}
		return true;
    }
};