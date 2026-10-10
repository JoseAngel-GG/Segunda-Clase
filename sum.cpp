#include <iostream>
using namespace std;

int main(){

    //Algunas sumatorias para comprobar
    //3 ----->6
    //5 ----->15

    int n, a=0;
    cout << "Introduce un numero para saber su sumatoria hasta el numero" << endl;
    cin >> n;

    for(int i=1; i<=n; i++){

        int result = a + i;
        a = result;

    }

    cout << "esta es la sumatoria " << a;





}
