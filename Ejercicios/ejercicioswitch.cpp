#include <iostream>
using namespace std;

int main()
{
    int producto;

    do
    {

        cout << "  \n=== MENU ===\n";
        cout << "1. Tortas\n";
        cout << "2. Palomitas\n";
        cout << "3. Aguas\n";
        cout << "4. Salir\n";
        cout << "Ingrese el numero del producto que desea adquirir: ";
        cin >> producto;

        switch (producto)
        {
        case 1:
            cout << "Tortas $50\n";
            break;
        case 2:
            cout << "Palomitas $30\n";
            break;
        case 3:
            cout << "Aguas $20\n";
            break;
        case 4:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opcion no valida intenta nuevamente.\n";
            break;
        }

    } while (producto != 4);

    return 0;
}
