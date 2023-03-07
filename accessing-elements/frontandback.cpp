#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> myvector(10);
    for (int i = 0; i < myvector.size(); i++)
    {
        myvector[i] = i * 2 + 1;
    }
    cout << "The vector is: ";
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << ' ' << myvector[i];
    }
    cout << endl;
    cout << "The first element is: " << myvector.front() << endl;
    cout << "The last element is: " << myvector.back() << endl;
}

/*
    Output:
    The vector is: 1 3 5 7 9 11 13 15 17 19
    The first element is: 1
    The last element is:19
*/