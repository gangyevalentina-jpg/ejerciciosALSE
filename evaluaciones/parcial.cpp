#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
};

//calcula la mayor magnitud y me retorna la posicion    
double calcularMayorMagnitud(Point* puntos, int n, int &indiceMayorMagnitud) {
    double mayor = 0;
    indiceMayorMagnitud = 0;

    for (int i = 0; i < n; i++) {
        double x1 = puntos[i].x;
        double y1 = puntos[i].y;
        double suma = pow(x1, 2) + pow(y1, 2);
        double raiz = sqrt(suma);

        if (raiz > mayor) {
            mayor = raiz;
            indiceMayorMagnitud = i;
        }
    }

    return mayor;
}

int main() {
    int n;
    cout << "Ingrese el numero de puntos: ";
    cin >> n;

    Point* puntos = new Point[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el punto " << i + 1 << " (x y): ";
        cin >> puntos[i].x >> puntos[i].y;
    }

    int indice;
    double mayorMagnitud = calcularMayorMagnitud(puntos, n, indice);

    cout << "\nEl punto con mayor magnitud es: ("
         << puntos[indice].x << ", "
         << puntos[indice].y << ")"
         << " con magnitud: " << mayorMagnitud << endl;

    return 0;
}

