#include <iostream>
#include <string>
#include <cmath>
using namespace std;



int main()
{
    int n(0), m(0);

    cout << "n = ";
    cin >> n;

    cout << "m = ";
    cin >> m;

    int i(0);
    unsigned equals1(0), equalsAll(0);      //количество общих единичек и полных совпадений в битовом представлении чисел n и m 
    while (i < sizeof(int) * 8)			   
    {
        if(n & (1 << i) && m & (1 << i))
            equals1++;
        if ((n & (1 << i)) == (m & (1 << i)))
            equalsAll++;
        ++i;
    }

    cout << "\nEquals '1' in binary view of 'n' and 'm':\t" << equals1 << endl;
    cout << "Equal signs in binary view of 'n' and 'm':\t" << equalsAll << "\n\n";

    return 0;
}
