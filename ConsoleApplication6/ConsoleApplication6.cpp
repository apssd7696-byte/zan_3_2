#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "");
    double x, n;

    std::cout << "Введите число x: ";
    std::cin >> x;
    std::cout << "Введите шаг n: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "Ошибка: шаг не может быть равен 0" << std::endl;
        return 1;
    }

    double result = round(x / n) * n;

    std::cout << "Ближайшее число, кратное " << n << ": " << result << std::endl;

    return 0;
}