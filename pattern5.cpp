#include <iostream>
using namespace std;
int main(){
    for(int i =1;i<=5;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k =1;k<=5-(i-1);k++){
            cout<<k;
        }
        for(int l =5-i;l>0;l--){
            cout<<l;
        }
        cout<<"\n";
    }
}