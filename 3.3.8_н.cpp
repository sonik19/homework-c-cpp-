#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,m;
    cout << "введіть к-сть рядів та колонок" << endl;
    cin >> n >> m;
    int** a;
    a = new int* [n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>(a[i][j]);
        }
    }
    int s = n / 2;
    int** a1 = new int* [s];
    for (int i = 0; i < s; i++) {
        a1[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        if (i % 2 != 0) {
            delete[] a[i];
        }
        else {
            for (int k = 0; k < s; ++k) {
                for (int j = 0; j < m; ++j) {
                    a1[k][j] = a[i][j];
               }
                
                delete[] a[i];
            }
        }
    }
    delete[] a;

    for (int i = 0; i < s; i++) {
        for (int j = 0; j < m; j++) {
            cout << (a1[i][j]) << endl;
        }
    }
    for (int k = 0; k < s; k++) {
        delete[]a1[k];
    }
    delete[] a1;
}
