#include<iostream>
using namespace std;
int pairDefference(){

int arr[10] = {1,2,4,5,7,8,9,100,200,2500};
int n =  10;
int target = 100;
for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
        if(arr[j]-arr[i]==target){
            return 1;
        }
    }
}
return 0;
    
}
int main(){
    cout<<pairDefference();
}