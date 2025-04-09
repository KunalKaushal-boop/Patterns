#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=(2*n)-1;i++){
        for(int j=1;j<=(2*n)-1;j++){
            //min distance from all the borders
            int min_dist = min(min(i-1,j-1),min(((2*n)-(i))-1,((2*n)-(j))-1));
            cout<<n-min_dist;
        }
        cout<<"\n";
    }
    return 0;
}