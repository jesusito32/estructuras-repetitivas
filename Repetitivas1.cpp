#include <iostream>

using namespace std;

int main(){
	
	int n,cont=1, multiplo;
	cout<<"Los multiplos de 7"<<endl;
	cout<<"--------------------"<<endl;
	cout<<"Escriba un numero "<<endl;
	cin>>n;
	n=n+1;
	while(cont<n){
	
	multiplo=7*cont;	
	cout<<multiplo<<",";
	cont++;	
		
	}
	
	
	
	
	
	
	return 0;
}
