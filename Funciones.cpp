#include <iostream> 

using namespace std; 

int funcionEntera(){  //Funci�n sin par�metros 
 int suma = 5+50; 
   // cout<< suma; 
 return suma; //Ac� termina la ejecuci�n de la funci�n 
 } 
char funcionChar(int n){//Funci�n con un par�metro 
 if(n == 0){  //Usamos el par�metro en la funci�n 
      return 'a'; //Si n es cero retorna a 
     } 
 return 'x';//Este return s�lo se ejecuta cuando n NO es cero 
} 
bool funcionBool(int n, string mensaje){//Funci�n con dos par�metros 
 if(n == 0){  //Usamos el par�metro en la funci�n 
      cout << mensaje;  //Mostramos el mensaje 
     return 1; //Si n es cero retorna 1 
     return true;   //Equivalente 
 } 
 return 0;   //Este return s�lo se ejecuta cuando n NO es cero 
 return false;//Equivalente 
} 
char saludo(string nombre){//Funci�n que recibe una cadena de caracteres 
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
