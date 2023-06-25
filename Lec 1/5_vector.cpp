#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[100];
    // int arr1[1000000]; // 10^6  size array you can define inside int main but globally you can define 10^7 size
    // if the data type of boolean you can define 10^7 size array and globally 10^8

    // vector

    vector<int> vec; // empty vector is created

    vec.push_back(1); // 1
    vec.push_back(2); // 1 ,2
    vec.push_back(3); // 1 ,2 ,3

    vec.pop_back(); // 1,2
    // segmentation fault if you push_back 10^7 times

    vec.clear(); // erase all elements at once

    vector<int> arr(5, 0);   // 0 0 0 0 0
    vector<int> arr1(5, 10); // 10 10 10 10 10
    // copy entire vector
    arr = arr1;

    vector<int> sovan;
    sovan.push_back(1);
    sovan.push_back(2);
    sovan.push_back(3);
    sovan.push_back(4);
    sovan.push_back(5); // 1 2 3 4 5

    vector<int> pochodada(sovan.begin(), sovan.begin() + 3); // 1 2 3

    // for(auto i: pochodada)
    // cout<<i<<" ";

    // use emplace_back instead of push_back because it is little bit faster

    // swap : - swap(v1,v2) ;

    // to definning 2 D vectors

    vector<vector<int>> vec1;
    vector<int> sovan1;
    sovan1.push_back(1);
    sovan1.push_back(2);

    vector<int> sovan2;
    sovan2.push_back(10);
    sovan2.push_back(20);
    sovan2.push_back(30);

    vec1.push_back(sovan1);
    vec1.push_back(sovan2);

    // printing

    /*for (auto vctr : vec1)
    {
        for (auto it : vctr)
            cout << it << " ";
        cout << endl;
    }*/

    // define 10 * 20
    vector<vector<int>> vec(10, vector<int>(20, 0));

    vector<int> arrr[4]; // protyek ta index e vector ache ,array of vector
    arrr[0].push_back(2);

    // 10 * 20 * 30
    vector<vector<vector<int>>> vecc (10, vector<vector<int>> (20, vector<int> (30,0)));

    return 0;
}