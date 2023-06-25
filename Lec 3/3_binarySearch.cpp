#include <bits/stdc++.h>
using namespace std;
int main()
{
    // binary search
    // this stl only works on sorted arrays
    //  arr[] -> {1,5,7,9,10};
    //  x =9
    // true : 9 exists in my arr
    //  x= 8
    // false : 8 does not exist in my arr

    // bonary_search(firstIterator, lastIterator,x)
    // returns a true or returns a false
    int arr[] = {1, 5, 7, 9, 10};
    bool res = binary_search(arr, arr + 5, 8);
    cout<<res;



//lower_bound function
//  returns an iterator pointing to the first
// element which is not less than X
// arr[] -> {1, 5, 7, 7, 8, 10, 10, 10, 11, 11, 12}

//
//  this works in log N

    
    return 0;
}