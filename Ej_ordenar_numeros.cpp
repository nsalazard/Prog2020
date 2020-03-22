#include <iostream>
int main (void) {

    int suma = 0;
    int a = 0;
    int b = 0;
    int c = 0;
	int n1 = 0;
    int n2 = 0;
    int n3 = 0;		



    std::cout <<"Hola, porfavor ingresa un numero natural"<< std::endl;
    std::cin >> a;
    std::cout <<"Porfavor ingresa un numero natural"<< std::endl;
    std::cin >> b;
    std::cout <<"Porfavor ingresa un numero natural"<< std::endl;
    std::cin >> c;

    if (a >= 0 && b >= 0 && c >= 0){
        if (b >= a && c >= a){
            if (c >= b){
                 n1 = a; n2 = b; n3 = c;
            }
            else {
            	  n1 = a; n2 = c; n3 = b;
			}        
                    }
        if (a >= b && c >=b){
            if (c >= a){
                  n1 = b; n2 = a; n3 = c;
            }
            else {
            	  n1 = b; n2 = c; n3 = a;
			}        
                    } 
                    
        if (a>= c && b>= c){
            if (b >= a){
                  n1 = c; n2 = a; n3 = b;
            }
            else {
            	  n1 = c; n2 = b; n3 = a;
			}        
                    }           
        std::cout << n1 << ", " << n2 << ", " << n3 ;
	}  
	else {
        std::cout <<"Los numeros ingresados no son naturales"<< std::endl;
		}
    
   

 return 0;    
    }
