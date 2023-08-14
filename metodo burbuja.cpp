#include <iostream>
#include<conio.h>

using namespace std;

int main(){
int edades[10];
int i,j,aux;

cout<<"Pon las edades de las 10 personas: "<<endl;
for(int i=0; i<10; i++){
cin>>edades[i];
}	
for(i=0; i<10; i++){
for(j=0; j<10; j++){

if(edades[j]>edades[j+1]){
aux = edades[j];
edades[j]=edades[j+1];
edades[j+1]	= aux;

}
}
}	
	
cout<<"Orden ascendente de las edades: ";
for(i=0;i<10;i++){
cout<<edades[i]<<" ";

}
getch();
return 0;
}
