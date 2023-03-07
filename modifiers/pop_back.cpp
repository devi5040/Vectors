#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvect = {0, 1, 2, 3, 4, 5, 6};
    cout << "The vector before popping" << endl;
    for (int i = 0; i < myvect.size(); i++)
    {
        cout << ' ' << myvect[i];
    }
    cout << endl;
    myvect.pop_back();
    cout << "The vector after popping" << endl;
    for (int i = 0; i < myvect.size(); i++)
    {
        cout << ' ' << myvect[i];
    }
    return 0;
}

/*
    OutPut:
    The vector before popping
    0 1 2 3 4 5 6
    The vector after popping
    0 1 2 3 4 5
*/