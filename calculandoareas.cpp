#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    double a;
    const double PI = acos(-1.0);
    cout << "Para determinar la superficie entre un circulo y un cuadrado" << endl;
    cout << "Esto con el fin de abrir hoyos" << endl;
    cout << "Por lo que necesito que me digas primero cuantos terrenos cuadrados tienes" << endl;
    cin >> n;
    cout << "Ahora dame lo que mide un lado de los diferentes terrenos cuadrados" << endl;
    

    for(int i=1; i<=n; i++){

        cin >> a;
        double AreaCuadrado=pow(a,2);
        double AreaCirculo=(PI*pow(a,2))/4;
        double AreaTotal=AreaCuadrado-AreaCirculo;

        cout << AreaTotal << endl;

    }
    







}