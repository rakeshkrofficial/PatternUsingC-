#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,k;
    int n;
    cin>>n;

    while(i<=n){
        k=1;

        while(k<=i){
            cout<<j<<" ";
            j++;
            k++;
        }
        cout<<endl;
        i++;
        
    }
    return 0;
}