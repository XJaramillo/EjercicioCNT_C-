#include <iostream>
using namespace std;

int main(){
	
	int total;
        int valor_pagar;
        int minutos = 10;
        bool domingo = true;
        bool matutino = false;
      
        
        if(minutos <=5){
            valor_pagar =  minutos*1;
            
        }else if(minutos <=8){
            valor_pagar =  minutos*(8/10);
        
        }else if(minutos <=10){
            valor_pagar =  minutos*(7/10);
            
        }else{
            valor_pagar =  minutos*(5/10);
        }
        if(domingo == true){
            total = valor_pagar*(valor_pagar*3/100);
            cout<<"El total a pagar es:"+total<< endl;
        }else if(matutino == true){
            total = valor_pagar*(valor_pagar*15/100);
            cout<<"El total a pagar es:"+total<< endl;
        }else{
            total = valor_pagar*(valor_pagar*10/100);
            cout<<"El total a pagar es:"+total<< endl;
        }


return 0; 
}
