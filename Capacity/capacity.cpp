#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8, 0, 0, 0, 0, 0, 0};
    cout << "The size of the vector is:" << endl
         << vect.size() << endl;
    cout << "The capacity of the vector is:" << endl
         << vect.capacity() << endl;
    return 0;
}

/*
    Output:
    The size of the vector is:
    14
    The capacity of the is:
    14


    Sometimes the capacity will be more than the size
*/