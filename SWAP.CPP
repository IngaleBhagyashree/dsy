#include<iostream>
using namespace std;  
void swap (int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p = 0, q = 1;
    cout << "p = " << p << " q = " << q << endl;

    swap(p, q);
    cout << "p = " << p << " q = " << q << endl;
}