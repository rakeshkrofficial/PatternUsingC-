#include<iostream>
using namespace std;

int main(){
    int i=1,j=1,k;
    int n;
    cin>>n;

    char ch ='A';

    while(i<=n){
        k=1;

        while(k<=n){
            cout<<ch<<" ";
            k++;
            ch++;
        }
        ch='A';
        cout<<endl;
        ch+=i;
        i++;
    }
    return 0;

}