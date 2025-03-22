//buble sort 
//1,4,5,6,8,2

#include<iostream>
using namespace std;
int buble(){
    int arr[6] = {1,4,5,6,8,2};
    int n= 6;
    for(int i=0; i<n;i++){

        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"arra of 6  "<<arr[5]<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
 }

int main(){
 buble();
 return 0;
}