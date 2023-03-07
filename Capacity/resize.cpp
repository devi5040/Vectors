#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5};
    cout << "The vector before resize" << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    cout << endl
         << "----------------------------------------" << endl
         << endl;
    vect.resize(3);
    cout << "The vector after resize(3):" << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    cout << endl
         << "----------------------------------------" << endl
         << endl;
    vect.resize(6, 100);
    cout << "The vector after resize(6, 100)" << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    cout << endl
         << "----------------------------------------" << endl
         << endl;
    vect.resize(10);
    cout << "The vector after resize(10):" << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << endl;
    }
    return 0;
}

/*
    Output:
    The vector before resize
    1
    2
    3
    4
    5

    -------------------------------------------------------------

    The vector after resize(3)
    1
    2
    3

    -------------------------------------------------------------

    The vector after resize(6,100)
    1
    2
    3
    100
    100
    100

    -------------------------------------------------------------

    The vector after resize(10)
    1
    2
    3
    100
    100
    100
    0
    0
    0
    0
*/