#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect(100);
    vect.resize(10);
    cout << "The capacity of the vector after resize(10)" << endl
         << vect.capacity() << endl;
    vect.shrink_to_fit();
    cout << "The capacity of the vector after shrink_to_fit()" << endl
         << vect.capacity() << endl;
}

/*
    Output:
    The capacity of the vector after resize(10)
    100
    The capacity of the vector after shrink_to_fit()
    10
*/