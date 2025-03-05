#include <iostream>
using namespace std;
main(){
	
	
	//los numeros se empiezan a conatar de 10 a 0
	int contar =0;
	for (int i=10;i>0;i--){
		cout<<i<<endl;
		contar++;
		
	}
	cout<<"ciclos:"<<contar<<endl;
	//los numeros empieza de 0 a 10
	cout<<"Los numeros Ingresados son:"<<endl;
	{
		for (int i=0;i<10;i++)
		cout<<i<<endl;
	}
	cout<<"-------------------------------------------------------------------------------------------"<<endl;
	int datos[] = {100,300,600};
	for (int i : datos){
		cout<<i<<endl;
	}
	cout<<"---------------------------------------------------------------------------------------------"<<endl;
	
	
	
	system("pause");
}
