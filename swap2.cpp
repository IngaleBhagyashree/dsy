#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p = 0, q = 1;

    cout << "Before Swap: ";
    cout << "p = " << p << " q = " << q << endl;

    swap(p, q);

    cout << "After Swap: ";
    cout << "p = " << p << " q = " << q << endl;

    return 0;
}