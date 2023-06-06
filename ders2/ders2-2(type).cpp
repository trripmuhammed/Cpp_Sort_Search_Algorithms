#include<iostream>

using namespace std;

int main(){
	
	int sayi = 9;
	float a,b,c;
	
	a=sayi/4;
	b=sayi/4.0;
	c=(float)sayi/4;
	
	cout << "a degeri= "<< a << endl;// float=int/int oldugundan int kismi verir
	cout << "b degeri= "<< b << endl;//burda float=int/float var o yuzden float sonuc
	cout << "c degeri= "<< c << endl;//burda int i float yaptik
	
}
