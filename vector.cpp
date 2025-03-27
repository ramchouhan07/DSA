#include <iostream>
using namespace  std;
#include <vector>
#include <algorithm> 
int main(){

   std::vector<int> v ;
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7);

   
    cout<<"hello ramam"<<endl;

    //size and capacity
    cout<<"size of vector "<<v.size()<<endl;
    cout<<"capacity of vector"<<v.capacity()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
         cout<<v[i]<<"  ";
     }

    //shorting
//   std:: sort(v.begin(), v.end());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<"  ";
//     }
    //search any element
    // cout<<endl<<binary_search(v.begin(), v.end(),7);
    
    //find index
    // cout<<endl<<find(v.begin(), v.end(),93)-v.begin();
    // cout<<endl<<v[4];]
    //remuve element
   // v.pop_back();
 //short in decresing oreder /revers
//   std:: sort(v.rbegin(), v.rend());
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i]<<"  ";
//     }
return 0;
}
