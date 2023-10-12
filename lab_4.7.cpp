// lab_4.7.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps, a, S;
    int n;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(15) << "ln((x+1)/(x-1))" << " |"
        << setw(7) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        n = 0;
        S = 0;
        do {
            n++;
            a = 1.0 / (n * pow(x,n));
            S += a;
        } while (abs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(10) << log((x + 1) / (x - 1)) << " |"
            << setw(10) << setprecision(10) << 2*S << " |"
            << setw(5) << n << " |"
            << endl;

        x += dx;
    }

    cout << "-------------------------------------------------" << endl;
    return 0;
}
