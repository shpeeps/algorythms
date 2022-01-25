#include <iostream>
#include <vector>
#include <map>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
    int n;

    cout << "Введите натуральное число - количество чисел для ввода:" << endl;
    cin >> n;
    cout  << "Заполните массив" << endl;

    map<int, int> dictionary;
    vector<int> myVector(n);

    for (int i = 0; i < n; i++)
    {
        cin >> myVector[i];
        dictionary[myVector[i]] += 1;
    }


    cout << "Справочник по введенным числам:\n";
    for (auto key : dictionary)
        cout << key.first << ":" << key.second << endl;
}
