
#include <iostream>

using namespace std;

int main(){
    int arreglo[5];
    cout<<"Ingrese 5 datos: "<<endl;
    for (int i=0; i<5; i++){ 
        cin>>arreglo[i]; 
    }
    
    for (int i=0; i<5; i++){ 
        cout<<arreglo[i]<<"|";
    }
    
  return 0;
}


