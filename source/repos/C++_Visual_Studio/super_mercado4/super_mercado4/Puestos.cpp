#include "Puestos.h"
/*

#include <iostream>
#include <mysql.h>

using namespace std;

int puestos() {
    int opcion;
    do {
        int id = 0;
        string puesto;

        cout << "Bienvenido al programa para editar Clientes 'Super Mercado los Juanitos'" << endl;
        cout << "�Qu� deseas realizar o modificar?" << endl;
        cout << "1. Crear Puesto" << endl;
        cout << "2. Leer Puestos" << endl;
        cout << "3. Borrar Puesto" << endl;
        cout << "4. Actualizar Puesto" << endl;
        cout << "5. Volver al men� principal" << endl;

        int opcion;
        cout << "Elige la opci�n que deseas realizar: ";
        cin >> opcion;
        cin.ignore(); // Para ignorar el car�cter de nueva l�nea pendiente

        // Evaluar la opci�n seleccionada
        switch (opcion) {
        case 1:
            cout << "Ha seleccionado crear Puesto" << endl;

            cout << "Ingrese puesto: ";
            getline(cin, puesto);


            // Crear el puesto y llamar al m�todo para guardar en la base de datos
            {
                Puestos puesto = Puestos(id, puesto);
                puesto.crear();
            }

            break;

        case 2:
            cout << "Ha seleccionado 'Leer Puestos'" << endl;
            {
                Puestos Npuesto = Puestos(id,puesto);
                Npuesto.leer();
            }
            break;

        case 3:
            cout << "Ha seleccionado 'Borrar Puesto '" << endl;

            {
                Puestos Npuesto = Puestos(id,puesto);
                Npuesto.leer();

                cout << "Ingrese el ID a eliminar: ";
                cin >> id;
                cin.ignore();
                Npuesto.setId(id);
                Npuesto.leer();
                Npuesto.borrar();
                Npuesto.leer();
            }

            break;

        case 4:
            cout << "Ha seleccionado 'Actualizar Puestos'" << endl;
            {
                Puestos Npuesto = Puestos(id, puesto);
                Npuesto.leer();

                cout << "Ingrese el ID del puesto: ";
                cin >> id;
                cin.ignore();
                Npuesto.setId(id);

                cout << "Ingrese el Puesto: ";
                getline(cin, puesto);
                Npuesto.setPuesto(puesto);

                Npuesto.actualizar();
                Npuesto.leer();
            }
            break;

        case 5:
            cout << "Volviendo al men� principal..." << endl;
            break;

        default:
            cout << "Error, por favor escribe un n�mero correcto" << endl;
            break;
        }
    } while (opcion != 5); // Salir del bucle cuando se selecciona la opci�n 5
    // Salir del switch y volver al men� principal
}

*/