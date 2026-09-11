#include<iostream>
using namespace std;

int main(){
    int i=1,j,k;
    int n;
    cin>>n;
    k=n;

    while(i<=n){
        j=1;

        while(j<=n){
            cout<<" ";

            if(j>=k){
                cout<<"*";
            }
            j++;
        }
        k--;
        cout<<endl;
        i++;
    }
    return 0;
}