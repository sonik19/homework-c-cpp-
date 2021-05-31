#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctype.h>
#include <cmath>

using namespace std;
class Dot

{
public:
    int x, y;

    Dot() : x(0), y(0) {}
    void operator=(const Dot& other)
    {
        this->x = other.x;
        this->y = other.y;
    }
    bool operator==(const Dot& other)
    {
        if (this->x == other.x and this->y == other.y)
            return 1;
        return 0;
    }
};
int main()
{
    unsigned dots(0);
    double perimeter(0);
    string answer = "";
    Dot first, current, previous;
    cout << "x = ";
    cin >> first.x;
    cout << "y = ";
    cin >> first.y;
    ++dots;
    previous = first;
    while (true)
    {
        cout << "Створити нову точку? (напишіть 'no' щоб відмінити)\n >>";

        cin >> answer;
        if (answer == "no")
        {
            if (current == first)
                break;

            perimeter += sqrt(pow(current.x - first.x, 2) + pow(current.y - first.y, 2));   
            break;
        }

        cout << "x = ";

        cin >> current.x;

        cout << "y = ";

        cin >> current.y;

        ++dots;

        perimeter += sqrt(pow(current.x - previous.x, 2) + pow(current.y - previous.y, 2));

        previous.x = current.x;

        previous.y = current.y;

    }

    cout << "\nПериметр:\t" << perimeter << endl;

    cout << "К-сть точок:\t" << dots << endl;

    return 0;

}
