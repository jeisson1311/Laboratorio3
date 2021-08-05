#include <iostream>

using namespace std;


int main()
{
    int saldo= 100000;
    int opc, retiro, contador=0;
    int a[] ={50000,20000,10000};
    bool verdad= true;

    while (verdad){
        system("cls");
        cout << "Bienvenido al cajero"<< endl;
        cout << "Elija una opcion: "<< endl;
        cout << "1. Retiro de dinero"<< endl;
        cout << "2. consultar saldo"<< endl;
        cout << "0. Salir"<< endl;
        cout << endl;
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Cuanto dinero desea retirar: "<< endl;
            cin >> retiro;
            if (retiro>saldo){
                cout << "Saldo insuficiente para realizar la transaccion."<< endl;
            }
            else if (retiro%10000!=0){
                cout <<"La cantidad de dinero ingresada no es valida, el valor debe ser multiplos de 10000" << endl;
            }
            else{
            saldo -= retiro;
            for (int i=0; i<3; i++) {
                while(retiro>=a[i]) {
                    contador++;
                    retiro -=a[i];
                }
                cout << "Billetes de " << a[i] << "son: " << contador << endl;
                contador = 0;

            }
            saldo -=1000;
            cout << "\nEl saldo disponible es: "<< saldo << endl;
        }
        break;


       case 2:
            saldo -=1000;
         cout << "\nEl saldo disponible es: "<< saldo << endl;
         break;

       case 0:
            cout << "Gracias, vuelva pronto."<< endl;
            verdad= false;
            break;

        default:
            cout << "opcion incorrecta, intentelo de nuevo. " << endl;
            break;
        }
       system("PAUSE");
    }

    return 0;
}
