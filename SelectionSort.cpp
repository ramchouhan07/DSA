//selection sort 



#include<iostream>
using namespace std;

int selecton(){
    int arr[6] = {4,7,52,1,26,8};
    int n= 6;
    int index;
    for(int i=0; i<=n-1; i++){
        index= i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                swap(arr[j], arr[index]);
            }
        }
    }

for(int i =0; i<n; i++){
    cout<<arr[i]<<",  ";
}


    return 0;
}


int main(){
selecton();
}