// #include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=5-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=(2*i)-1;k++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     for(int i =1;i<=3;i++){
        
//         for(int j=1;j<=(2*5)-1;j++){
//             if(j==4||j==5||j==6){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<"\n";
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
int n=9;
int main(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i =1;i<=int(n/2)+1;i++){
        
        for(int j=1;j<=(2*n)-1;j++){
            if(j==int(((2*n)-1)/2)||j==int(((2*n)-1)/2)+1||j==int(((2*n)-1)/2)+2){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}
