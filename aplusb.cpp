#include <iostream>
#include <cmath>
using namespace std;

int main(){

    // 5 problemas

    int problemas;
    cout << "Cuantos problemas tiene que resolver Tudor" << endl;
    cin >> problemas;

    int i=0;

    while (i < problemas)
    {
        
        int a,b;
        cout << "Introduce un entero a: ";
        cin >> a;
        cout << "Introduce un entero b: ";
        cin >> b;

        int suma=a+b;

        cout << a << " + " << b << " = " << suma << endl;

        i++;

    }   
    




}