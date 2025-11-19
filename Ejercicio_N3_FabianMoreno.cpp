/*Ejercicio 3*/

#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

void gotoxy(int x, int y) {
	
	HANDLE hcon;
	hcon = GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition (hcon, dwPos);
}

void CERO (int x, int y,  int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void UNO (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (j == 0){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void DOS (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || (j == n - 1 && i <= j / 2) || i == n / 2 || (j ==  0 && i >= n / 2) || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void TRES (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (j == n - 1 || (i == n / 2 && i <= n / 2) || i == 0 || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void CUATRO (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (j == n - 1 || (i == n / 2 && i <= n / 2) || (j == 0 && i <= n / 2)){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void CINCO (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || (j == 0) || i == n / 2 || (j == n - 1 && i >= n / 2) || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void SEIS (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || (j == 0 && i >= j / 2) || i == n / 2 || (j ==  n - 1 && i >= n / 2) || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void SIETE (int x, int y,  int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || j == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void OCHO (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || (j == n - 1 && i <= j / 2) || i == n / 2 || (j ==  0 && i >= n / 2) || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

void NUEVE (int x, int y, int n){
	
	for (int i = 0; i < n; i++){
		
		for (int j = 0; j < n; j++){
			
				if (i == 0 || (j == n - 1 && i <= j / 2) || i == n / 2 || (j ==  0 && i >= n / 2) || i == n - 1){
		
		gotoxy (x + j, y + i);
		cout << "*";
	}
			
		}
	}
}

int main(){
	
	int numero = 0;
	
	TRES(1,1,5);
	
	cout << "Ingrese un numero del 1 al 999: ";
	cin >> numero;
	
}
