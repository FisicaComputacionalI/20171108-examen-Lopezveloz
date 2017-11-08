/**	
Ordinario owo -->Diagrama<--
Lopezveloz Martinez Itzia
Mièrcoles 8 de Noviembre de 2017
El programa muestra los nùmeros 1 y 5
**/
#include <iostream>
using namespace std;
int main(){
int x=1;
 while(x<=5){ 
    if(x%3==0){
      x=x+2;
      if(x%3!=0)
	cout<<"El valor de x es "<<x<<endl;
	x=x+2;
    }
    if(x>5)
    break;
 }
return 0;
}
