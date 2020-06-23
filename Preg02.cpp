#include<iostream>
#include<string.h>
using namespace std;
int main(){
	
	char nombre[100];
	char alm[10], b[10]="la", a[15]="@untels.edu.pe";
	int l;
	
	cout << "Ingrese un texto: \n"; 
	cin.getline(nombre,50,'\n');
	
	strstr(nombre,a);
	
	if( strcmp(strstr(nombre,a),a)==1 ){
		cout << "\nNo es un correo de la untels.";
	}
	else{
		cout << "\nNo es un correo de la untels.";
	}
	


}
