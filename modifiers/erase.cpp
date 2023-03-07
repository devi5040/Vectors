#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    vector<int>::iterator ptr;
    ptr = myvector.begin() + 2;
    myvector.erase(ptr);
    cout << "Vector after erase(myvector.begin()+2):" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    myvector.erase(myvector.begin(), myvector.begin() + 4);
    cout << "Vector after erase(myvector.begin(), myvector.begin()+4):" << endl;
    for (int i = 0; i < myvector.size(); i++)
        cout << " " << myvector[i];
    cout << endl;
    return 0;
}

/*
    Output:
    1 2 3 4 5 6 7 8 9
    Vector after erase(myvector.begin()+2):
    1 2 4 5 6 7 8 9
    Vector after erase(myvector.begin(), myvector.begin()+4):
    6 7 8 9
*/