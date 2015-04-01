// Author:OSCAR GARCIA AVILA
// Date:3/31/2015
// Version:0.1

/*
  Homework DD 09
  this assignment juego de adivina el numero con tres oportinidades
*/

#include <iostream>//libreria para entrada y salida estandar
#include <stdlib.h>//libreria para usar la funcion rand
#include <time.h>//libreria para usar la funcion time
int main(){
	int num, intentos, numcre;//declaramos tres variables 
	srand(time(NULL));//inicializamos la funcion randon para que se actualize sino aparece siempre el mismo numero
	num = rand()% 11;//la variable num es iguala randon es decir da numeros aleatorios del 0 al 11
	std::cout<<"Juego adivina el numero secreto entre 0 y 9\n"<<std::endl;//ponomos el titulo del juego
	std::cout<<"pon el primer numero que crees que es\n";//damos intrucciones para que el usuario ponga el primer numero
	std::cin>>numcre;//lo guardamos en la variable

	intentos=1;
	
	 while ( numcre != num && intentos < 3 )//while para que se mantenga en el ciclo mientras sea menor a 3 intentos ya que el numero adivinado es diferente
    {
    	
          if ( numcre > num )//si es mayor el numero que introduce el usuario, 
          {
               std::cout << "Vuelve a intentar el numero es menor." << '\n' <<std::endl;//entonces imprime que el numero es menor
               intentos ++;//y los intentos aumentan en uno
               std::cin >> numcre;
          }
          
          if ( numcre < num )//si es menor el numero que introduce el usuario
          {
               std::cout << "Vuelve a intentar el numero es mayor." << '\n' <<std::endl;//entonces imprimimos  que es mayor
               intentos ++;
               std::cin >> numcre;
          }
          if ( numcre == num )//si son iguales los numeros
          {
              std::cout << "\n Felicidades lo has adivinado!!" << '\n' <<std::endl;//imprimimos felicidades
          }
          
          if ( intentos == 3 && numcre != num )//si numero de intentos es igual a tres y son diferentes auno los numeros
          {
             std::cout << "\nHas perdido el numero era\n"<<num  <<std:: endl;//imprimimos que ha perdido en el juego
          }
    }       
    system("Pause");// se h acer una pausa
    return 0; // valor de retorno 
}

