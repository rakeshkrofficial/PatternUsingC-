#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    char ch='A';

    int n;
    cin>>n;

    while(i<=n){
        ch='A';
        j=1;

        while(j<=n){
            if(j==n-i+1){
                cout<<ch;
            }
            else{
                cout<<" ";
                ch++;
            }
            j++;
        }
        j=1;
        while(j<=n){
            if(j==i && j!=1){
                ch=ch-i+1;
                cout<<ch;
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