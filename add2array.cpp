#include <iostream>
#include <conio.h>
using namespace std;

 int main(){
   int arra1[3][4];
   int arr2[3][4];
   int arra3[3][4];
   cout<<"enter aara 1"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>> arra1[i][j];
    }
   } 
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<< arra1[i][j]<<" ";
    }
    cout<<"\n";
   }
   //arraNO 2
cout<<"enter array 2"<<endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cin>> arr2[i][j];
    }
   } 
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<< arr2[i][j]<<" ";
    }
    cout<<"\n";
   }
   //add array
cout<<"aray no. 3"<<"\n";
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
         arra3[i][j] = arra1[i][j]+arr2[i][j];
    }
   } 
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<< arra3[i][j]<<" ";
    }
    cout<<"\n";
   }

 }