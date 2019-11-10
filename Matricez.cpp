#include <iostream>

using namespace std;

int main(){
	int matrix[4][4];
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			matrix[i][j]= i*j;	
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<matrix[i][j]<<"|";
		}
		cout<<endl;
	}
	
	return 0;
}
