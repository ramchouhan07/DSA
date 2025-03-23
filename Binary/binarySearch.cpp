
#include<iostream>
using namespace std;

int binarySearch(){
    int n = 7;
    int arr[n] = {1,3,4,5,6,7};
    int   target = 4;
     int start = 0;
     int end = 5;
     int mid;
     while (end>start)
     {
       mid = (start+end)/2;
       if(arr[mid]==target){
        return 1;
       }
       else if(arr[mid]>target){
        end = mid;
       }
       else {start = mid ;}
       
     }
     


return 0;
}

int main(){

cout<<binarySearch();

    return 0;
}