#include<bits/stdc++.h> //to inlcude everything(all the header files)
// do not use it in interview

using namespace std;//why we use this 
//namespace is used to declare any scope , function , variable etc
namespace sovan{
    double val = 50.0;
    int getVal()
    {
        return val*10;
    }
}
int main()
{
    int val = 10;
    // double val = 50.0; //multiple decalration error
    cout<<val<<endl; // 10 
    cout<<sovan::val<<endl; // 50
    cout<<sovan::getVal()<<endl; // 500
}