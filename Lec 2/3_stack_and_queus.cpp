#include <bits/stdc++.h>
using namespace std;
int main()
{
    // stack and queues
    // stack<int> st; // last in first out
    // pop
    // top
    // size
    // empty
    // push or emplace

    // st.push(2);
    // st.push(4);
    // st.push(3);
    // st.push(1);

    // cout << st.top();         // prints 1
    // st.pop() << endl;         // delets the last entered element
    // cout << st.top() << endl; // prints 3

    // delets entire stack
    // while (!st.empty())
    // {
    //     st.pop();
    // }

    // cout<<st.size(); // size of stack

    // Note: if the stack is empty then st.top() throws an error

    // queue fifo first in first out
    // push
    // front
    // pop
    // size

    // queue<int> q;
    // q.push(1);
    // q.push(5);
    // q.push(3);
    // q.push(6);

    // cout<<q.front()<<endl;

    // //deletes entire queue , takes o(N)
    // while(!q.empty()){
    //     q.pop();
    // }

    // the other operations takes O(1) time

    // priority queue (heap sort : heapify)
    //  all elements in sorted order and in log N

    // push
    // size
    // pop
    // top
    // empty

    // priority_queue<int> pq;
    // pq.push(1);
    // pq.push(5);
    // pq.push(2);
    // pq.push(6);

    // stores all the elements in descending order
    // pq.pop();
    // cout << pq.top(); // print 6
    // pq.pop();
    // cout << pq.top(); // print 5

    // priority_queue<pair<int, int>> pqq;
    // pqq.push(1, 5);
    // pqq.push(1, 6);
    // pqq.push(1, 7);

    // how to store in ascending order
    // priority_queue<int> pq1;
    // pq1.push(-1);
    // pq1.push(-5);
    // pq1.push(-2);
    // pq1.push(-6);

    // cout << -1 * pq1.top() << endl;

    // minimum priority queue
    // priority_queue < int, vector<int>, greater < int >> pq2;
    // pq2.push(1);
    // pq2.push(5);
    // pq2.push(2);
    // pq2.push(6);

    // cout<<pq2.top()<<endl;

    // dequeue
    deque<int> dp;
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin , end , rbegin() , rend()
    // size
    // clear
    // empty
    // at

    list<int> ls; //implemented by doubly linkded list 
    // push_front()
    // push_back()
    // pop_front()
    // pop_back()
    // begin , end , rbegin() , rend()
    // size
    // clear
    // empty
    // at
    //remove : o(1)
    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);
    ls.remove(2); // o(1)


    // given N numbers , print the elemenets that occur maximum number of times
    // input 
    //5
    // 1 3 3 3 2

    // output
    //3

    // ans :

    int n;
    cin>>n;
    unordered_map<int,int> mp;
    int maxi =0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]> mp[maxi])
        {
            maxi = x;
        }
    }
    cout<< maxi <<endl;

    // map : nlogn
    // unordered_map : n

    return 0;
}