//
// Created by lx on 19-3-12.
//

#include <vector>

using namespace std;

class Solution {
public:
    int shoppingOffers(vector<int>& price, vector<vector<int>>& special, vector<int>& needs) {
        if (special.empty()) {
            int sum = 0;
            for (int i = 0; i < price.size(); i++) {
                sum += price[i]*needs[i];
            }
            return sum;
        }
        vector<int> offer = special.back();
        for (int i = 0; i < needs.size(); i++) {
            if (needs[i] - offer[i] < 0) {
                special.pop_back();
                return shoppingOffers(price,special,needs);
            }
        }
        vector<int> left_needs = needs;
        for (int i = 0; i < needs.size(); i++) {
            left_needs[i] = needs[i] - offer[i];
        }
        vector<vector<int>> left_special = special;
        left_special.pop_back();
        return min(min(shoppingOffers(price,special,needs),shoppingOffers(price,special,left_needs)+offer.back()),shoppingOffers(price,left_special,needs));
    }
};
