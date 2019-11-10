
#include<iostream>

using namespace std;

int main(){	
	int a;
	
	cout<<"----vienvenido a cineland----"<<endl;
	cout<<"seleccione una pelicula: "<<endl;
	
	cout<<"1) John Wick"<<endl;
	cout<<"2) it(eso)"<<endl;
	cout<<"3) annabelle"<<endl;
	cout<<"4) avenger end game"<<endl;
	
	cin>>a;
	
	switch(a){
		
	case 1:
	
	   cout<<"John Wick"<<endl;
	   cout<<"horareio:"<<endl;
	   cout<<"11AM,1PM,3PM, 6PM"<<endl;
	   cout<<"precio: $4.87"<<endl;
	   cout<<"no se eacepta niños menores a 12 años"<<endl;
	   break;
	   
	case 2:
		
	   cout<<"it (eso)"<<endl;
	   cout<<"horario:"<<endl;
	   cout<<"6PM, 7PM, 9PM, 11PM"<<endl;
	   cout<<"precio: $4.87"<<endl;
	   cout<<"no se permite menor de edad"<<endl;
	   break;
	   
	case 3:
		
	   cout<<"annabelle "<<endl;
	   cout<<"horario:"<<endl;
	   cout<<"6PM, 7PM, 9PM, 11PM"<<endl;
	   cout<<"precio: $4.87"<<endl;
	   cout<<"no se permite menor de edad"<<endl;
	   break;
	
	case 4:
		
	   cout<<"avenger end game"<<endl;
	   cout<<"horario:"<<endl;
	   cout<<"8AM, 9PM, 10AM, 12MD, 2PM, 4PM, 5PM, 6PM, 8PM, 10PM, 11PM"<<endl;
	   cout<<"precio $4.87"<<endl;
	   cout<<"niños: $2.50"<<endl;
	   break;
	   
	   
	case 5:
		
	   cout<<"    "<<endl;
	   cout<<"horario:"<<endl;
	   cout<<"1PM, 3PM, 5PM, 7PM, 10PM"<<endl;
	   cout<<"precio $4.87"<<endl;
	   cout<<""<<endl;
	   break;
	   
	   default:
	   	cout<<"pelicula no disponible"<<endl;
	   break;
	}
	system("pause");
	
	return 0;
}
