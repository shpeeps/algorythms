#include <iostream>
#include <vector>

using namespace std;

void main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    int max;
    cout << "������� ����������� ����� - ������ �������:\n";
    cin >> n;
    vector<int> myVector(n + 1);

    cout << "��������� ������:\n";
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
    cout <<"���������� ������� �������-  " << endl << max;
}