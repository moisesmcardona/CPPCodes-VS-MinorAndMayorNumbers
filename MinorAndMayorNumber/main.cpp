#include <iostream>
using namespace std;

int main()
{
	float num[5]; //5 is the number of spaces available in the variable
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a number for space " << i + 1 << ": ";
		cin >> num[i];
	}
	int minor = 999999;
	for (int i = 0; i < 5; i++)
	{
		if (minor > num[i])
		{
			minor = num[i];
		}
	}
	cout << "The minor number is: " << minor << endl;
	int mayor = -999999;
	for (int i = 0; i < 5; i++)
	{
		if (mayor < num[i])
		{
			mayor = num[i];
		}
	}
	cout << "The mayor number is: " << mayor << endl;
	system("pause");
	return 0;
}