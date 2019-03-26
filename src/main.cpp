#include "kthSmallest.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    vector<vector<int>> mat;
    mat.push_back(vector<int> {1,2,3,7});
    mat.push_back(vector<int> {5,10,14,16});
    mat.push_back(vector<int> {8,10,18,19});
    mat.push_back(vector<int> {9,12,22,24});

    cout << sl.kthSmallest(mat, 14);

    return 0;
}

