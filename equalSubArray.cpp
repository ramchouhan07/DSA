#include<iostream>
using namespace std;
int equlSubArray(){

    int arr[6] = {1,2,3,5,1};
    int n=5;
    int sum1;
    int sum2 ;
    for(int i=0; i<n-1; i++){
        sum1 = sum2 = 0;
        for(int j=0; j<=i; j++){
            sum1 += arr[j];
        }
        for(int j= i+1; j<n; j++){
            sum2  += arr[j];
        }
        if(sum1 == sum2){
            return 1;
        }

    }
    return 0;
}
int main(){
    cout<<equlSubArray();
}