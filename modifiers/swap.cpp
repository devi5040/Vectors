#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect1 = {1, 2, 3, 4};
    vector<int> vect2 = {4, 5, 6, 7};
    cout << "Vector 1 before swapping is:" << endl;
    for (int i = 0; i < vect1.size(); i++)
        cout << " " << vect1[i];
    cout << endl;
    cout << "Vector 2 before swapping is:" << endl;
    for (int i = 0; i < vect2.size(); i++)
        cout << " " << vect2[i];
    cout << endl;
    vect1.swap(vect2);
    cout << "Vector 1 after swapping is:" << endl;
    for (int i = 0; i < vect1.size(); i++)
        cout << " " << vect1[i];
    cout << endl;
    cout << "Vector 2 after swapping is:" << endl;
    for (int i = 0; i < vect2.size(); i++)
        cout << " " << vect2[i];
    cout << endl;
}

/*
    output:
    Vector 1 before swapping is:
    1 2 3 4
    Vector 2 before swapping is:
    4 5 6 7
    Vector 1 after swapping is:
    4 5 6 7
    Vector 2 after swapping is:
    1 2 3 4
*/