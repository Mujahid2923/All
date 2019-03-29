#include<bits/stdc++.h>
using namespace std;

///Vector

/*int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    v.push_back(3);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;

    v.pop_back();
    v.pop_back();
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //Removing unique value from vector
    cout<<"unique value :"<<endl;
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(auto x : v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

}
*/
///Set and Multiset
/*
int main()
{
    cout<<"set:"<<endl;

    set<int>st;
    st.insert(3);
    st.insert(2);
    st.insert(5);
    st.insert(3);

    cout<<st.count(3)<<endl;
    cout<<st.count(4)<<endl;

    st.erase(5);
    cout<<st.count(5)<<endl;

    for(auto x : st)
    {
        cout<<x<<endl;
    }

    cout<<"Multiset:"<<endl;

    multiset<int>mst;
    mst.insert(5);
    mst.insert(5);
    mst.insert(5);

    cout<<mst.count(5)<<endl;

    mst.erase(5);
    cout<<mst.count(5)<<endl;
}
*/


///Map
/*


int main()
{
    map<string,int>mp;
    mp["Bangla"]=4;
    mp["Hindi"]=3;

    cout<<mp["Bangla"]<<endl;

    for(auto x : mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}
*/

///Deque
/*
int main()
{
    deque<int>d;

    d.push_back(5);
    for(auto x : d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    d.push_back(2);
    for(auto x : d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    d.push_front(3);
    for(auto x : d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    d.pop_back();
    for(auto x : d)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(auto x : d)
    {
        cout<<x<<" ";
    }

}
*/

///Stack and Queue
/*
int main()
{
    cout<<"Stack:"<<endl;
    stack<int>s;
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.push(5);
    cout<<s.top()<<endl;

    cout<<"Queue:"<<endl;
    queue<int>q;
    q.push(7);
    q.push(9);
    q.push(6);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
}
*/

///Priority_queue
/*
int main()
{
    priority_queue<int>pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    pq.push(1);
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
*/



///pair
/*int main()
{

    int n,a,b;
    cin>>n;
    pair<int,int>p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    cout<<"Before sorting :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<p[i].first<<" ";
        cout<<p[i].second<<endl;;
    }
    sort(p,p+n);
    cout<<"After sorting :"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<p[i].first<<" ";
        cout<<p[i].second<<endl;;
    }
}
*/
///Vector pair
/*
int main()
{
    int a,b;
    vector< pair<int,int> >v;
    for(int i=0; i<2; i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    cout<<"Before sorting :"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" ";
        cout<<v[i].second<<endl;
    }

    sort(v.begin(),v.end());
    cout<<"After sorting :"<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" ";
        cout<<v[i].second<<endl;
    }

}
*/

///Creating Template
/*

template <class T>T getmax(T a,T b)
{
    if(a>b)
        return a;
    else
        return b;
}

template <class T>T absolute(T a)
{
    if(a<0)
        return -a;
    else
        return a;
}


int main()
{
    int a,b;
    cin>>a>>b;
    int x=getmax<int>(a,b);
    cout<<x<<endl;

    long p;
    cin>>p;
    int y=absolute<long>(p);
    //int y=absolute(p);
    cout<<y<<endl;
    return 0;
}
*/

