
#include <iostream>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas,k;
	
	cout<<"ingrese el numero de filas: " <<endl; 
	cin>>filas;
	cout<<"ingrese el numero de columnas: "<<endl;
	cin>>columnas;
	cout<<"Ingrese un numero entero: "<<endl;
	cin>>k;
		
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"ingrese un numero: ["<<i<<"]["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			numeros[i][j]*k;
		}
	}
	
	cout<<"matriz: " <<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j]<<" | ";			
		}
		
		cout<<"\n";
	}
	
	cout<<"producto: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j]*k<<" | ";
		}
		
		cout<<"\n";
	}
	
	return 0;
}
