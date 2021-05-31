#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int min(int* arr, unsigned n)
{
    int min = arr[0];
    for (unsigned i = 0; i < n; i++)
    {
        if (arr[i] < 1)
        {
            if (min > 2)
                min = 2;
        }
        else if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    unsigned n(0);
    cout << "Amount of numbers:\t";
    cin >> n;

    int* arr = new int[n];
    cout << endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << "y" << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << "\nmin(z[1]...z[n]) = " << min(arr, n) << "\n\n";

    delete[]arr;
    return 0;
}
