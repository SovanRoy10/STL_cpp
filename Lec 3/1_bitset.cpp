#include <bits/stdc++.h>
using namespace std;
int main()
{
    // bitset
    // int -> 16 bit
    // char -> 8 bit

    int a[100];
    char b[100];

    // bitset -> 1 bit

    bitset<5> bt; // uses in segment tree problem (only stores 1 or 0)
    cin >> bt;    // 10101

    // functions

    // all  // if all bits are true or 1 then it will return true otherwise it will return false
    cout<<bt.all();

    // any  //if any one bit is true or 1 , it will return true otherwise it will return false
    cout<<bt.any();

    // count  // it returns the number of set bits or the number of 1's
    cout<<bt.count();

    // flip  //suppose the bt is 10100 , now if we do bt.flip(2), then now bt will be 10000
    bt.flip(2);

    bt.flip() ; // flips all the bits

    // none  // if none is set , then it will return true otherwise it will return false;
    cout<<bt.none();

    // set  // entirely the 5 positions will be one 
    bt.set();

    bt.set(2); // only the bit of 2nd position will become one

    bt.set(2,0); // go and make the 2nd position's bit zero

    // reset // turns all indexes 0
    bt.reset();

    bt.reset(2); // only the bit of 2nd position will become zero

    // size
    cout<<bt.size(); // prints 5

    // test
    cout<<bt.test(1); // checks if the bit is set or not at index 1

    return 0;
}