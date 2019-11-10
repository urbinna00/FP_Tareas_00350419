#include<iostream>

using namespace std;

int main(){
	int cantNumeros=0;
	int numeros [cantNumeros];
	
	cout<<"Ingrese el tamaño del arreglo: "; cin>> cantNumeros;
	
	for(int i=0; i<cantNumeros; i++){
		//numeros[i]=i+1;
		cout<<"Ingrese el dato: "<<i+1<<": "; cin>> numeros[i];
	}
	//Mostrar el contenido de un arreglo.
	cout<<"\nLos numeros ingresados son: "<<endl;
	for(int i=0; i<cantNumeros; i++){
		cout<<numeros[i]<<endl;
	}
	
	return 0;
}
