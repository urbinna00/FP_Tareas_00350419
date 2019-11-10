#include <iostream>

using namespace std;
	
	int main(){
		int opcion=0, desayuno=0, almuerzo=0, cena=0, antojos=0, postres=0, bebida=0;
		
		cout<<"Bienvenido a Antojos Payitos\n";
		cout<<"Seleccione su platillo:\n";
		cout<<"\n1.Desayuyno, 2.Almuerzo, 3.Cena, 4.Antojos, 5.Postres, 6.Bebida. 7.Salir\n"; cin>>opcion;
		
		while(opcion!=7){
		
		switch(opcion){
			
			case 1: cout<<"1.Desayuno tipico, 2.Pupusas, 3.Tamalitos, 4.Waffles\n"; cin>>desayuno;
					break;
					
			case 2: cout<<"1.Pollo frito 2.Carne asada, 3.Macarrones, 4.Sopa de res, 5.Sopa de pollo\n"; cin>>almuerzo;
					break;
					
			case 3: cout<<"1.Cena tipica, 2.Pupusas. 3. Tortitas. 4. Tacos.\n"; cin>>cena;
					break;
					
			case 4: cout<<"1. Yuca frita, 2.Papas fritas. 3. Nachos. 4. Tacos.\n"; cin>>antojos;
					break;
					
			case 5: cout<<"1.Rosquilla, 2.Helado. 3. Pañuelo. 4. Dona.\n"; cin>>postres;
					break;
					
			case 6: cout<<"1.Cena tipica, 2.Pupusas. 3. Tortitas. 4. Tacos.\n"; cin>>bebida;
					break;
		}
		cout<<"Usted escogio: "<<desayuno, almuerzo, cena, antojos, postres, bebida;
		}
		return 0;
	}
