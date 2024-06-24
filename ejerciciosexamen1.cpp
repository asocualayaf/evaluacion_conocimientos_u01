#include<iostream>
using namespace std;
int main(){
	int a, b, r, re;
	char op;
	cout<<"Ingrese el primer numero: "; cin>> a;
	cout<<"Ingrese el operador: "; cin>>op;
	cout<<"Ingrese el segundo numero: "; cin>>b;
	switch(op){
		case '+':
			r =a+b;
			cout<<r;
			break;
		case '-':
			r = a-b;
			cout<<r;
			break;
		case '*':
			r = a*b;
			cout<<r;
			break;
		case '/':
			if(b!=0){
				r = a/b;
				re = a%b;
				cout<<"cociente es: "<<r<<endl;
				cout<<"residuo es: "<<re<<endl;
			}
			else{
				cout<<"No se puede dividir entre cero";
			}
	}
	return 0;
}
