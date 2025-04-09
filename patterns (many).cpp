#include<iostream>
using namespace std;
int main(){

    /*
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * * 
    * * * * *
    */
    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



    
    /*
    1 1 1 1 1 
    2 2 2 2 2 
    3 3 3 3 3 
    4 4 4 4 4 
    5 5 5 5 5 
    */
    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }




    /*
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5 
    1 2 3 4 5    
    */
    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    /*
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1    
    */
    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=n;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }





    /*
    1 4 9 16 25 
    1 4 9 16 25 
    1 4 9 16 25 
    1 4 9 16 25 
    1 4 9 16 25   
    */
    // int n,i,j;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;
    // }





    /*
    a a a a a 
    b b b b b 
    c c c c c 
    d d d d d 
    e e e e e     
    */
    // int n,i,j;
    // char c='a';
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         cout<<c<<" ";
    //     }
    //     c+=1;
    //     cout<<endl;
    // }



    /*
    a b c d e 
    a b c d e 
    a b c d e 
    a b c d e 
    a b c d e      
    */
    // int n,i,j;
    
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     char c='a';
    //     for(j=1;j<=n;j++){
    //         cout<<c<<" ";
    //         c+=1;
    //     }
    //     cout<<endl;
    // }


    int n,i,j,num=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            // cout<<num<<" ";
            // num++;
            cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }

}
