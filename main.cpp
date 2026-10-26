```cpp
#include <iostream>
#include <limits>
using namespace std;

// Завдання 1: варіант If35
// Обчислення значення функції u(x)
void taskIf35()
{
    double x, u;

    cout << "\n--- Zavdannya If35 ---" << endl;
    cout << "Vvedit x: ";

    if (!(cin >> x))
    {
        cout << "Pomylka: nepravylne vvedennya!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    // Вибір формули залежно від значення x
    if (x <= 0)
        u = -x * x;
    else if (x <= 3)
        u = x;
    else
        u = 9 - x;

    cout << "Rezultat u(x) = " << u << endl;
}

// Завдання 2: варіант If15
// Знаходження суми двох найбільших чисел
void taskIf15()
{
    double a, b, c, sum;

    cout << "\n--- Zavdannya If15 ---" << endl;
    cout << "Vvedit try chysla: ";

    if (!(cin >> a >> b >> c))
    {
        cout << "Pomylka: nepravylne vvedennya!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    // Знаходимо суму двох найбільших чисел
    if (a <= b && a <= c)
        sum = b + c;
    else if (b <= a && b <= c)
        sum = a + c;
    else
        sum = a + b;

    cout << "Suma dvokh naibilshykh chysel = "
         << sum << endl;
}

// Завдання 3: геометричний варіант 14
// Перевірка належності точки чорній області
void taskGeometry14()
{
    double x, y;

    cout << "\n--- Geometry variant 14 ---" << endl;
    cout << "Vvedit koordynaty tochky x i y: ";

    if (!(cin >> x >> y))
    {
        cout << "Pomylka: nepravylne vvedennya!" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return;
    }

    // Умови чорної області потрібно додати
    // відповідно до точних меж фігур з таблиці 2.
    cout << "Koordynaty tochky: ("
         << x << ", " << y << ")" << endl;

    cout << "Matematychni umovy chornoyi oblasti "
         << "shche ne vyznacheni." << endl;
}

// Головна функція програми з меню
int main()
{
    int choice;

    do
    {
        cout << "\n========== MENU ==========" << endl;
        cout << "1 - Zavdannya If35" << endl;
        cout << "2 - Zavdannya If15" << endl;
        cout << "3 - Geometry variant 14" << endl;
        cout << "0 - Vyhid z programy" << endl;
        cout << "Vyberit zavdannya: ";

        if (!(cin >> choice))
        {
            cout << "Pomylka: vvedit nomer menyu!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        // Вибір завдання за допомогою switch
        switch (choice)
        {
            case 1:
                taskIf35();
                break;

            case 2:
                taskIf15();
                break;

            case 3:
                taskGeometry14();
                break;

            case 0:
                cout << "Programu zaversheno." << endl;
                break;

            default:
                cout << "Nepravylnyi punkt menyu!" << endl;
        }

    } while (choice != 0);

    return 0;
}
```
