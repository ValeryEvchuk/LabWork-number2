#include <iostream>
#include <cmath>
using namespace std;

int main() {
    {
        int K, N;
        cout << "integer 28" << endl;
        cout << "Введіть номер дня року (1–365): ";
        cin >> K;
        cout << "Введіть номер дня тижня 1 січня (1–7): ";
        cin >> N;

        int result = (N + K - 1) % 7;
        result = 7 * (result == 0) + result * (result != 0);

        cout << "Номер дня тижня для " << K << "-го дня року: " << result << endl << endl;
    }
    {
        int x, y;
        cout << "Booleah 34" << endl;
        cout << "Введіть координати клітинки (x, y): ";
        cin >> x >> y;

        bool white = ((x + y) % 2 == 1);
        cout << "Поле (" << x << ", " << y << ") є білим: " << (white ? "Так" : "Ні") << endl << endl;
    }
    {

        double x;
        cout << "Math N11" << endl;
        cout << "Введіть x: ";
        cin >> x;

        double sinx = sin(x);
        double tanx = tan(x);

        // логарифм за основою 3
        double log3x = log(fabs(x)) / log(3.0);

        double numerator = 2.0 * tanx * sinx + 0.25 * sqrt(1 - sinx * sinx) * tanx;
        double denominator = cbrt(1 + (x * x) / 2.0 + log3x);
        double y = numerator / denominator;

        cout << "y = " << y << endl;
    }
    
}