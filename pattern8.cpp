#include<iostream>
using namespace std;

int main (){
    int i=1,j;
    int n;
    cin >>n;

    char chrt='A';
    while(i<=n){
        j=1;
        
        while(j<=n){
            char ch= chrt +j-1;
            cout<<ch<<" ";
            j++;
        }
        chrt += n;
        cout<<endl;
        i++;
    }
    return 0;
}