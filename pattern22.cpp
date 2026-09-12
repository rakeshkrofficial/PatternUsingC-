#include<iostream>
using namespace std;

int main(){
    int i=1,j,k,m;
    int n;
    cin>>n;

    while(i<=n){
        j=1;
        k=1;
        m=1;
        while(j<=n+n-1){
            if(j<=n-i){
                cout<<" ";
            }
            else if(k<=i){
                cout<<k;
                k++;
            }
            else{
                if(k-m>1){
                    cout<<k-m-1;
                }
                
                m++;

            }
            j++;
            
        }
        cout<<endl;
        i++;
    }
    return 0;
}