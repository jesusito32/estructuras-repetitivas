#include <iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"Ingresando numeros solamente numeros positivos"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Escriba un numero "<<endl;
	cin>>n;
	do {
		cout<<"Ingrese otro numero"<<endl;cin>>n;
	} while (n >= 0);
	cout<<"Usted ingreso un numero negativo";
	
	



	return 0;
}
