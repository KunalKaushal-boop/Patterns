#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k =1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<5;i++){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int k =1;k<=(5*2)-(i*2)-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}