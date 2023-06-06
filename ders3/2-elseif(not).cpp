#include<iostream>

using namespace std;

int ogrNot;
char harfNot;

int main(){
	
	//girilen sayýsal nota gore harf notu verecek
	cin >> ogrNot;
	
	if(ogrNot>=85){
		harfNot = 'A';
	}else if(ogrNot>=80){
		harfNot = 'B';
	}else if(ogrNot>= 60){
		harfNot = 'B';
	}else if(ogrNot>= 50){
		harfNot = 'C';
	}else if (ogrNot >= 40){
		harfNot = 'D';
	}else {
		harfNot = 'F';
	}
	cout << "harf Notu : " <<harfNot;
}
