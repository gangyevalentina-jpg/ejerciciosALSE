#include <iostream>
using namespace std;

int main() {
    int d, mayor = 0, ma = 0, me = 0, a = 0, e = 0;
    cout << "De cuántos días conoce el precio de la acción?: ";
    cin >> d;

    int price[d];

    for (int i = 0; i < d; i++) {
        cout << "Precio día " << i + 1 << ": ";
        cin >> price[i];
    }

    for (int i = 0; i < d; i++) {
        for (int j = i; j < d; j++) {
            if (price[j] - price[i] > mayor) {
                mayor = price[j] - price[i];
                a = i;
                e = j;
                ma = price[i];
                me = price[j];
            }
        }
    }

    if (mayor > 0) {
        cout << "\nCompre el día " << a + 1 << " (precio: " << ma << ")" << endl;
        cout << "Venda el día " << e + 1 << " (precio: " << me << ")" << endl;
        cout << "Ganancia: " << mayor << endl;
    } else {
        cout << "\nNo hay ganancia posible." << endl;
    }

    return 0;
}
