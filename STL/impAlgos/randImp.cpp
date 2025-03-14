#include <bits/stdc++.h>
using namespace std;

signed main()
{
    // pseudo-random numbers 0 to RAND_MAX
    cout << "Impl of rand " << rand() << "\n";
    cout << "RAND_MAX " << RAND_MAX << "\n";
    int a = 0, b = 10;
    // genrating random numbers between a,b (exclude);
    cout << "genrating random numbers between a,b (include) " << (a + rand() % (b - a + 1)) << "\n"; // for exclude remove 1 becouse we dont count a,b
    // srand is seed that every seed value have same rand value every time so we add time(0) to  make it more random
    srand(time(0));
    cout << "More random number: " << rand() << "\n";
}