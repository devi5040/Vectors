#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5};
    cout << "Vector is empty:" << endl
         << vect.empty() << endl;
    vector<int> vect1 = {};
    cout << "Vector is empty:" << endl
         << vect1.empty() << endl;
}

/*
    Vector is empty:
    0                                           //0 means false
    Vector is empty:
    1                                           //1 means true
*/