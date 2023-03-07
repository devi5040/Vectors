#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect1 = {1, 2, 3, 4};
    vector<int>::iterator it, ft;
    it = vect1.begin();
    vect1.insert(it, 100);
    cout << "After insert(it,100)" << endl;
    for (int i = 0; i < vect1.size(); i++)
        cout << " " << vect1[i];
    cout << endl;
    it = vect1.begin() + 2;
    vect1.insert(it, 200);
    cout << "After insert(it, 200)" << endl;
    for (int i = 0; i < vect1.size(); i++)
        cout << " " << vect1[i];
    cout << endl;
    ft = vect1.end();
    vect1.insert(ft, 300);
    cout << "After insert(ft, 300)" << endl;
    for (int i = 0; i < vect1.size(); i++)
        cout << " " << vect1[i];
    cout << endl;
    return 0;
}

/*
    Output:
    After insert(it,100)
    100 1 2 3 4
    After insert(it,200)
    100 1 200 2 3 4
    After insert(ft, 300)
    100 1 200 2 3 4 300
*/