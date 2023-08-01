#include <iostream>
#include <conio.h>

using namespace std;

int main  (){
	int numeros[5];
	int suma=0;
	//para registrar los elementos en el vector 
	for(int i=0;i<5; i++){
		cout<<"inserte un numero: ";
		cin>>numeros[i];
		}
		//para imprimir los valores 
		for (int j=0;j<5;j++){
			cout<<numeros[j]<<" ";
			}
	for  (int k=0;k<5;k++){
		suma += numeros[k];
	}
	cout<<"\n la suma total de vectores es: " <<suma;
	
	getch();
	
	return 0;
}
			
			
		
		
	

