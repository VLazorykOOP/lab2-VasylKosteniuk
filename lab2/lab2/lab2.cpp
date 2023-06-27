#include <iostream>

using namespace std;

int bitwiseMultiply(int a, int b) {
    int result = 0;

    while (b != 0) {
        // Якщо останній біт b встановлений в 1, то додаємо a до результату
        if (b & 1) {
            result += a;
        }

        // Зсуваємо a вліво на 1 біт
        a <<= 1;

        // Зсуваємо b вправо на 1 біт
        b >>= 1;
    }

    return result;
}

int main() {
    int choice;
    cout << "Enter your choice (1 - Calculate expression, 2 - Bitwise multiplication): ";
    cin >> choice;

    if (choice == 1) {
        int a = 10;
        int b = 20;
        int c = 30;
        int d = 40;

        int result = ((a << 5) + (a << 2) + (a << 1) + (c >> 6) - (b << 8) + (d << 7) - (c << 4) - ((a << 3) - (c << 1)));

        cout << "Result: " << result << endl;
    }
    else if (choice == 2) {
        int a, b;
        cout << "Enter a and b: ";
        cin >> a >> b;

        cout << "Product " << a << " and " << b << " is equal to " << bitwiseMultiply(a, b) << endl;
    }
    else {
        cout << "Invalid choice. Please enter either 1 or 2." << endl;
    }

    return 0;
}
