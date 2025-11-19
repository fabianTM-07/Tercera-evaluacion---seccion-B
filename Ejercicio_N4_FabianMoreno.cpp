/*ejercio n4*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int opcion;
	float bolivares = 0;
	float dolares = 0;
	float euros = 0;
	float tasaEuros = 275.814;
	float tasaDolares = 237.750;
	float metaMonetaria = 0;
	float salario = 0;
	float gastos = 0;
	float ahorrosMensuales = 0;
	float tiempo = 0;
	float pesoActual = 0;
	float pesoDeseado = 0;
	float kgPorMes = 0;
	float kgRestantes = 0;
	char key;
	
	do {
	cout << "\nQue desea hacer?\n" << "1.Convertir dolares a Bolivares\n" << "2.Convertir Bolivares a Euros\n" << "3.Calcular meta monetaria\n" << "4. Calcular meta de peso deseado\n\n";
	cin >> opcion;
	
	switch(opcion){
		
		case 1: 
			
			cout << "Ingrese cantidad de dolares: ";
			cin >> dolares;
			
			bolivares = dolares * tasaDolares;
			
			cout << "El equivalente seria: " << bolivares << "\n";
			
			break;
		
	case 2: 
		
		cout << "Ingrese cantidad de Bolivares: ";
		cin >> bolivares;
		
		euros = bolivares / tasaEuros;
		
		cout << "El equivalente seria: " << euros << "\n";
	
		break;
	
	
	case 3: 
		
		cout << "Ingrese su meta monetaria deseada (BS): \n";
		cin >> metaMonetaria;
		
		cout << "Ingrese su salario (BS): \n";
		cin >> salario;
		
		cout << "Ingrese sus gastos mensuales (BS): \n";
		cin >> gastos;
		
		ahorrosMensuales = salario - gastos;
		
		tiempo =  metaMonetaria /ahorrosMensuales;
		
		cout << "Los meses que necesitaria para alcanzar su meta monetaria deseada serian: " << tiempo << "\n";
		
		break;
	
	
	case 4: 
		
		cout << "Ingrese su peso actual (KG): ";
		cin >> pesoActual;
		
		cout << "Ingrese su meta de peso deseada (KG): ";
		cin >> pesoDeseado;
		
		cout << "Ingrese cuantos kg te comprometes a perder por mes: ";
		cin >> kgPorMes;
		
		kgRestantes = pesoActual - pesoDeseado;
		
		tiempo = kgRestantes / kgPorMes;
		
		string texto1 = "Los meses que necesitaria para conseguir su peso deseado serian: ";
		string tiempo = tiempo;
		string texto2 = texto1 = tiempo;
		string texto3 = "No te estas comprometiendo a perder peso\n";
		
		 string mensaje = (kgPorMes <= 0) ? texto2 : texto3;
			cout << mensaje;
		
		break;
	
	}
	
	cout << "Presione Y para continuar, o cualquier otra tecla para finalizar. ";
	cin >> key;
	
	
} while (key == 'Y' || key == 'y');

return 0;
}
