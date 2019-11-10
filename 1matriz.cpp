
#include <iostream>
 
using namespace std;
 
int main() {
  int numeros[2][2];
  
  for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
        cout<<"ingrese un numero ["<<i<<"]["<<j<<"]: ";
        cin>>numeros [i][j];
        }
  }
  
  for (int i=0; i<2; i++){
      for (int j=0; j<2; j++){
        cout<<numeros[i][j]<<" | ";    
      }
      
      cout<<"\n"; 
  }  
  
  return 0;
}
