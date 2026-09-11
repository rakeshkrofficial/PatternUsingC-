#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;
    cin>>n;

    char ch= 'A';
    
    while(i<=n){
        j=1;

        while(j<=i){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}