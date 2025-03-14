#include <bits/stdc++.h>
using namespace std;

signed main()
{
    // basic pointer
    int a = 10;
    int *ptr = &a; //*ptr stores adress the a
    cout << "Value of a " << a << "\n";
    cout << "adress of a " << &a << "\n";
    cout << "Value stored in ptr " << ptr << "\n";
    cout << "Value pointed by ptr " << *ptr << "\n"; // Dereferencing

    // *ptr and a refre to same value
    // Pointer Arithmetic
    cout << *ptr + 1 << "\n";
    cout << a << "\n";
    *ptr = *ptr + 1;
    cout << "After Increment *ptr " << *ptr << "\n";
    cout << "After inc a " << a << "\n";
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr1 = arr;
    cout << "0 element in arr " << *(ptr1) << "\n";
    cout << "1 element in arr " << *(ptr1 + 1) << "\n";
    int **ptr2 = &ptr1; // double pointer poins the pointer
    cout << "0 element in arr using double pointer " << **(ptr2) << "\n";
    cout << "1 element in arr double pointer " << *(*ptr2 + 1) << "\n";
}