//Programma di Lamacchia 3a I
#include <iostream>
using namespace std;
int main(){
	int v[10], w[10], somma=0;
	
	cout<<"Programma esercizio n.14"<<endl;
	for(int i=0; i<10; i++){
		cout<<"Inserire numero intero ("<<i+1<<"): ";
		cin>>v[i];
		somma+=v[i];
	}
	cout<<endl<<"<< La somma dei numeri inseriti e': "<<somma<<" >>"<<endl<<endl;
	
	for (int i = 0; i<10; i++) {
    	w[i] = v[10 - i - 1];
	}
	
	cout << "Vettore V: [ ";
	for (int i = 0; i<10; i++) {
		cout << v[i] << " ";
	}
  	cout << "]" << endl<<endl;
	
	
	cout << "Vettore W: [ ";
	for (int i = 0; i<10; i++) {
		cout << w[i] << " ";
	}
  	cout << "]" << endl;
	
	return 0;
}
//Programma di Lamacchia 3a I
