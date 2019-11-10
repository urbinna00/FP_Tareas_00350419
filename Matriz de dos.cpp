#include <iostream>

using namespace std;

int main(){
	int filas=2, col=2;
	int mat[filas][col];
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			mat[i][j]=i;
		}
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<filas; j++){
			cout<<mat[i][j]<<"|";
		}
		cout<<endl;
	}
	
	
	return 0;
}
