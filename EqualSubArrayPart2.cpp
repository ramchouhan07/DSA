

// equal sub array in o(n) time

#include<iostream>
using namespace std;
int equlSubArrayPart2(){

    int arr[7] = {1,2,4,6,8,4,1};
    int n= 7;
    int totalSum = 0;
    int prifix = 0;
    for(int i=0; i<n; i++){
        totalSum += arr[i];
    }

    for(int i=0; i<n-1; i++){
        prifix  = arr[i];
      int  sufix =  totalSum-prifix;
        if(prifix==sufix){return 1; }
    }
    return 0;
}
int main(){
    cout<<equlSubArrayPart2;
}