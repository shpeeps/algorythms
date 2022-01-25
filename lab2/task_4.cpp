#include <iostream>
#include <vector>

using namespace std;
void main(){
    setlocale(LC_ALL, "Rus");

vector<int> myVector;
int f;
while (true)
{
    cin >> f;
    myVector.push_back(f);
    cout << "Текущий размер вектора: " << myVector.capacity() << "\n" << endl;
}
}
