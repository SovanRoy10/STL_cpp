#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sorting // nlogn

    int n = 5;
    int arr[] = {2, 20, 2, 4, 100};
    sort(arr, arr + n);

    vector<int> vec = {1, 5, 4, 3, 1};
    sort(vec.begin(), vec.end());

    // vec -> {1,6,2,7,4};
    // sort it so that only indexed from 1 to 3
    // final vec -> {1,2,6,7,4};

    //    sort(vec.begin()+1,vec.begin()+4);

    // reverse
    // reverse(arr, arr + n);
    // reverse(vec.begin(), vec.end());

    // maximum element in any index range
    // i to j give me the maximum
    // int i, j;
    // int maxi = INT_MIN;
    // for (int k = i; j <= j; k++)
    // {
    //     if (arr[k] > maxi)
    //         maxi = arr[k];
    // }

    // using stl:-
    // int el = *max_element(arr, arr + n);
    // el = *min_element(arr, arr + n);

    // I give you a range and i want you to find the sum in that given range
    //  tell me the sum in that range i to j

    // int sum = 0;
    // for (int k = i; j <= j; k++)
    // {
    //     sum += arr[k];
    // }
    // accumulate(startIterator , endIterator, Initialsum)
    // int s = accumulate(arr,arr+n,0);
    // s = accumulate(vec.begin(),vec.end(),0);

    // arr[] = {1,6,7,1,2,1,3};
    // tell me how many times the element 1 occurs in the array
    // int  x = 1;

    // int cnt =0;
    // for(int i=0;i<n;i++)
    // {
    //     if(arr[i]==x) cnt++;
    // }
    // cout<<cnt;

    // cout<< count(arr,arr+n,x);
    // count(firstIterator , lastiterator, x)

    // arr[] -> {1,2,5,1,2,4,4}
    // i want you to find the first occurence of 2
    // int ind = -1;
    // int x = 2;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         ind = i;
    //         break;
    //     }
    // }
    // cout << ind;

    // auto it = find(arr, arr + n, 2);// return an iterator
    //  ind = it - arr;
    //  ind = it-vec.begin();
    // pointing to the first instance of it, or else it
    //  returns pointing to the end() if it is not there

    // if element is not found then:- 
    // if(it==vec.end()){
    //     cout<<"Elemenet is not present";
    // }
    // else{
    //     cout<<"Element is first present at: "<<it-vec.begin();
    // }

    return 0;
}