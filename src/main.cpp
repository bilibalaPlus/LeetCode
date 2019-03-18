#include "MaxSumsubarray.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();

    vector<int> A{1,-2,3,-2};
    vector<int> B{5,-3,5};
    vector<int> C{3,-1,2,-1};
    vector<int> D{3,-2,2,-3};

    cout << sl.maxSubarraySumCircular(A) << endl; // 3
    cout << sl.maxSubarraySumCircular(B) << endl; // 10
    cout << sl.maxSubarraySumCircular(C) << endl; // 4
    cout << sl.maxSubarraySumCircular(D) << endl; // 3

    return 0;
}
