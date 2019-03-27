#include "BSearch.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    vector<int> a{-1,0,3,5,9,12};

    cout << sl.search(a, 9) << endl;

    return 0;
}

