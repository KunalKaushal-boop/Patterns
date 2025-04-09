//inverted hollow piramid
#include <iostream>
using namespace std;
int main(){
    int n=5;
    int j;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for( j=1;j<=n-i+1;j++){
            if(i==1){
                cout<<"*";
            }
            else{
                if(j==1){
                    cout<<"*";
                }
                
                else{
                    cout<<" ";
                }
            }
        }

        for(int k = n-i;k>0;k--){
            if(i==1){
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
        cout<<"\n";
    }
    return 0;
}