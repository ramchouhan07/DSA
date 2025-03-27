#include<iostream>
using namespace std;
int main(){

int arr[10] = {1,0,1,1,0,0,1,0,1};
int start = 0,end=9;
while (end>start)
{
    if(arr[start]==0){
        start++;
    }
    else{
        if(arr[end]==0){
            swap(arr[start],arr[end]);
            end--;
            start++;
        }
        else{
            end--;
        }
    }
}
for (int i = 9; i < 0; i--)
{
  cout<<arr[i]<<endl;
}


    return 0;
}