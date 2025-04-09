#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=3;i++){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=3;i++){
        for(int k=1;k<=3;k++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=1;i<=3;i++){
        for(int l=1;l<=3;l++){
            cout<<" ";
        }
        for(int k=1;k<=3;k++){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}