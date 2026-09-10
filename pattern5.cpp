#include<iostream>
using namespace std;

int main(){
    int i=1,j;
    int n;
    cin>>n;

    while(i<=n){
        j=i;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}