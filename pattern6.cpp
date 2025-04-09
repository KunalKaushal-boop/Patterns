#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k =1;k<=i;k++){
            if(i==5){
                cout<<"*";
            }
            else{
                if(k==1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        for(int l =1;l<=i-1;l++){
            if(i==5){
                cout<<"*";
            }
            else{
                if(l==i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";

    }
    return 0;
}