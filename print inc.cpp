#include<iostream>
using namespace std ;
void dec(int n){
    if(n==1){
        cout<<"1";
        return;
    }
     cout<<n<<endl;
     dec(n-1);
}
     void inc(int n){
         if(n==1){
        cout<<"1";
        return;
         }
         inc(n-1); // here number comes from up to down 
         cout<<n<<endl;
     }

int main(){
    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}


    
    


