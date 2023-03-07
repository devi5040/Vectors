#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector = {1, 2, 3, 4};
    cout << "The vector is:" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    myvector.emplace(myvector.begin(), 100);
    cout << "The vector is:" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    myvector.emplace(myvector.end(), 400);
    cout << "The vector is:" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    return 0;
}

/*
    Output:
    The vector is:
    1 2 3 4
    The vector is:
    100 1 2 3 4
    The vector is:
    100 1 2 3 4 400
*/