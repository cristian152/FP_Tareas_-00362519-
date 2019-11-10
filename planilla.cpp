#include<iostream>

#include<math.h>

using namespace std;

float FuncionFloat(){
	float sueldo, isss, afp, prestamo, renta,hex,anticipo,h;
	char name[30];
	cout<<"Ingresa su nombre"<<endl;
	cin>>name;
	cout<<"Ingrese su sueldo"<<endl;
    cin>>sueldo;
    cout<<"Tiene horas extras?"<<endl;
    cin>>h;
    cout<<"Tiene algun prestamo?: "<<endl;
    cin>>prestamo;
    cout<<"Tiene algun anticipo?"<<endl;
    cin>>anticipo;
	
	if(sueldo<=472){
		float sp;
	    hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		sp = ((((sueldo-isss)-afp)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
	}
	else if(sueldo<=895.24){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-472)*0.1)+17.67;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"RENTA: "<<renta<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
	}
	else if(sueldo<=1000){
		float sp, renta;
		hex = h*3;
	    sueldo += hex;
		isss = sueldo*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-895.24)*0.2)+60;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"RENTA: "<<renta<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
	}
		else if(sueldo<=2038.10){
			float sp;
			 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-895.24)*0.2)+60;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"RENTA: "<<renta<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
}
   	else if(sueldo>=2038.11 && sueldo < 6500){
		float sp, renta;
		 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = sueldo*0.0725;
		renta = ((((sueldo-isss)-afp)-2038.10)*0.3)+288.57;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"RENTA: "<<renta<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
		
}
	   else if(sueldo>=6500){
	   		float sp, renta;
	   		 hex = h*3;
	    sueldo += hex;
		isss = 1000*0.03;
		afp = 6500*0.0725;
		renta = ((((sueldo-isss)-afp)-2038.10)*0.3)+288.57;
		sp = (((((sueldo-isss)-afp)-renta)-prestamo)-anticipo);
		cout<<"Hola "<< name<<", sus descuentos son las siguientes: "<<endl;
		cout<<"ISSS: "<<isss<<endl;
		cout<<"AFP: "<<afp<<endl;
		cout<<"RENTA: "<<renta<<endl;
		cout<<"Prestamo: "<<prestamo<<endl;
		cout<<"Anticipo: "<<anticipo<<endl;
		cout<<"Horas extras: "<<h<<endl;
		cout<<"Por las Horas extras: "<<hex<<endl;
		cout<<"Sueldo a pagar: "<<sp<<endl;
	   	
	   }
}


int main(){
	
	cout<<FuncionFloat();	
}
