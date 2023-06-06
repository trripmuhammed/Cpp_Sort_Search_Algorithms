#include<iostream>

using namespace std;

int main(){
	
	int a = 0;
	int sayac = 5;
	
	a=sayac++;
	
	cout << "a= " << a << endl;
	
	cout << "sayac= " <<sayac << endl;
	
	cout << "------ \n";
	
	a++;
	
	cout << "a= " << ++a << endl;
	
	cout << "sayac= " <<sayac << endl;
}
