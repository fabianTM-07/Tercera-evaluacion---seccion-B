/*Realice un programa que muestre en pantalla un rectangulo sin relleno (solo los bordes), y que dentro del mismo aparezca el anio de su nacimiento */

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

void Rectangulo(int x, int y, int alto, int ancho){
	
	for (int i = 0; i < alto; i++){
		
		for (int j = 0; j < ancho; j++){
			cout << " ";
			
			if (i == 0 || j == 0 || i == alto - 1 || j == ancho - 1){
				
		gotoxy (x + j, y + i);
		cout << "*";
	}	
		}
	}
}

	
	//=======================================================================================
	
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
	
	//==================================================================================
	
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
		
		//=======================================================================
		
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

int main(){
	
	char key;
	do{
	
	Rectangulo(1,1,20,80);
	
	DOS(5,4,10);
	
		CERO(16,4,10);
		
			CERO(27,4,10);
			
				SIETE(38,4,10);
	
		cout << "\n\n\n\n\n\n\n\n\nDesea volver a mostrarlo? si es asi, Presione Y, si no, presione cualquier otra tecla.\n";
	cin >> key;
	
	system("pause");

}while(key == 'Y' || key == 'y');

	return 0;

} 
