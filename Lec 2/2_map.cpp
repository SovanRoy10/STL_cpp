#include <bits/stdc++.h>
using namespace std;
int main()
{
    // key value
    // raj -> 27
    // hima-> 31
    // sandeep -> 67
    // tank -> 89
    //  map only stores unique keys

    map<string, int> mp;
    mp["raj"] = 27;
    mp["hima"] = 31;
    mp["sandeep"] = 67;
    mp["tank"] = 89; // mp.emplace("tank",89);
    mp["raj"] = 28;  // override the previous value

    // deletes the first key value pair
    // mp.erase(mp.begin());

    // delete key value pair
    // mp.erase("raj"); // mp.erase(key);

    // clear entire map
    // mp.clear();

    // another way to clear entire list
    // mp.erase(mp.begin(), mp.erase());

    // checks map is empty or not:
    if (mp.empty())
    {
        cout << "Yes it is empty";
    }
    else
        cout << "No the map is not empty";

    // log N is the time complexity of map

    // pair
    pair<int, int> pr;
    pr.first = 1;
    pr.second = 10;

    // printing map
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // another way
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    // auto it = mp.find("sovan"); // if not present , then points to the end

    // unordered_map (does not stored in any order)
    unordered_map<int, int> map;
    // o(1) in almost all cases
    //  o(n) in the worst case where n is the container size

    // pair class
    pair<int, int> pr1 = {1, 2};
    // nested pair
    pair<pair<int, int>, int> pr2 = {{1, 2}, 3};
    cout << pr2.first.first << " " << pr2.first.second << " " << pr2.second; // 1 2 3

    vector<pair<int, int>> vecc;
    set<pair<int, int>> stt;
    // unordered map cannot store pair , it can only store single keys

    // multi map
    multimap<string, int> mpp; // no sorted keys , no unique keys , keys can be anything
    mpp["raj"] = 27;
    mpp["raj"] = 28;

    // map : sorted , unique keys
    // unordered_map : uniques keys and not sorted
    //  multi map: not unique keys , not sorted
    return 0;
}