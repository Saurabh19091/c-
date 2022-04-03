#include<iostream>
using namespace std;

int fibonaci(int n){
    if(n==0 || n==1){ // the is base case we use to terminate the program
        return n;
    }
    return fibonaci(n-1)+fibonaci(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibonaci(n)<<endl;
    return 0;
}