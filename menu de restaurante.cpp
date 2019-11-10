#include <iostream>

using namespace std; 
int main(){
	int desayuno=1, almuerzo=2, cena=3, postres=4, antojos=5, opcion;
	
	cout <<"restaurante Don Cristian"<<endl;
	
	cout <<"ingrese que desea comer"<<endl;
	cout <<"hay desayunos, almuerzo, cena, postres, antojos"<<endl;
	cin>>opcion;
	
	if (opcion==1){
		int pupusas=1, desayuno_tipico=2, l;
		cout <<"ingrese que quiere de desayuno"<<endl;
		cout <<"hay: 1-pupusas, 2-desayuno tipico"<<endl;
		cin>>l;
	} 
	if (opcion==2){
		int sopa=1, pollo=2, a;
		cout <<"ingrese que quiere de almuerzo: "<<endl;
		cout <<"hay: 1-sopa, 2-pollo"<<endl;
		cin>>a;
	}
	if (opcion==3){
		int carne=1, tacos=2, b;
		cout <<"ingrese que quiere de cena: "<<endl;
		cout <<"hay: 1-carne, 2-tacos"<<endl;
		cin>>b;
	}
	if (opcion==4){
		int pastel=1, sorbete=2, c;
		cout <<"ingrese que postre quiere: "<<endl;
		cout <<"hay: 1-pastel, 2-sorbete"<<endl;
		cin>>c;
	}
	if (opcion==5){
		int empanadas=1, yuca=2, d;
		cout <<"ingrese que quiere de antojos: "<<endl;
		cout <<"hay: 1-empanadas, 2-yuca"<<endl;
		cin>>d;
	}
	
	return 0;
}
