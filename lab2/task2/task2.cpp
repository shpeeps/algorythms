#include <iostream>
#include <vector>
#include <map>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
    int n;

    cout << "������� ����������� ����� - ���������� ����� ��� �����:" << endl;
    cin >> n;
    cout  << "��������� ������" << endl;

    map<int, int> dictionary;
    vector<int> myVector(n);

    for (int i = 0; i < n; i++)
    {
        cin >> myVector[i];
        dictionary[myVector[i]] += 1;
    }


    cout << "���������� �� ��������� ������:\n";
    for (auto key : dictionary)
        cout << key.first << ":" << key.second << endl;
}