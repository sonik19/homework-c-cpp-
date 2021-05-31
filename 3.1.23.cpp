#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	string text = "aaaBBBBc";
	cout << text << "\n\n";

	char more(text[0]), less(text[0]);
	unsigned max(0), min(999);		

	for (size_t i = 0; i < text.size(); i++)		
	{
		char temp = text.at(i);
		unsigned count = 0;		
		for (size_t j = 0; j < text.size(); j++)
		{
			if (text.at(j) == temp)
				count++;
		}
		if (count > max)
		{
			max = count;
			more = temp;
		}
		if (count < min)
		{
			min = count;
			less = temp;
		}
	}

	cout << "The most common symbol:\t" << more << endl;
	cout << "The less common symbol:\t" << less << "\n\n";

	return 0;
}
