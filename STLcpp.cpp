#include <bits/stdc++.h>
using namespace std;

void explainPairs()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second; // o/p = 1 2

    pair<int, pair<int, int>> q = {1, {2, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second; // o/p = 1 2 3

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {4, 5}};
    cout << arr[0].second << " " << arr[2].first; // o/p = 2 4
}

void explainVectors()
{
    vector<int> v;     // Vector Declaration! ---> v ={ }
    v.push_back(1);    //  ---> v={1}
    v.emplace_back(2); //---> v={1,2}

    vector<pair<int, int>> p = {1, 2};
    p.push_back({3, 4}); // ---> p = {{1,2},{3,4}}

    vector<int> v(5, 10); //---> {10,10,10,10,10} | contain of size=5 is created conating 10(5 times) |
    vector<int> a(4);     // ---> {__,__,__,__} | it will conatin some garbage value |

    veector<int> v1(v); // now vector v is copied in vector v1 i.e v1={10,10,10,10,10}

    // Accesing Vector Elements

    vector<int>::iteration itr = v.begin(); // | 1 | 2 | 3 | 4 |  v.begin() will indicates towards 1
    itr++;                                  // ---> itr++ will now move fwd and now points towards 2
    cout << *(itr) << " ";                  // o/p = 2
    // there is something named as v.end() which indicates the end of the iteration i.e next to 4

    // TO print the whole vector we'll use loop
    for (auto itr = v.begin(); itr ! = v.end(); itr++) // auto automatially defines the data types!
    {
        cout << *(itr) << " ";
    }

    // DELETION OF VECTORS

    v.erase(v.begin() + 1); // v = {1,2,3,4,5}; v.begin()+1 will del means 2 will erase out
    // Suppose we have v ={1,2,3,4,5,6,7} and i wish to delete 2 and 3, So
    v.erase(v.begin() + 1, v.begin() + 3); // now after this 2 and 3 will get deleted

    // INSERTION OF VECTOR

    vector<int> v(2, 10);           // v={10,10}
    v.insert(v.begin(), 5);         // now v = {5,10,10}
    v.insert(v.begin() + 2, 4, 11); // now v = {5,10,11,10,11}
}

void explainList()
{
    list<int> ls;    // ls = { }
    ls.pop_back(1);  // ls = {1}
    ls.pop_front(0); // ls = {0,1}
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);  // dq = {1}
    dq.push_front(2); // dq = {2,1}

    dq.pop_back();  // dq = {2}
    dq.pop_front(); // dq = { }
}

void explainStack()
{
    stack<int> st;
    st.push(1); // st = {1}
    st.push(2); // st = {2,1}
    st.top();   // o/p = 2
    st.size();  // 2
    st.pop();   // st = {1}
}

void explainQueue()
{
    queue<int> q;
    q.push(1);     // q={1}
    q.push(2);     // q={1,2}
    q.push(3);     // q={1,2,3}
    q.back() += 5; // It means add 5 to the back i.e 3+5 =8 so now q = {1,2,8}

    cout << q.back() << " " << q.front(); // o/p = 8 1
    q.pop();                              // q={2,8}
}

void explainPriority_Queue()
{
    priority_queue<int> pq;
    pq.push(4);       // pq ={4}
    pq.push(5);       // pq = {5,4}
    pq.push(1);       // pq ={5,4,1}
    pq.push(10);      // pq ={10,5,4,1}
    cout << pq.top(); // o/p = 10
    pq.pop();         // pq = {5,4,1}
}

void explainSet()
{
    set<int> st;
    st.push(1);  // st = {1}
    st.push(2);  // st = {1,2}
    st.push(3);  // st = {1,2,3}
    st.push(3);  // st = {1,2,3}
    st.push(2);  // st = {1,2,3}
    st.erase(3); // st = {1,2}

    int cnt = st.count(1) // This is to check whether 1 is there or not so if yes then 1 else 0!!
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(2); // {2}
    ms.insert(2); // {2,2}
    ms.insert(2); //{2,2,2}

    ms.erase(2); // ms = { }
}

void explainUnorderedSet()
{
    //Everything is same as set but it does not store in sorted manner !!
}

void explainMap()
{
    
}