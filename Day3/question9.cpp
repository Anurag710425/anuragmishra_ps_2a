#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the value of n \n"; 
   cin>>n;

   for(int i=1;i<=n;i++){
   
    for(int j=1;j<=i;j++){
    int k=j;
      if(i==k){
      cout<<"*";
      }
      else{
        cout<<" ";
      }
    }
   }
   return 0; 
}