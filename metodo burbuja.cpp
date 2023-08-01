#include <iostream>
#include<conio.h>

 using namespace std;

int main(){
	int numeros[] = {1,3,4,5,2};
	int i,j,aux;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;i++){
			if(numeros[j] > numeros[j+1]){
				numeros[j] = numeros[j+1];
				numeros [j+1] = aux;
			}
		}
	}
	 cout<<"Orden ascendente: ";
	 for(i=0;i<5;i++){
	 	cout<<numeros[i]<<" ";
	
	 }
	
	getch();
	return 0;
}
