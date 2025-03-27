// find missing number in a array 
// [1,2,5,4,6,7] =25 here 3 is missing
// arrray store n+1 elements every elment is diffN and less than n+1;
//formula n*(n+1)/2
#include<iostream>
using namespace std;
int main(){
int sum1 =0;
int arr[6] = {1,2,5,7,6,4};
int n = 6+1;
//sum of this given array
for(int i=0; i<=5; i++){
    sum1 +=arr[i];
}
//sum of n number 
int sum2 = n*(n+1)/2;
int missingElement = sum2-sum1;
cout<<"sum of first arr is  "<<sum1<<endl;
cout<<"sum of second arr is  "<<sum2<<endl;
cout<<"missing element  is  "<<missingElement<<endl;


return 0;
}