#include<iostream>

using namespace std;

int main(){
    long long n = 0;
    cin >> n;
    long long a[7];
    for(int i =0; i <7; i++){
       a[i]=0; 
    }
    for(int i =0; i <7; i++){
       cin >> a[i];   
    }
    long long s = 0;
    for(int i =0; i <7; i++){
        s+=a[i];
    }
    long long d = n%s;
    for(int i = 0; i<7;i++){
        if(d/a[i]<1){
            cout<< i+1 << endl;
            break;
        }
        d-=a[i];
    }
    return 0;
}