#include<iostream>

using namespace std;

int main(){

    int arr[5][2]={{1,2},{7,9},{3,0},{5,1},{1,1}};

    for(int i=0;i<5;i++){
        for(int j=0;j<2;j++){

            cout << "[" << i << "]" << "[" << j << "]:  " << arr[i][j] << endl;
        }
    }
}