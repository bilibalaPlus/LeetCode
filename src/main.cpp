#include "constructFromPrePost.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    vector<int> pre{1,2};
    vector<int> post{2,1};

    sl.constructFromPrePost(pre, post);

    return 0;
}

