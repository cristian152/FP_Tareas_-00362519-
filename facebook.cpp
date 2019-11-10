
#include<iostream>

using namespace std;

int main(){
	
	int x;
	
	cout<<"------iniciar sesion en facebook-------"<<endl;
	cout<<"case 1: "<<endl;
	cout<<"case 2: "<<endl;
	cout<<"case 3: "<<endl;
	cout<<"case 4: "<<endl;
	cout<<"case 5: "<<endl;
	cin>>x;
	
	switch(x){
		
	case 1:
	  cout<<"error de credenciales"<<endl;
	  break;
	  
	case 2:
	  cout<<"error de credenciales"<<endl;
	  break;
	  
	case 3:
	  cout<<"su conexion no es la adecuada"<<endl;
	  break;
	  
	case 4:
	  cout<<"su cuenta no existe"<<endl;
	  break;
	
	case 5:
	    cout<<"su contraseña es incorrecta"<<endl;
	    break;
	}	
}
