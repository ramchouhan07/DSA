
//inseersion sort


#include<iostream>
using namespace std;

int insersion(){

    int n= 6;
    int arr[n] {4,3,8,7,6,2};

    for(int i=1; i<n; i++){

        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;

}

int main(){
  
    insersion();

    return 0;
}