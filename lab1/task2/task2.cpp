#include <iostream>
#include <vector>
using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	int n = 0;
	cout << "¬ведите размер массива(вектора) :" << endl;
	cin >> n;
	vector<int> myVector(n);
	for (int i = 0; i < n; i++)
	{
		myVector[i] = 2 * i;
		cout << myVector[i] << endl;
	}
}