#include <iostream>
#include <conio.h>
using namespace std;


int rotedArray(){

int arr[4][4];
cout<<"enter array"<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>arr[i][j];
    }
    cout<<endl;
}


//array print 
cout<<"your array"<<endl;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
cout<<"roted array"<<endl;

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
arr[j][3-i]=arr[i][j];

    }
    
}

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}

}
int main(){
    rotedArray();
}

