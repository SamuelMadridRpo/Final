#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
} 

int main() {
	int op = 0, valor_total = 0, ped = 0;
	string pedido = "";
	gotoxy(43,13);
	cout << "Bienvenido a mi tienda!";
	Sleep(1500);
	while (op != 4) {
		system("cls");
		gotoxy(43, 8);
		cout << "1. Mostrar productos";
		gotoxy(43, 9);
		cout << "2. Hacer compras";
		gotoxy(43, 10);
		cout << "3. Factura total";
		gotoxy(43, 11);
		cout << "4. Salir";
		gotoxy(48, 12);
		cout <<"R: ";
		cin >> op;
		if (op == 1){
			gotoxy(34, 13);
			cout << "---------------------------------------------------------------\n";
			gotoxy(43, 14);
			cout << "1. Papas ($1500)";
			gotoxy(43, 15);
			cout << "2. Doritos ($2000)";
			gotoxy(43, 16);
			cout << "3. Chocolate ($700)";
			Sleep(2500);
		}
		if (op == 2){
			gotoxy(45, 13);
			cout << "Pedido: ";
			cin >> ped;
			if (ped == 1) {
				pedido += "\t- Papas\n";
				valor_total += 1500;
			}
			if (ped == 2) {
				pedido += "\t- Doritos\n";
				valor_total += 2000;
			}
			if (ped == 3) {
				pedido += "\t- Chocolate\n";
				valor_total += 700;
			}
		}
		if (op == 3){
			system("cls");
			if (pedido != "") {
				cout << "\nResumen del pedido: \n" << pedido;
				cout << "\nTotal: " << valor_total << "\n";
				pedido = "";
				valor_total = 0;
				Sleep(4500);
			} 
			else {
				gotoxy(38, 13);
				cout << "No has comprado nada por el momento. \n";
				Sleep(1500);
			}
		}
		if (op == 4) {
			system("cls");
			gotoxy(35, 13);
			cout << "Gracias por preferirnos, que tenga un buen dia!";
			Sleep(1500);
			return 0;
		}
		if (op > 4) {
			system("cls");
			gotoxy(45, 13);
			cout << "Opcion no valida.\n";
			Sleep(1500);
		}
	}
	return 0;
}

