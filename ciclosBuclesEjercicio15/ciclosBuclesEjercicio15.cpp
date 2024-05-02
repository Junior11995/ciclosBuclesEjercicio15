/*
* En este vídeo vamos a resolver los siguientes ejercicios: 

Ejercicio 15: Realice un programa que solicite al usuario que piense un número 
entero entre el 1 y el 100. El programa debe generar un numero aleatorio en 
ese mismo rango[1-100],e indicarle al usuario si el numero que dígito 
es menor o mayor al numero aleatorio, así hasta que lo adivine. 
y por ultimo mostrarle el numero de intentos que le llevo.

*/
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main() {
	
	int numero, dato, contador = 0;

	srand(time(NULL)); // Esta funcion crea un numero al azar
	dato = 1 + rand() % (100);

	cout << "\nDigite un numero: "; cin >> numero;

	do {

		if (numero > dato) {
			cout << "\nDigite un numero menor: "; cin >> numero;
		}
		else if (numero < dato) {
			cout << "\nDigite un numero mayor: "; cin >> numero;
		}

		contador++;
	} while (numero != dato);


	cout << "\nFELICIDADES ACERTASTE: ";
	cout << "\nEl numero de intentos es: " << contador<<endl;


	system("pause");
	return 0;
}
