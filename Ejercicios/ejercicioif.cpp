#include <iostream>
using namespace std;

int main()
{
    int producto;

    do
    {
        cout << "\n=== MENU ===\n";
        cout << "\n1. Tortas \n";
        cout << "2. Palomitas \n";
        cout << "3. Aguas\n";
        cout << "4. Salir\n";
        cout << "Ingrese el numero del producto que desea adquirir: " << endl;
        cin >> producto;

        if (producto == 1)
        {
            cout << "Tortas $50";
        }
        else if (producto == 2)
        {
            cout << "Palomitas $30";
        }
        else if (producto == 3)
        {
            cout << "Aguas $20";
        }
        else if (producto == 4)
        {
            cout << "Saliendo del programa...";
        }
        else
        {
            cout << "Opcion no valida intenta nuevamente.";
        }

    } while (producto != 4);

    return 0;
}
