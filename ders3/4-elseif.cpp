#include<iostream>

using namespace std;

int main(){
	
	char harf;
	
	cout << "a,b,c,d,e harflerinden birini giriniz.."
	
	cin >> harf;
	
	if(harf=='a')
		cout << "Bugun gunlerden pazartesi.." << endl;
	else if(harf=='b')
		cout << "Bugun gunlerden sali.." << endl;
	else if(harf=='c')
		cout << "Bugun gunlerden carsamba.." << endl;	
	else if(harf=='d')
		cout << "Bugun gunlerden persembe.." << endl;
	else if(harf == 'e')
		cout << "Bugun gunlerden pazartesi.." << endl;
	else
		cout << "Girilen gün haftasonudur";

}
