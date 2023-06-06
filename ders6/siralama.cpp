#include<iostream>

using namespace std;

int main(){
int n,temp;
cout << "lutfen kac tane sayi gireceginizi seciniz" << endl;
cin >> n;
int arr[n];
cout << "lutfen sayilari giriniz" << endl;

for(int i = 0; i < n; i++){
cin >> arr[i];
}

for(int i=0; i< n; i++){
    int min[2]={arr[i],i};
    for(int m = i; m < n; m++){
        if(min[0]>arr[m]){
            min[0]=arr[m];
            min[1]=m;
        }

}
    temp = arr[min[1]];
    arr[min[1]]=arr[i];
    arr[i]=temp;
}
for(int b = 0; b < n;b++){
    cout << "|" << arr[b] << "|";
}

    return 0;
}