#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector1;
    vector<int> myvector2 = {1, 2, 3, 4, 5};
    myvector1.assign(5, 8);
    cout << "Vector1:" << endl;
    for (int i = 0; i < myvector1.size(); i++)
    {
        cout << myvector1[i] << endl;
    }
    cout << "Vector2:" << endl;
    for (int i = 0; i < myvector2.size(); i++)
    {
        cout << myvector2[i] << endl;
    }
    myvector2.assign(3, myvector1[3]);
    cout << "Vector2:" << endl;
    for (int i = 0; i < myvector2.size(); i++)
    {
        cout << myvector2[i] << endl;
    }
    return 0;
}

/*
    Output:
    Vector1:
    8
    8
    8
    8
    8
    Vector2:
    1
    2
    3
    4
    5
    Vector2:
    8
    8
    8
*/