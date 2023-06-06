#include <iostream>
#include <math.h>
#include <locale.h>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
	// Declaracion de variables de tipo entero
	int Ventas = 20;
	int Rs[20];
	int Opcion;
	int Codigo_valor = 0;
	int Opcion_busqueda = 0;
	int Opcion_precio = 0;
	int Codigo_producto[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int Cantidad_producto[] = { 0,20,20,20,20,20,20,20,20,20,20 };
	int Be, Terminar;
	int Guia;
	int F = 0;
	int Sus[20];
	int Col1 = 0;
	int OP2;
	int D;
	int Precio[] = { 0,1000,2000,3000,4000,5000,6000,7000,8000,9000,1000 };
	// Declaracion de variables de tipo string (Cadena de texto)
	string Como[20];
	string Nombre_busqueda;
	string Nombre_producto[] = { "n/n","Producto 1","Producto 2","Producto 3","Producto 4","Producto 5","Producto 6","Producto 7","Producto 8","Producto 9","Producto 10", };
	string Presentacion[] = { "n/n","Presentacion 1","Presentacion 2","Presentacion 3","Presentacion 4","Presentacion 5","Presentacion 6","Presentacion 7","Presentacion 8","Presentacion 9","Presentacion 10", };
	string Proveedor[] = { "n/n","Proveedor 1","Proveedor 2","Proveedor 3","Proveedor 4","Proveedor 5","Proveedor 6","Proveedor 7","Proveedor 8","Proveedor 9","Proveedor 10", };
	string Laboratorio[] = { "n/n","Laboratorio 1","Laboratorio 2","Laboratorio 3","Laboratorio 4","Laboratorio 5","Laboratorio 6","Laboratorio 7","Laboratorio 8","Laboratorio 9","Laboratorio 10", };
	string Nombre_1, Apellido, Cedula;

	setlocale(LC_CTYPE, "spanish"); // se seteo esta variable para que tome todos los simbolos del lenguaje espaÃƒÂ±ol.

	cout << "Porfavor ingrese su primer nombre: " << endl;
	cin >> Nombre_1;

	cout << "Porfavor ingrese su primer apellido: " << endl;
	cin >> Apellido;

	cout << "Porfavor ingrese su numero de cedula: " << endl;
	cin >> Cedula;

	cout << "Bienvendo " << Nombre_1 << Apellido << " a su farmacia virtual sana que sana colita de rana, porfavor ingrese la opcion de la ciudad en la cual se encuentra (Digite 4 para realizar una consulta)" << endl;
	cout << "1. BogotÃƒÂ¡" << endl;
	cout << "2. MedellÃƒÂ­n" << endl;
	cout << "3. CucutÃƒÂ¡" << endl;
	cout << "4. Consulta" << endl;
	cin >> Opcion;

	switch (Opcion)
	{
	case 1:
		int OP1;
		cout << "Porfavor seleccione en que zona de la ciudad estÃƒÂ¡: " << endl;
		cout << "1. Sur" << endl;
		cout << "2. Norte" << endl;
		cin >> OP1;

		switch (OP1) {
		case 1: {

			int Cantidad_producto[] = { 0,20,20,20,20,20,20,20,20,20,20 };
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar != 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break; }

		case 2:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 3:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 4:
			cout << "\nDesea realizar una consulta\n";
			cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
			cin >> Opcion_busqueda;

			do
			{
				switch (Opcion_busqueda) {

				case 1:
					cout << "Porfavor ingrese el codigo del producto a consultar" << endl;
					cin >> Codigo_valor;

					for (int I = 0; I < 11; I++)
					{
						if (Codigo_valor == Codigo_producto[I])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[I] << "\nNombre:\t\t" << Nombre_producto[I] << "\nPresentacion:\t" << Presentacion[I] << "\nPrecio:\t\t" << Precio[I] << "\nProveedor:\t" << Proveedor[I] << "\nLaboratorio:\t" << Laboratorio[I] << endl;
							break;
						}
					}

					cout << "\nDesea realizar otra consulta\n";
					cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 2:
					cout << "Porfavor ingrese el nombre del producto que desea buscar: " << endl;
					cin >> Nombre_busqueda;

					for (int K = 0; K < Nombre_busqueda.length(); K++)
					{
						Nombre_busqueda[K] = toupper(Nombre_busqueda[K]);
					}

					for (int L = 0; L < 11; L++)
					{
						if (Nombre_busqueda == Nombre_producto[L])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[L] << "\nNombre:\t\t" << Nombre_producto[L] << "\nPresentacion:\t" << Presentacion[L] << "\nPrecio:\t\t" << Precio[L] << "\nProveedor:\t" << Proveedor[L] << "\nLaboratorio:\t" << Laboratorio[L] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;

				case 3:
					cout << "Ingrese una maximo de valor para buscar: \n";
					cin >> Opcion_precio;
					for (int M = 0; M < 11; M++) {
						if (Opcion_precio >= Precio[M]) {
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[M] << "\nNombre:\t\t" << Nombre_producto[M] << "\nPresentacion:\t" << Presentacion[M] << "\nPrecio:\t\t" << Precio[M] << "\nProveedor:\t" << Proveedor[M] << "\nLaboratorio:\t" << Laboratorio[M] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 0:
					Opcion_busqueda = 0;
					break;

				default:
					cout << "Opcion invalida" << endl;
					cin >> Opcion_busqueda;
					system("cls");

					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;
				}
			} while (Opcion_busqueda != 0);
			break;

		}
	case 2: {
		int OP1;
		cout << "Porfavor seleccione en que zona de la ciudad estÃƒÂ¡: " << endl;
		cout << "1. Sur" << endl;
		cout << "2. Norte" << endl;
		cin >> OP1;

		switch (OP1) {
		case 1:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar != 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 2:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 3:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 4:
			cout << "\nDesea realizar una consulta\n";
			cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
			cin >> Opcion_busqueda;

			do
			{
				switch (Opcion_busqueda) {

				case 1:
					cout << "Porfavor ingrese el codigo del producto a consultar" << endl;
					cin >> Codigo_valor;

					for (int I = 0; I < 11; I++)
					{
						if (Codigo_valor == Codigo_producto[I])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[I] << "\nNombre:\t\t" << Nombre_producto[I] << "\nPresentacion:\t" << Presentacion[I] << "\nPrecio:\t\t" << Precio[I] << "\nProveedor:\t" << Proveedor[I] << "\nLaboratorio:\t" << Laboratorio[I] << endl;
							break;
						}
					}

					cout << "\nDesea realizar otra consulta\n";
					cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 2:
					cout << "Porfavor ingrese el nombre del producto que desea buscar: " << endl;
					cin >> Nombre_busqueda;

					for (int K = 0; K < Nombre_busqueda.length(); K++)
					{
						Nombre_busqueda[K] = toupper(Nombre_busqueda[K]);
					}

					for (int L = 0; L < 11; L++)
					{
						if (Nombre_busqueda == Nombre_producto[L])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[L] << "\nNombre:\t\t" << Nombre_producto[L] << "\nPresentacion:\t" << Presentacion[L] << "\nPrecio:\t\t" << Precio[L] << "\nProveedor:\t" << Proveedor[L] << "\nLaboratorio:\t" << Laboratorio[L] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;

				case 3:
					cout << "Ingrese una maximo de valor para buscar: \n";
					cin >> Opcion_precio;
					for (int M = 0; M < 11; M++) {
						if (Opcion_precio >= Precio[M]) {
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[M] << "\nNombre:\t\t" << Nombre_producto[M] << "\nPresentacion:\t" << Presentacion[M] << "\nPrecio:\t\t" << Precio[M] << "\nProveedor:\t" << Proveedor[M] << "\nLaboratorio:\t" << Laboratorio[M] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 0:
					Opcion_busqueda = 0;
					break;

				default:
					cout << "Opcion invalida" << endl;
					cin >> Opcion_busqueda;
					system("cls");

					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;
				}
			} while (Opcion_busqueda != 0);
			break;

		}

	case 3:
		int OP3;
		cout << "Porfavor seleccione en que zona de la ciudad estÃƒÂ¡: " << endl;
		cout << "1. Sur" << endl;
		cout << "2. Norte" << endl;
		cin >> OP3;

		switch (OP3) {
		case 1:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar != 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 2:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 3:
			do
			{
				system("cls");

				cout << "****************************************************************" << endl;
				cout << "| Codigo | Nombre | Laboratorio | Cantidad disponible | Precio |" << endl;
				cout << "****************************************************************" << endl;

				for (int A = 1; A < 11; A++) // Ciclo for revisa si todo esta en el ranfo de 1 a 10  
				{
					cout << "\t" << Codigo_producto[A] << "\t|" << Nombre_producto[A] << "| " << Laboratorio[A] << "     |     " << Cantidad_producto[A] << "\t|    " << Precio[A] << "    |" << endl;
				}

				cout << "**************************************************************" << endl;

				cout << "Porfavor seleccione el codigo del producto que desea comprar: " << endl;
				cin >> OP2;

				cout << "Porfavor indique la cantidad de productos a comprar: " << endl;
				cin >> D;

				if (Cantidad_producto[OP2] > 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] - D;
					Sus[F] = OP2;
					Col1++;
					Rs[F] = D;
					F = F + 1;
				}

				if (Cantidad_producto[OP2] < 0)
				{
					Cantidad_producto[OP2] = Cantidad_producto[OP2] + D;
					cout << "No hay disponibilidad de medicamentos por el momento." << endl;
				}

				cout << "Desea usted terminar la compra en proceso: " << endl;
				cout << "1. Si 2. No" << endl;
				cin >> Terminar;

			} while (Terminar == 1);
			cout << "Su nombre es: " << Nombre_1 << Apellido << endl;
			cout << "Su numero de cedula es: " << Cedula << endl;

			cout << "*****************************" << endl;
			cout << "Lista de productos comprados." << endl;
			cout << "*****************************" << endl;

			for (int Z = 0; Z < Col1; Z++)
			{
				cout << "| " << Codigo_producto[Sus[Z]] << "    " << Nombre_producto[Sus[Z]] << "    " << Rs[Z] << "    " << (Rs[Z] * 1000) << " |" << endl;
				cout << "*****************************" << endl;
			}
			system("Pause");
			break;

		case 4:
			cout << "\nDesea realizar una consulta\n";
			cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
			cin >> Opcion_busqueda;

			do
			{
				switch (Opcion_busqueda) {

				case 1:
					cout << "Porfavor ingrese el codigo del producto a consultar" << endl;
					cin >> Codigo_valor;

					for (int I = 0; I < 11; I++)
					{
						if (Codigo_valor == Codigo_producto[I])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[I] << "\nNombre:\t\t" << Nombre_producto[I] << "\nPresentacion:\t" << Presentacion[I] << "\nPrecio:\t\t" << Precio[I] << "\nProveedor:\t" << Proveedor[I] << "\nLaboratorio:\t" << Laboratorio[I] << endl;
							break;
						}
					}

					cout << "\nDesea realizar otra consulta\n";
					cout << "\tOpcion buscar\n\n1. Busqueda por codigo\t2. Busqueda por nombre\n3. Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 2:
					cout << "Porfavor ingrese el nombre del producto que desea buscar: " << endl;
					cin >> Nombre_busqueda;

					for (int K = 0; K < Nombre_busqueda.length(); K++)
					{
						Nombre_busqueda[K] = toupper(Nombre_busqueda[K]);
					}

					for (int L = 0; L < 11; L++)
					{
						if (Nombre_busqueda == Nombre_producto[L])
						{
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[L] << "\nNombre:\t\t" << Nombre_producto[L] << "\nPresentacion:\t" << Presentacion[L] << "\nPrecio:\t\t" << Precio[L] << "\nProveedor:\t" << Proveedor[L] << "\nLaboratorio:\t" << Laboratorio[L] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;

				case 3:
					cout << "Ingrese una maximo de valor para buscar: \n";
					cin >> Opcion_precio;
					for (int M = 0; M < 11; M++) {
						if (Opcion_precio >= Precio[M]) {
							cout << "\nEl producto fue encontrado\n" << endl;
							cout << "Codigo:\t\t" << Codigo_producto[M] << "\nNombre:\t\t" << Nombre_producto[M] << "\nPresentacion:\t" << Presentacion[M] << "\nPrecio:\t\t" << Precio[M] << "\nProveedor:\t" << Proveedor[M] << "\nLaboratorio:\t" << Laboratorio[M] << endl;
							cout << "\n\n";
						}
					}
					cout << "\nDesea realizar otro tipo de busqueda?\n";
					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;

				case 0:
					Opcion_busqueda = 0;
					break;

				default:
					cout << "Opcion invalida" << endl;
					cin >> Opcion_busqueda;
					system("cls");

					cout << "\tOpcion buscar\n\n1.Busqueda por Codigo\t2.Busqueda por nombre\n3.Busqueda por valor\n\n[0] Salir\n";
					cin >> Opcion_busqueda;
					break;
				}
			} while (Opcion_busqueda != 0);
			break;

		}
		break;
	}
	}
}