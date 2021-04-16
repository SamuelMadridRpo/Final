#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <windows.h>

using namespace std;

int contador(int n) {
	int cont=0;
	while(cont<=n) {
		cout<< cont<<"\n";
		cont=cont+1;
	}
	
	
}

int main() {
	int n;
	cout<< "Ingrese un numero \n";
	cin>> n;
	contador(n);
	cout<< "Adiós";
}

