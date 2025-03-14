#include <bits/stdc++.h>
using namespace std;
signed main()
{
    int arr[] = {1, 2, 3};
    do
    {
        for (int i = 0; i < 3; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";

    } while (next_permutation(arr, arr + 3)); //gives false when its sorted
}