#include<iostream>
using namespace std;

int main(){
    int i=1,j,k,m=1;
    int n;
    cin>>n;
    
    while(i<=n){
        j=1;
        k=n;

        while(j<=n){
            if(j>k-i){
                cout<<m;
                m++;
            }
            else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}