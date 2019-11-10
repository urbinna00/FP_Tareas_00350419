#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main(){
	float res, sueldo=0, seguro=0.03, afp=0.0725; // VALORES DEL ISSS Y DE AFP
	
	cout<<"PLANILLA DE SUELDOS"<<endl;
	cout<<"\nIngrese el salario: $"; 
	cin>>sueldo;
	
	cout<<fixed<<setprecision(2);
	cout<<"ISSS: $"<<(sueldo*seguro)<<endl;
	
	cout<<"AFP: $"<<(sueldo*afp)<<endl;
	
		
		if(sueldo<=472.00){
		
		cout<<"ISR: $0"<<endl;
		}
		
		else if(sueldo>=472){
		
		cout<<"ISR: $"<<sueldo*afp + sueldo*seguro - ((sueldo-472)*0.1)+17.67<<endl;
		}
		
		else{cout<<"ISR: $"<<sueldo*afp + sueldo*seguro - ((sueldo-895.24)*0.2)+60.00;
		}
		
	cout<<"horas extras: $"<<((sueldo/30)/8)*2 *10;
		
	
	return 0;
}
