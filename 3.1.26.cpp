#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;


int main()
{
	string text = "abcd abcdefgABCDEFGH";
	cout << text << "\n\n";

	pair<int, int> result = {0,0};				
	pair<int, int> currentSubstring = { 1,0 };	
	for (size_t i = 0; i < text.size(); i++)
	{
		int startCode = (int)text.at(i);			
		currentSubstring.second = i;
		currentSubstring.first = 0;
		for (size_t j = i+1; j < text.size(); j++)
		{
			if (abs((int)text.at(j) - startCode) != 1)
				break;
			startCode = (int)text.at(j);
			currentSubstring.first++;
		}
		if (currentSubstring.first > result.first)
		{
			result = currentSubstring;
			i = result.first + result.second;
		}
	}
	cout << "The same but deleted longest monotonne substring:\n" << text.erase(result.second, result.first + 1) << "\n\n";

	return 0;
}
