#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);// here we array+1 to pass element from 1st element to 2nd element 
     return (arr[0]<arr[1] && restarray);
}

       
        

    

int main(){
    int arr[]={1,6,3,4,5};
    
    cout<<sorted(arr,5)<<endl;
    return 0;
}