#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;
    cin>>n;
    
    while(i<=n){

        j=1;
        char ch ='A'+n-i;
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