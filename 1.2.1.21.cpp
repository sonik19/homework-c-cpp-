#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isExcellent(int n)
{
    int sum = 1;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    else 
        return 0;
}

int main()
{
    int n(0);

    cout << "n = ";
    cin >> n;

    string answer;
    if (isExcellent(n))
        answer = "is";
    else
        answer = "is not";

    cout << "\n" << n << " " << answer << " an excellent number.\n\n";

    return 0;
}
