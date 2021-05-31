#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int x(int i)
{
    if (i == 1 || i == 2 || i == 3)
        return -99;
    return x(i - 1) + x(i - 2) + x(i - 3) + 200;
}

int sequenceMin(unsigned n)
{
    int min(99999);
   
    for (size_t i = 2; i <= n; i++)
        if (x(i) < min && x(i) >= 0)
            min = x(i);

    return min;
}

int main()
{
    unsigned n(0);
    cout << "(n >= 1)\n";
    cout << "n = ";
    cin >> n;

    cout << "min(x(n)) = " << sequenceMin(n) << "\n\n";

    return 0;
}
