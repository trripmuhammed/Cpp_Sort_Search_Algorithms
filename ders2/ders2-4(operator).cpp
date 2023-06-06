#include <iostream>


using namespace std;
int main (){
    int a=6;
    int b=3;
    int T= a+b;
    int F=a-b;
    int C=a*b;
    int B=a/b;
    cout<<"toplam="<<T<<endl;
    cout<<"fark="<<F<<endl;
    cout<<"bolum="<<B<<endl;
    cout<<"carpim="<<C;
	/*endl ile \n arasinda bazi farklar da vardir
    	mesela endl program bitene kadar bellegi temizler 
		\n ise 1 kere temizler
		\n 1 byte yer kaplarken endl kaplamaz
	*/
	return 0;
	}
