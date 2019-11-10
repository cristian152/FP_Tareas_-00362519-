#include <iostream>

using namespace std;

int main(){
	
    int numero, factorial=1;
    cout <<"digite el numero que desea factorizar:";
    cin>>numero;
    for (int i=1; i<=numero; i++)
    factorial = factorial * i;
    cout <<"\n el factorial de numero es: "<<factorial<<endl;
    
    return 0;
}
