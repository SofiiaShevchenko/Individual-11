// 11_1  1 завдання
// Скласти програму для розв’язання завдання двома способами, використовуючи 
// a) команду switch;
// b) команду if.
// Придумати і задати дані так, щоб вибір був здійснений з семи варіантів.	

// 3 варіант. Ввести першу літеру назви країни і вивести континент, до якого вона належить, і її площу.


#include <iostream>

using namespace std;

int main()
{

    string n;

    cout << "Enter the first letter of the country: ";
    cin >> n;

    if (n == "A") {

        cout << "Continent: South America" << "\n";  // Argentina
        cout << "Area: 2 780 000";
    }

    else if (n == "B") {

        cout << "Continent: Eurasia" << "\n";  // Bangladesch
        cout << "Area: 148 460";
    }

    else if (n == "C") {

        cout << "Continent: North America" << "\n";  // Canada
        cout << "Area: 9 985 000";
    }

    else if (n == "T") {

        cout << "Continent: Africa" << "\n";  // Tunis
        cout << "Area: 163 610";
    }

    else if (n == "U") {
        cout << "Continent: Eurasia" << "\n";  // Ukraine
        cout << "Area: 603 700";
    }

    else if (n == "M") {
        cout << "Continent: North America" << "\n";  // Mexico
        cout << "Area: 1 964 000";
    }

    else if (n == "P") {
        cout << "Continent: South America" << "\n";  // Peru
        cout << "Area: 1 285 000";
    }
    else {
        cout << "Enter another letter";
    }

    return 0;
}