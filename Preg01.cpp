#include<iostream>
using namespace std;
int main()
{
	int n;
	int contador=0;
	
	do{
		cout << "Ingrese un numero: "; cin >> n;
		for (int i=1; i<=n ; i++){
		if (n%i==0){
			contador++;
		}		
	    }
		
	}while(n<0);
	
	if (n==1){
		contador=2;
	}
	if (contador==2){
		cout << n << " es primo.";
	}
	else{
		cout << n << " no es primo.";
	}
}
