#include <iostream>
#include <vector>

using namespace std;

void main()
{
	setlocale(0, "");

	int n = 0;
	cout << "Введите натуральное число n, чтобы узнать не превышающие его простые числа :\n";
	cin >> n;
	vector<bool> myVector(n + 1);

	for (int i = 2; i <= n; i++)
	{
		myVector[i] = true;
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (myVector[i])
			for (int j = i * i; j <= n; j += i)
			{
				myVector[j] = false;
			}
	}


	cout << "Простые числа, не превышающие заданное число:\n";
	for (int i = 2; i <= n; i++)
	{
		if (myVector[i] == true)
		{
			cout << i << endl;
		}
	}
}