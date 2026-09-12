#include<iostream>
using namespace std;

int main(){
    int i=1,j,y,k;
    int n;
    cin>>n;

    while(i<=n){
        j=1;
        y=1;
        k=n;
        while(j<=n){
            if(j>n-i+1){
                cout<<"*";
            }
            else{
                cout<<j;
            }
            j++;
            
        }
        while(y<=n){
            if(k>n-i+1){
                cout<<"*";
            }
            else{
                cout<<k;
            }
            k--;
            y++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}