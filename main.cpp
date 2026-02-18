#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n, m, i;
    cout << "Введите натуральные числа m и n"<<endl;
    cout << "n= "; cin >> n;
    cout << "m= "; cin >> m;
    for (int i = 1; i < n; i++) {
        int num = i;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if (sum == m) {
            cout << i << "  ";
        }
    }
    system("pause");
    return 0;
//Даны натуральные n и m. Получить все меньшие n натуральные числа, сумма кубов цифр которых равна m.
