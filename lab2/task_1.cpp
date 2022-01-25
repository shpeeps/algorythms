#include <iostream>
#include <vector>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int max;
    cout << "Введите натуральное число - размер массива:\n";
    cin >> n;
    vector<int> myVector(n + 1);

    cout << "Заполните массив:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> myVector[i];
    }
    max = myVector[0];

    for (int i = 0; i < n; i++)
    {
        if (max <= myVector[i])
            max = myVector[i];
    }
    cout <<"Наибольший элемент массива-  " << endl << max;
}
