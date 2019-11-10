
#include <iostream>
 
using namespace std;
 
int main() {
  int numeros[100][100], filas, columnas;
  
  cout<<"ingrese el numero de filas: "<<endl;
  cin>>filas;
  cout<<"ingrese el numero de columnas: "<<endl;
  cin>>columnas;
  
  for (int i=0; i<filas; i++){
      for (int j=0; j<columnas; j++){
        cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
        cin>>numeros [i][j];
        }
  }
  
  for (int i=0; i<filas; i++){
      for (int j=0; j<columnas; j++){
        cout<<numeros[i][j]<<" | ";
        
      }
      
      cout<<"\n"; 
  }  
  

  return 0;
}
