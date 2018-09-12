#include<iostream>

int main()
{
    int n, pot, resultado,i=0,potencia;

    std::cout<<"ingrese el numero que desee ingresar "<<std::endl;
    std::cin>>n;

    if (n>=0) {

                if(n % 2 == 0){
                                while(n == 0 )

                                {
                                   n = n / 2;

                                  potencia = potencia + 1;


                                }

                                std::cout<<"la pontencia es "<<potencia<<std::endl;

                               }

                                else
                                std::cout<<"el numero no es pontencia de 2 "<<std::endl;
                }

            else
                std::cout<<"el numero no es mallor que 0 "<<std::endl;

                n=0;


                return 0 ;
}
