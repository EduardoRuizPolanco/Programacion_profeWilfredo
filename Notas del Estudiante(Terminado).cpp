#include <iostream>
#include <conio.h>
#include <string>
//ERP
using namespace std;
int main() {
int m;
string nombre;
string apellido;
int a; 
cout<<"Solo pon primero el numero de cursos que va a calificar:  ";
cin>>a;
int b[a]; //Para las notas
string cursos[a]; //para los cursos
int suma ;
float promedio;

cout<<endl;

while(m!=5){
cout << ".............Menu...........\n";
cout << "1. Ingresar nombre y apellido del estudiante\n";
cout << "2. Ingresar los cursos y sus notas\n";
cout << "3. Visualizacion de las notas individuales\n";
cout << "4. Promedio general de las notas\n";
cout << "5. Salir\n\n";
cin>>m;

switch(m){
	
case 1:
cout<<"Pon el Nombre del estudiante"<<endl;
cin>>nombre;
cout<<"Ahora el Apellido"<<endl;
cin>>apellido;
cout<<endl<<endl;
break;

case 2:
for(int i=0; i<a; i++){
cout<<"Ingresar el curso:  ";
cin>>cursos[i];
cout<<"Ahora la Nota: ";
cin>>b[i];	
}
cout<<endl<<endl;
break;

case 3:
cout<<"Notas Individuales de: "<<nombre<<" "<<apellido<<endl;
for(int i=0; i<a; i++){
cout<<cursos[i]<<endl;
cout<<b[i]<<endl;
}
cout<<endl;
break;

case 4:     
cout<<"El promedio general de "<<nombre<<" "<<apellido<<" es de:"<<endl;
for(int j=0; j<a; j++){
	suma += b[j];
}
promedio = suma/a;
cout<<promedio<<endl<<endl;	
break;



getch();
return 0;
}
}
}
