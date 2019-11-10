
#include<iostream>

using namespace std;

int main(){
	int x, filas, columnas, res;
	float suma, prom, matriz[100][100];
	
	cout<<"ingrese el numero de filas: "<<endl; 
	cin>>filas;
	cout<<"ingrese el numero de columnas: "<<endl;
	cin>>columnas;
	
	cout<<"Ingrese los nuemros la matriz" <<endl;
	for(int i=1; i<=filas; i++){
		for(int j=1; j<=columnas; j++){
			cout<<"Ingrese nota " <<j<<" del estudiante: ";
			cin>>matriz[i][j];
		}		
	}
	
	for(int i=1; i<=filas; i++){
		for(int j=1; j<=columnas; j++){
			cout<<matriz[i][j]<<" | ";
		}
		cout<<endl;		
	}
		suma=0;
		for( int i=1; i<=filas;i++){
			for (int j=1; j<=columnas; j++){
				suma =suma+matriz[i][j];
			}
		}		
		prom = suma/filas;
		cout<<"promedio de lo estudiantes: "<<prom<<endl;
	
	for(int i=1; i<=filas; i++){
		for(int j=1; j<=columnas; j++){
			cout<<matriz[i][j]<<" | ";
		}
		cout<<endl;		
	}
	
	cout<<"Desea el promedio de un estudiante?"<<endl;
	cout<<"1-si | 2-no"<<endl;
	cin>>res; 
	
	while(res<=2){
	
		if (res==1){
			cout<<"Ingrese la fila perteneciente al estudiante que desea: "<<endl;
			cin>>x;
			if (x>=1 && x<=filas){
				suma=0;
				for(int j=1;j<=columnas;j++){
					suma = suma+matriz[x][j];
				}
				prom = suma/columnas;
				cout<<"El promedio del estudiante es: "<<prom<<endl;
			}
			else{
				cout<<"El dato ingresado no esta"<<endl;
			}
			for(int i=1; i<=filas; i++){
				for(int j=1; j<=columnas; j++){
					cout<<matriz[i][j]<<" | ";
				}
				cout<<endl;		
			}
			cout<<"¿desea sacar promedio de un estudiante?"<<endl;
			cout<<"1-si | 2-no"<<endl;
			cin>>res;
		}
		else{
			cout<<"bye"<<endl;
			break;
		}		
}
	return 0;
}
