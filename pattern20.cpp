#include<iostream>
using namespace std;

int main(){
    int i=1,j,k;
    int n;
    cin>>n;

    while(i<=n){
        j=1;
        k=n;

        while(j<=n){
            if(j > k-i){
                cout<<i;
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
