#include <iostream>
#include <vector>

using namespace std;


vector<int> massive() {

	int n = 15000;
	vector<bool> mass(n + 1, true);
	vector<int> result(n);

	for (int i = 2; i <= n; i++)
	{
		mass[i] = true;
	}

	for (int i = 2; i * i <= n; i++)
	{
		if (mass[i])
			for (int j = i * i; j <= n; j += i)
			{
				mass[j] = false;
			}
	}

	int ind = 0;
	for (int i = 2; i < mass.size(); i++) {
		if (mass[i])
		{
			result[ind] = i;
			ind += 1;
		}
	}
	return result;
}

void main()
{
	setlocale(LC_ALL, "Rus");

	int n = 0;
	cout << "Введите натуральное число 0 < N < 15000 (количество чисел, которые хотите найти):" << endl;
	cin >> n;
	vector<int> arr(n);
	cout << "Введите номера чисел:" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	vector<int> result = massive();
	for (auto ind : arr)
	{
		cout << result[ind - 1] << endl;
	}
}
