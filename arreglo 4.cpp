
#include <iostream>

using namespace std;

int main(){
    int k;
    float acum;
    
    
    cout<<"¿cuantas veces quiere los datos? ";
    cin>>k;
    
    int arreglo[k];
    int arreglo2[k];
    
    cout<<"ingrese datos para el arreglo"<<endl;
    for (int i=0; i<k; i++){
        cin>>arreglo[i];
    }
    for(int j=0; j<k; j++){ 
        cin>>arreglo2[j];
    }
    cout<<endl;
    for (int i=0; i<k; i++){
        cout<<arreglo[i]<<" | ";
    }
    cout<<endl;
    for(int j=0; j<k; j++){ 
        cout <<arreglo2[j]<<" | ";
    }
    
 return 0;
}

