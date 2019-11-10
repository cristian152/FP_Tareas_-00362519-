
#include <iostream>

using namespace std;

float total;
int main(){
    int promedio;
    float acum;
    
    cout<<"ingrese cuantos numero desea: ";
    cin>>promedio;
    
    float arreglo[promedio];
    
    cout<<"Ingrese datos para el arreglo: "<<endl;
    for (int i=0; i<promedio; i++){ 
        cin>>arreglo[i];
        acum= acum+arreglo[i];
    }
    
    for (int i=0; i<promedio; i++){ 
        cout<<arreglo[i]<<"|";
    }
    
    total= acum/promedio;
    cout<<"\n El promedio es: "<<total<<endl;
    
 return 0;
}


