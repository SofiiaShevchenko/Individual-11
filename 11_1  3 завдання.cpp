// 11_1  3 завдання
// 3 варіант

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choice;

    cout << "Choose the task 1, 2: ";
    cin >> choice;

    if (choice == 1) 
    {
        for (int i = 1000; i < 10000; i++) {
            if ((i % 133 == 125) && (i % 134 == 111)) {
                cout << "Suitable numeral = " << i << "\n";
            }
        }

        return 0;

    }

    if (choice == 2) 
    {
        int n, l, k, y = 18;           // y - початкова кількість років Василини. За умовою їй 18.

        cout << "Початкова кількість скринь Чахлика становить: ";
        cin >> n;

        cout << "Щороку кількість скринь збільшується на: ";
        cin >> l;

        cout << "Чахлик повинен мати скринь із золотом: ";
        cin >> k;

        cout << "На початку Василині виповнилося " << y << " років" << endl;

        if (n >= k)
            cout << "Неправильно задана умова" << endl;

        while (n < k) {

            y = y + 1;

            n = n + l;

            cout << "Коли у Чахлика буде достатньо скринь, Василині виповниться: " << y << endl;
        }

        return 0;

    }

    
}


