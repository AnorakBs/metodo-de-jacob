#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int convergir(float x1,float y1,float z1, float x2, float y2, float z2, float x3,float y3, float z3){
	if(x1 > y1 + z1 && y2 > x2 + z2 && z3 > x3 + y3){
	return 1
	;}
}
// SOMAR +1 NA QUANTIDADE DE EXECUTAR NOVAMENTE OU SEJA 3 EXECUTAR NOVAMENTE = X4 =(//////////////)^t
int main(int argc, char** argv) {
	int ju = 0;
	do{
	ju = 0;
	float x1,x2,x3,resul1;
	float y1,y2,y3,resul2;
	float z1,z2,z3,resul3;
	float aprox;
	float aux1,aux2,aux3,aux4 = 0,aux5 = 0,aux6 = 0;
	
	float x0[3] = {0,0,0};
	 
	cout << "Digite o valor de X1: ";
	cin >> x1;
	
	cout <<"Digite o valor de Y1: ";
	cin >> y1;
	
	cout << "Digite o valor de Z1: ";
	cin >> z1;
	
	cout << "Digite o valor do resultado 1: ";
	cin >> resul1;
	
	
	cout << "Digite o valor de X2: ";
	cin >> x2;
	
	cout <<"Digite o valor de Y2: ";
	cin >> y2;
	
	cout << "Digite o valor de Z2: ";
	cin >> z2;
	
	cout << "Digite o valor do resultado 2: ";
	cin >> resul2;
	
	cout << "Digite o valor de X3: ";
	cin >> x3;
	
	cout <<"Digite o valor de Y3: ";
	cin >> y3;
	
	cout << "Digite o valor de Z3: ";
	cin >> z3;
	
	cout << "Digite o valor do resultado 3: ";
	cin >> resul3;
	
	cout << "Digite o valor da aproximacao: ";
	cin >> aprox;
	
	cout << x1 <<"x + " << y1 <<"y + " << z1 <<"z " << "= " << resul1 << "\n";
	cout << x2 <<"x + " << y2 <<"y + " << z2 <<"z " << "= " << resul2 << "\n";;
	cout << x3 <<"x + " << y3 <<"y + " << z3 <<"z " << "= " << resul3 << "\n";;
	
	if(convergir(x1,y1,z1,x2,y2,z2,x3,y3,z3) == 1){
		cout << "Converge\n";
		}else cout << "N converge\n";
		//--1
		aux1 = resul1/x1;
		aux2 = resul2/y2;
		aux3 = resul3/z3;
		
		x0[0]= aux1;
		x0[1]= aux2;
		x0[2]= aux3;
		
		if(x0[0] - aux4 < aprox && x0[1] - aux5 < aprox && x0[2] - aux6 < aprox){
			cout << "X = " << x0[0] << "" << x0[1] << "" << x0[2] << "";
		}else cout << "executar novamente \n";
		
		
		aux4 = aux1;
		aux5 = aux2; 
		aux6 = aux3;
		
	
		// 2
		for(int i =0; i < 10 ; i++){
		aux1 = (resul1 - y1 * x0[1] - z1 * x0[2])/x1;
		aux2 = (resul2 - x2 * x0[0] - z2 * x0[2])/y2;
		aux3 = (resul3 - x3 * x0[0] - y3 * x0[1])/z3;
		
		x0[0]= aux1;
		x0[1]= aux2;
		x0[2]= aux3;
		
		if(x0[0] - aux4 < aprox && x0[1] - aux5 < aprox && x0[2] - aux6 < aprox){
			cout << "X = " << x0[0] << " " << x0[1] << " " << x0[2] << " \n";
		}else cout << "executar novamente \n";
		
		aux4 = x0[0];
		aux5 = x0[1];
		aux6 = x0[2];
}
		cout << "Digite 1 para executar dnv:";
		cin >> ju;
		}while(ju == 1);


	return 0;
}
