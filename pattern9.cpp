#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,k;

    int n;
    cin>>n;

    while(i<=n){
        k=1;
        while(k<=n){

            cout<<j<<" ";
            j++;
            k++;
        }
        cout<<endl;
        j = i+1;
        i++;
    }
    return 0;
}