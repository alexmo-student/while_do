#include <iostream>
using namespace std;
main(){
		// funciones para tablas de multiplicar
	int inicio = 0, fin = 0, res =0;
	cout<<"INGRESE UN NUMERO PARA TABLA INICIAL:";
	cin>>inicio;
	cout<<"INGRESE UN NUMERO PARA TABLA FINL:";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
		cout<<"----------------------------------------"<<endl;
		cout<<"TABLA DE: "<<rango<<endl;
		for ( int i=1;i<=10;i++){
					res = rango * i;
		cout<<rango<<" x "<< i <<" = "<<res<<endl;
		}
	}
	system("pause");
}
