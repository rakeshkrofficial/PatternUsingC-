#include<iostream>
using namespace std;

int main(){
    int i=1,n1;
    cin>>n1;

    int n=n1*n1;

    while(i<=n){
        cout<<i<<" ";
        if(i%n1==0){
            cout<<endl;
        }
        i++;

    }
    return 0;
}