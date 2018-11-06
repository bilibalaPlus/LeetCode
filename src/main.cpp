#include "reverseInt.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    string s = argv[1];
    int n = stoi(s);
    reverseInt rc = reverseInt();
    cout << rc.reverse(n) << endl;
    return 0;
}
