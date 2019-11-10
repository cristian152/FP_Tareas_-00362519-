
#include<iostream>

using namespace std;

int main(){
	int z;
	float X[3], Y[3], suma=0, suma1=0, prom=0;
	
	cout<<"digite un numero: "<<endl;
	cin>>z;
	
	cout<<endl;
	
	cout<<"ingrese valor para x"<<endl;
	
	for(int i=0; i<z; i++){
		
		cout<<"valores "<< i+1 <<"x:";cin>>X[i];
	}
	cout<<endl;
	
	cout<<"ingrese valor para y: "<<endl;
	
	cout<<endl;
	
	for (int j=0; j<z; j++){
		
		cout<<"valores " <<j+1<<"  Y: "<<endl;
		cin>>Y [j];
	}
	for(int i=0; i<z; i++){
		for(int j=0; j<z; j++){
			suma=suma+X[i]*Y[j];
			suma1=suma1+Y[j];	
		}
	}
	prom = suma/suma1;
	cout<<endl;
	cout<<"arreglo  x:"<<endl;
	for(int i=0; i<z; i++){
		
		cout<<X[i]<<" | ";
	}
	cout<<endl;
	cout<<"arreglo  y:"<<endl;
	
	for (int j=0;j<z;j++){
		cout<<Y[j]<<" | ";
	}
	cout<<endl;
	cout<<"el promedio es: "<< prom <<endl;
	
	return 0;
}
