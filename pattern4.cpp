#include <iostream>
using namespace std;
int main(){
    for(int i=1 ; i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int l=i-1;l>0;l--){
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}