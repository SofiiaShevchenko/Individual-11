// 11_2  1(2)


#include <iostream>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Масив:";
    const int m = 15;

    int arr[m];

    for (int i = 0; i < m; i++)

    {

        arr[i] = rand() % 3;

        cout << arr[i] << " ";

    }

    cout << "" << endl;

    cout << "Впорядкований масив:";

    for (int i = 0; i < m; i++)

    {

        arr[i] = rand() % 3;

        sort(begin(arr), end(arr));

        cout << arr[i] << " ";

    }

}