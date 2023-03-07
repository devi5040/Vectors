#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector(10);
    for (int i = 0; i < myvector.size(); i++)
    {
        myvector.at(i) = i; // Works same as myvector[i] = i
    }
    cout << "Vector is:" << endl;
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << ' ' << myvector.at(i) << endl; // Works same as myvector[i]
    }
    return 0;
}

/*
    Output:
    Vector is:
    0
    1
    2
    3
    4
    5
    6
    7
    8
    9
*/