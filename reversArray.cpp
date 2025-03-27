#include<iostream>
using namespace std;
int main(){
    int arr[6]  = {1,3,4,5,7,8};
 int n = 6;
 int start = 0;
 int end = 5;
while (start<end){
swap(arr[start],arr[end]);
start++;
end--;
}
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

}
}