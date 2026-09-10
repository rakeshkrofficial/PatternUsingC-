#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;
    cin>>n;

    char a='A';

    while(i<=n){
        j=1;

        while(j<=n){
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}