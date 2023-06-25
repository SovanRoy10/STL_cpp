#include <iostream>
using namespace std;
struct node
{
    string str;
    int num;
    double numb;
    char x;

    node(string str, int num, double numb, char x)
    {
        this->str = str;
        this->num = num;
        this->numb = numb;
        this->x = x;
    }
};
int main()
{
    // create a datatype where you store multiple data types

    // bad way to define
    // node sovan;
    // sovan.str = "sovan roy";
    // sovan.num = 10;
    // sovan.numb = 10.9;
    // sovan.x = 's';

    // correct way to define
    node sovan1 = node("sovan", 10, 10.9, 'x'); 
    node *sovan2 =new  node("sovan", 10, 10.9, 'x');
    cout<<sovan1.num<<endl;
    
    return 0;
}