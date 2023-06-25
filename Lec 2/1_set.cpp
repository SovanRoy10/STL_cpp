#include <bits/stdc++.h>

using namespace std;
int main()
{

    // getline
    //  string str;
    //  getline(cin,str);

    int arr[] = {1, 2, 2, 5, 2};

    set<int> st;
    int n=5;
    for (int i = 0; i < 5; i++)
    {
        st.insert(arr[i]);
    }

   // st.erase(st.begin()); // Erase the first element

    // st.erase(st.begin(), st.begin() + 1); ? error 

    //st.erase(5); // st.erase(key) // delete the key

    // all takes log n times 
    //cout << "Number of unique elements: " << st.size() << endl;

    set<int> st1 = {1,5,7,8};
    auto it = st1.find(7); // log n // it will be iterator to 7
    it = st1.find(9); // it = st.end() if the element is not found

    st1.emplace(6); // same as st1.insert(6) but it is little bit faster , same as emplace_back in vector


    // set always stores unique element in ascening order

    //how to delete entire set?
    st1.erase(st1.begin(),st1.end());
    cout<<st1.size(); // 0


    // unordered_set 
    unordered_set <int> st2; // not ascending order , we cannot tell the order of the elements

    st2.insert(2);
    st2.insert(5);
    st2.insert(1);
    
    // average time complexity is O(1)
    //but the worse case is linear in nature , O(set size)

    //Tip:  if there is no need to store unique elements in ascending order then , use unorderd_set but if you r getting TLE then use ordered_set or set<int> st



    //multi set
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3); // ms.emplace(3)
    // ms -> {1,1,2,2,3};
    // in multiset we can store duplicate elements 

    ms.erase(2); // all the instances will be erased

    auto it4 = ms.find(2); // returns an iterator pointing to the first element of 2

    ms.clear() ; // deleted the entire set
    ms.erase(ms.begin(),ms.end()); // deletes the entire set

    //printing set
    // for(auto it = st.begin();it!=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    // for(auto it:st){
    //     cout<<it;
    // }

    //find how many times a key occurs:-
    st.count(2); 
    return 0;
}
