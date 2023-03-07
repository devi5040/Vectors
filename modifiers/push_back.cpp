#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvect = {1, 3, 5, 7};
    int n;
    cout << "Enter any Integer" << endl;
    cin >> n;
    myvect.push_back(n);
    cout << "The vector is" << endl;
    for (int i = 0; i < myvect.size(); i++)
    {
        cout << ' ' << myvect[i];
    }
    return 0;
}

/*
    Enter any Integer
    4
    The vector is
    1 3 5 7 4
*/