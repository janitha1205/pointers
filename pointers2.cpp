// C++ program to swap two numbers using
// pass by pointer
#include <iostream>
using namespace std;

void swap(int &x, int &y)// values
{
    int z = x;
    cout<<z;
    x = y;
    y = z;
}

// Driver Code
int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(a,b);

    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";
}
