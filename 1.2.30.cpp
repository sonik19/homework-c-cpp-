#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

vector<int> solve(int a, int b, int c, int d)
{
    vector<int> integerAnswers;

    for (int i = -abs(d); i <= abs(d); i++)
    {
        double fx = (a * pow(i, 3) + b * pow(i, 2) + c * pow(i, 1) + d);
        if (fx > -0.001 && fx < 0.001)
            integerAnswers.push_back(i);
    }

    return integerAnswers;
}

int main()
{
    int a(0), b(0), c(0), d(0);
    
    cout << "ax^3 + bx^2 + cx + d = 0;\n\n";

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "d = ";
    cin >> d;

    cout << "\nInteger answers:\n";
    vector<int> answers = solve(a, b, c, d);
    for (size_t i = 0; i < answers.size(); i++)
        cout << "x" << i + 1 << " = " << answers[i] << endl;
    cout << "\n\n";

    return 0;
}
