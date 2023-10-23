#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "[+] Программа лабораторных" << endl;
    cout << "[*] Введите номер задания" << endl;
    cout << "[1] - Проверка простого числа." << endl;
    cout << "[2] - Проверка положительного/отрицательного/нуля." << endl;
    cout << "[3] - Проверка високосного года." << endl;
    cout << "[4] - Проверка палиндрома." << endl;
    cout << "[5] - Проверка кратности 3 и 5." << endl;
    cout << "[6] - Проверка степени двойки." << endl;
    cout << "[7] - Проверка векового года." << endl;
    cout << "[8] - Проверка анаграммы строки." << endl;
    cout << "[9] - Проверка совершенного числа." << endl;

    int var;
    cin >> var;
    switch (var)
    {

    case 1:
        int main();
        {
            setlocale(LC_ALL, "Rus");
            int n;
            cout << "Введите число для проверки: ";
            cin >> n;
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    cout << "Число не простое" << endl;
                    break;
                }
                else if (i == n / 2) {
                    cout << "Число простое" << endl;
                }
            }
            return 0;
        }
    case 2:
        int main();
        {
            setlocale(LC_ALL, "Rus");
            int number;

            cout << "Введите число: ";
            cin >> number;

            if (number > 0)
            {
                cout << number << " является положительным числом" << endl;
            }
            else if (number < 0)
            {
                cout << number << " является отрицательным числом" << endl;
            }
            else
            {
                cout << number << " является нулем" << endl;
            }

            return 0;
        }
    case 3:
        int main();
        {
            setlocale(LC_ALL, "Rus");
            int number;

            cout << "Введите количество дней в году: ";
            cin >> number;
            if (number == 366) {
                cout << "Год является високосным" << endl;
            }
            else if (number < 366) {
                cout << "Год не является високосным" << endl;
            }
            else {
                cout << "stolko dney nety" << endl;
            }
        }
    case 4:
    case 5:
        int main();
        {
            setlocale(LC_ALL, "Rus");
            int num;
            cout << "Введите число: ";
            cin >> num;
            if (num % 3 == 0 && num % 5 == 0)
            {
                cout << "число кратно 3 и 5 ";
            }
            else
            {
                cout << "Число НЕ кратно 3 и 5";
            }
            return 0;
        }
        /*case 6:

            bool stepen(int n); {
                return n > 0 && (n & (n - 1)) == 0;
            }

            int main(); {
                setlocale(LC_ALL, "Rus");
                int number;
                cout << "Введите число: ";
                cin >> number;

                if (stepen(number)) {
                    cout << number << " - это степень числа 2";
                }
                else {
                    cout << number << " - это не степень числа 2";
                }
            }
         */
    case 7:
        int main(); {
            setlocale(LC_ALL, "Rus");
            int year;
            int n = 0;
            cout << "Введите год : ";
            cin >> year;

            if (year % 100 == 0) {
                cout << year << " Этот год вековой ." << endl;
            }
            else {
                cout << year << " Этот год не вековой ." << endl;
            }

            return 0;
        }

        break;

    }
}