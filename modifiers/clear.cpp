#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector = {0, 1, 2, 3, 4, 5, 6, 7};
    cout << "The vector is" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    myvector.clear();
    cout << "The vector after clearing is" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
}

/*
    Output:
    The vector is
    0 1 2 3 4 5 6 7
    The vector after clearing is

*/