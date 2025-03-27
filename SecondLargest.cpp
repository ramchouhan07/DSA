
#include<iostream>
using namespace std;
int main(){

    int arr[9] = {1,2,4,8,5,6,7,9,5};
    int first = -1;
   int n = 9;

    for(int i=0;i<n; i++){
        if(arr[i]>first){
            first = arr[i];
        }
    }
    cout<<"first is "<<first<<endl;
    int second = -1;
    for(int i=0; i<n; i++){
        if(first!=arr[i]&& arr[i]>second){
            second = arr[i];
        }
    }
    cout<<"second is"<<second;
    return 0;
}