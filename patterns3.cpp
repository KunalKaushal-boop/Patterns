#include <iostream>
using namespace std;
int main(){
    int n,i,j,k,l;
    cin>>n;


/*
_ _ _ _ * 
_ _ _ * * 
_ _ * * * 
_ * * * * 
* * * * * 
*/

    // for(i=1;i<=n;i++){
    //     for(j=n-i;j>0;j--){
    //         cout<<"_ ";
    //     }
    //     for(k=i;k>0;k--){
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
    // }




/*
        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 
*/

    // for(i=1;i<=n;i++){
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=i;k>0;k--){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }



/*
        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 
*/


    // for(i=1;i<=n;i++){
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
    //         cout<<k<<" ";
    //     }
    //     cout<<endl;
    // }

/*
        A 
      A B 
    A B C 
  A B C D 
A B C D E 
*/



    // for(i=1;i<=n;i++){
    //     char c='A';
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
            
    //         cout<<c<<" ";
    //         c++;
    //     }
        
    //     cout<<endl;
    // }




/*
        1 
      2 1 
    3 2 1 
  4 3 2 1 
5 4 3 2 1 
*/

    // for(i=1;i<=n;i++){
        
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=i;k>0;k--){
            
    //         cout<<k<<" ";
            
    //     }
        
    //     cout<<endl;
    // }

/*
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/
    // for(i=1;i<=n;i++){
        
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=i;k>0;k--){
            
    //         cout<<"*"<<" ";
            
    //     }
    //     for(l=i-1;l>0;l--){
    //         cout<<"* ";
    //     }
        
    //     cout<<endl;
    // }

/*
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/
    // for(i=1;i<=n;i++){
        
    //     for(j=n-i;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=i;k++){
            
    //         cout<<k<<" ";
            
    //     }
    //     for(l=i-1;l>0;l--){
    //         cout<<l<<" ";
    //     }
        
    //     cout<<endl;
    // }    
/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
    
*/
    // for(i=1;i<=n;i++){
    //     for(j=i-1;j>0;j--){
    //         cout<<"  ";
    //     }
    //     for(k=1;k<=(n*2)-((i*2)-1);k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


/*
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
*/
    // int m;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n-(i-1);j++){
    //         cout<<"* ";
    //     }
    //     for(k=(i-1)*2;k>0;k--){
    //         cout<<"  ";
    //     }
    //     for(l=n-(i-1);l>0;l--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
        
    // }
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     for(k=(2*n)-(2*i);k>0;k--){
    //         cout<<"  ";
    //     }
    //     for(l=i;l>0;l--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
/*
*             * 
* *         * * 
* * *     * * * 
* * * * * * * * 
* * *     * * * 
* *         * * 
*             * 
*/

    // int m;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     for(k=2*n-2*i;k>0;k--){
    //         cout<<"  ";
    //     }
    //     for(l=1;l<=i;l++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
        
        
    // }
    // for(i=2;i<=n;i++){
    //     for(j=n-(i-1);j>0;j--){
    //         cout<<"* ";
    //     }
    //     for(k=(i-1)*2;k>0;k--){
    //         cout<<"  ";
    //     }
    //     for(l=n-(i-1);l>0;l--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    int m;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"* ";
        }
        
        cout<<endl;
        
        
    }
    for(i=1;i<=n;i++){
        for(j=i-1;j>0;j--){
            cout<<" ";
        }
        for(k=n-(i-1);k>0;k--){
            cout<<"* ";
        }
        
        cout<<endl;
    }
    


    return 0;
}