#include <iostream>
using namespace std;
double func(int n)
{
    double v0 = 1;
    double v1 = 1;
    double u0 = 0;
    double u1 = 0;
    double k1, k2;
    if (n == 0) {
        return v0;
    }
    else if (n == 1) {
        return v1;
    }
    for (int i = 2; i <= n; i++) {
        k1 = (u1 - v1) / ((u0 + v0) + 2);
        k2 = (u1 - u0 * v1 - v0) / (1 + u1 * u1 + v1 * v1);
        v0 = v1;
        u0 = u1;
        v1 = k1;
        u1 = k2;
    

    }
    return k1;
}

int main()
{
    int n;
    double v;
    cin >> n;
    v = func(n);
    cout << v;
}
