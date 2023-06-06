#include<iostream>

using namespace std;

int main(){
	
	int i=0;
	
	while(i<14){
		i++;
		if(i>8 && i<12){
			continue;
		}
		cout << i << endl;
		
	}		

}
