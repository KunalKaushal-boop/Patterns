#include <iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 5; i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=i;k<=5;k++){
            cout<<"* ";
        }
        for(int l = i;l>0;l--){
            cout<<" *";
        }
        cout<<"\n";
    }
    


    return 0;
}