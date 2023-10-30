#include <iostream>
using namespace std;


int main()
{
    setlocale(0, "");
    int num, num1, length, width;
    char sim;
    cout << "Выбрете действие" << endl << "[1] Линия" << endl << "[2] Квадрат" << endl << "[3] Прямоугольник" << endl << "[4] Треугольник" << endl << "[5] Выход" << endl;
    cin >> num;
    system("cls");
    switch (num) {

    case 1:
        cout << "Выберете расположение" << endl;
        cout << "[1] Вертикальная" << endl;
        cout << "[2] Горизантальная" << endl;
        cin >> num1;
        system("cls");
        switch (num1) {

        case 1:
            do {
                cout << "Ведите длину:" << endl;
                cin >> length;
                if (length < 0) {
                    cout << "Число не может быть отрицательным" << endl;
                }
            } while (length < 0);
            cout << "Напешите составляющее линии" << endl;
            cin >> sim;
            for (int s1 = 0; s1 < length; s1++) {
                cout << sim << endl;
            }
            break;


        case 2:
            do{
            cout << "Ведите длину:" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (length < 0);
            cout << "Напешите из чего будет линия" << endl;
            cin >> sim;
            for (int s2 = 0; s2 < length; s2++) {
                cout << sim;
            }
            break;
        }
        break;
    case 2:
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cin >> num1;
        switch (num1) {

        case 1:

            do{
            cout << "Введите длину" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
        } while (length < 0);
            cout << "Напешите из чего будет куб" << endl;
            cin >> sim;
            cout << endl;
            for (int i = 0; i < length; i++) {
                for (int s = 0; s < length; s++) {
                    if ((s == 0) || (s == length - 1) || (i == 0) || (i == length - 1))
                        cout << sim << " ";
                    else {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            break;

        case 2:
            do{
            cout << "Введите длину" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
        } while (length < 0);
            cout << "Напешите из чего будет куб" << endl;
            cin >> sim;
            cout << endl;
            for (int i = 0; i < length; i++) {
                for (int s = 0; s < length; s++) {
                    cout << sim << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }
        break;

    case 3:
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cin >> num1;
        switch (num1) {

        case 1:
            do{
            cout << "Введите высоту" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (length < 0);
            do{
            cout << "Введите ширену" << endl;
            cin >> width; 
            if (width < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (width < 0);
            cout << "Напешите из чего будет куб" << endl;
            cin >> sim;
            cout << endl;
            for (int i = 0; i < length; i++) {
                for (int s = 0; s < width; s++) {
                    if ((s == 0) || (s == width - 1) || (i == 0) || (i == length - 1))
                        cout << sim << " ";
                    else {
                        cout << " " << " ";
                    }
                }
                cout << endl;
            }
            break;

        case 2:
            do{
            cout << "Введите высоту" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (length < 0);
            do{
            cout << "Введите ширену" << endl;
            cin >> width;
            if (width < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (width < 0);
            cout << "Напешите из чего будет куб" << endl;
            cin >> sim;
            cout << endl;
            for (int i = 0; i < length; i++) {
                for (int s = 0; s < width; s++) {
                    cout << sim << " ";
                }
                cout << endl;
            }
            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }
        break;

    case 4:
        cout << "[1] Полый" << endl;
        cout << "[2] Заполненный" << endl;
        cin >> num1;
        switch (num1) {
        case 1:
            do{
            cout << "Введите высоту:" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
            } while (length < 0);
            cout << "Введите из чего будет треугольник" << endl;
            cin >> sim;
            for (int i = 1; i <= length; i++) {
                for (int s = 1; s <= length * 2; s++) {
                    if (s == ((length + 1) - (i - 1)) || s == ((length + 1) + (i - 1)))
                        cout << sim;
                    else
                        if (i == length && s > 1)
                            cout << sim;
                        else
                            cout << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            do{
            cout << "Введите высоту:" << endl;
            cin >> length;
            if (length < 0) {
                cout << "Число не может быть отрицательным" << endl;
            }
        } while (length < 0);
            cout << "Введите из чего будет треугольник" << endl;
            cin >> sim;
            for (int i = 0; i < length; i++) {
                for (int s = 1; s < length - i; s++) {
                    cout << " ";
                }
                for (int s = length - i * 2; s <= length; s++) {
                    cout << sim;
                }
                cout << endl;
            }
            break;
        default:
            cout << "Выберете номер из списка" << endl;
        }
        break;

    case 5:
        cout << "Хорошего дня";
        break;
    default:
        cout << "Выберете номер из списка" << endl;
        break;
    }
    return 0;
}