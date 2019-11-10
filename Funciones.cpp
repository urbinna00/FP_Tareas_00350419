#include <iostream> 

using namespace std; 

int funcionEntera(){  //Función sin parámetros 
 int suma = 5+50; 
   // cout<< suma; 
 return suma; //Acá termina la ejecución de la función 
 } 
char funcionChar(int n){//Función con un parámetro 
 if(n == 0){  //Usamos el parámetro en la función 
      return 'a'; //Si n es cero retorna a 
     } 
 return 'x';//Este return sólo se ejecuta cuando n NO es cero 
} 
bool funcionBool(int n, string mensaje){//Función con dos parámetros 
 if(n == 0){  //Usamos el parámetro en la función 
      cout << mensaje;  //Mostramos el mensaje 
     return 1; //Si n es cero retorna 1 
     return true;   //Equivalente 
 } 
 return 0;   //Este return sólo se ejecuta cuando n NO es cero 
 return false;//Equivalente 
} 
char saludo(string nombre){//Función que recibe una cadena de caracteres 
   cout<<"\n"; 
   cout<<"Hola "<<nombre; 
   cout<<"\n\n\n"; 
} 
int main(void){ 
    string nombre; 
     cout<<funcionEntera(); 
     cout<<"\n\n"; 
      funcionEntera(); 
      cout<<funcionChar(5); 
      cout<<"\n\n"; 
      cout<<funcionBool(0, "buenas tardes"); 
      cout<<"\n"; 
      cout<<"Introduzca su nombre \n"; 
      cin>>nombre; 
      saludo(nombre); 
       
} 
