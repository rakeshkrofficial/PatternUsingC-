#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;

    cin>> n;
    char ch;

    while(i<=n){
        j=1;
        ch='A';
        while(j<=n){
            if(j<=n-i+1){
                cout<<ch;
                ch++;
            }
            else{
                cout<<" ";
            }
            j++;
        }
        j=1;
        ch = 'A'+n-2;
        while(j<=n-1){
            if(i<=2){
                cout<<ch;
                ch--;
                
            }
            else if(j<=n && i>2){
                if(j<i-1){
                    cout<<" ";
                    ch--;
                }
                else{
                    cout<<ch;
                    ch--; 
                }
            }
            j++;
        }
        cout<<endl; 
        i++;
    }
    return 0;
}