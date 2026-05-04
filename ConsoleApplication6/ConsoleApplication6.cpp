#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    printf("Введите число x и шаг n:");
    double x, n;
    scanf_s("%lf", &x);
    scanf_s("%lf", &n);
    if (n == 0) {
        cout << "Ошибка: шаг не может быть равен 0" << endl;
        return 1;
    }
    double y = round(x / n) * n;
    cout << "Результат:" << y << endl;
}
