#include <iostream>

using namespace std;

int main(){
	int filas, columnas;
	
	cout<<"ingrese el numero de filas: "<<endl;
	cin>>filas;
	cout<<"ingrese el numero de columnas: "<<endl;
	cin>>columnas;
	
	int matriz[filas][columnas];
	cout<<"Ingrese numero enteros: "<<endl;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cin>>matriz[i][j];
		}
	}
	
	cout<<"matriz" <<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){			
				cout<<matriz[i][j]<<" | ";
		}
		cout<<endl;
	}
	
	cout<<"triangulo iferior" <<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(j <=i){
				cout<<matriz[i][j]<<" | ";		
			}		
		}
		cout<<endl;
	}
	
	cout<<"triangulo superior: "<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			if(i<=j){
				cout<<matriz[i][j]<<" | ";		
			}
		}
		cout<<endl;
	}
	
	return 0;
}
