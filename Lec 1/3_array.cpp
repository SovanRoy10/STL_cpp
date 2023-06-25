#include<bits/stdc++.h>
using namespace std;
array <int,3> arr; //globally declaring :  all elements are 0 <0,0,0> 
int main()
{
    //arrays :  int a[100];
    // array <int,3> arr; // another way of defining array and 3 elements are garbage values <?,?,?> 

    // array <int,5> arr1 = {1,2,3}; // arr1[3] == 0 and arr[4] == 0

    // array <int,5> arr = {1}; // other elements are 0 

    array<int,5> arr1;
    arr1.fill(10);

    for(int i=0;i<5;i++)
    {
        cout<<arr1.at(i)<<" ";
    }
    return 0;
}