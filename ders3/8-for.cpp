#include<iostream>
#include <cmath>

using namespace std;

int main(){
	
	cout << "Lütfen 2 tam sayi giriniz" << endl;
	
	int a,b;
	cin >> a;
	cin >> b;
	
	int toplam=0;
	
	for(int i=a;b>i+1;i++){
		toplam+=i+1;
	}
	cout << toplam;
	return 0;
}
