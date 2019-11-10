#include <iostream>

using namespace std;

int main(){
	int opcion=0;
	
	cout<<"ERORRES AL INGRESAR A FACEBOOK\n";
	cout<<"\n1.No reconoce contraseña. \n2.Intenta recuperar contraseña. \n3.No tiene acceso a cuentas de respaldo. \n4.Retraso en acceder. \n5.Ingresa correo equivoco."<<endl;
	cin>> opcion;
	
	switch(opcion){
		
		case 1: cout<<"\nError de Credenciales.";
				break;
				
		case 2: cout<<"\nError de Credenciales.";
				break;
				
		case 3: cout<<"\nError de Credenciales.";
				break;
		
		case 4: cout<<"\nSu conexion no es la adecuada.";
				break;
		case 5: cout<<"\nSu cuenta no existe.";
				break;
	}
	
	
	return 0;
}
