#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n,m;
    
    cout<<"Enter number:";
    cin>>n;
    m=1;

    while(i<=n){
        j=1;
        while(j<= n-i+1){
            cout<<m;
            cout<<"*";
            j++;
            m++;
        }

        while(j<=n-i+1){
            
        }
        j=1;
        while(j<=i){
            cout<<"  ";
            j++;
        }

        i++;
    }
    return 0;
}