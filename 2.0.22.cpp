#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
using namespace std;



int main()
{
    unsigned n(0);

    cout << "arr[n];\n";
    cout << "n = ";
    cin >> n;
    cout << endl;
    double* arr = new double[n];      
    srand((int)time(nullptr));
    cout << "\nService time for each customer:\n\n";
    for (size_t i = 0; i < n; i++)
    {
        arr[i] = (double)(1 + rand() % 99) / (double)(1 + rand() % 9);
        cout << "t[" << i + 1 << "] = " << arr[i] << endl;
    }

    cout << "\n\nWaiting time in queue:\n\n";
    double* c = new double[n];        
    for (size_t i = 0; i < n; i++)
        c[i] = 0;
    unsigned fastest = 0;        
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j <= i; j++)
        {
            c[i] += arr[j];
        }
        cout << c[i] << endl;
        if (arr[fastest] > arr[i])
            fastest = i;
    }

    cout << "\nBuyer #" << fastest + 1 << " will be served faster than others.\n\n";

    delete[]arr;
    return 0;
}
