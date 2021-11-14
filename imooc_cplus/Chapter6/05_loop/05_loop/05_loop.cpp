#include <iostream>
using namespace std;
int main()
{   // TODO: 1+2+3+4...+100
	// whileÓï¾ä
	int sum = 0;
	int index = 1;
	while (index <= 100)
	{
		sum += index;
		index += 1;
	}
	//cout << sum << endl;

	// forÓï¾ä
	//index = 1;
	sum = 0;
	for (index = 1; index <= 100; ++index)
	{
		sum += index;
	}
	//cout << sum << endl;

	// do-whileÓï¾ä
	sum = 0;
	index = 1;
	do
	{
		sum += index;
		index += 1;
	} while (index <= 100);
	//cout << sum << endl;

	return 0;
}

