
__builtin_popcount( int n ) to get number of 1 in the binary representation of the number

-----------------------***********************------------------------
To check a number weather it is a power of something or not
double ans = ( log10( n ) / log10( 3 ) ) ;
double val = ceil( ans ) ;
if( ans == val ) return true ;

--------------------------****************************-----------------------
 Problem solve with getline
 cin >> n ;
 cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
 for( int i = 0 ; i < n ; i ++ )
 {
     getline( cin, s ) ;
 }
--------------------------------***********------------------------------------

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;



-----------------Order set-----------------------
*os.find_by_order(index) os.order_of_key(value)

---------------For too( 3 ) many loop-----------------
  
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
 
 
 ----------------------------------******************-----------------------------
 string s ;
 word from getline( cin , s ) ;
stringstream ss( s ) ;
string word ;
while( ss >> word )
{
   cout << word << endl ;
}
-------------------------------********************-------------------------------------

int Set( int n, int pos ) { return n = n | ( 1 << pos ) ; } 
int reset( int n, int pos ) { return n = n & ~( 1 << pos ) ; } 
bool check( int n, int pos ) { return (bool) ( n & ( 1 << pos ) ) ; }

-----------------------------------*****************------------------------------------
 
///Integer <-> binary
string s = std::bitset<64>(n).to_string();
ll val =  bitset< 64 >( s ).to_ullong() ; or int val = stoi(s, 0, 2); // sum start from 0 with base of two

--------------------------------***************--------------------------------
 
 lcm of three numbers
  ll x = lcm( a, b ) ;
  ll y = lcm( x, c ) / gcd( x, c ) ;

------------------------------******************--------------------------------
 
one character to another shorter lenth in circular way
int x = abs( ch1 - ch2 ) ;
int val = min( x, 26 - x ) ;
 

------------------------------******************--------------------------------
 
 
 
 
 
 
 
 
 
 
 
 
 
 

///sum related 
link - http://www.allmathtricks.com/sum-n-consecutive-numbers/

///string to charArray
 char arr[ str.size() + 1 ] ;
 strcpy( arr, str.c_str() ) ;



///String seperate
///Link :https://www.programiz.com/cpp-programming/library-function/cstring/strtok
char str[] = "parrot,owl,sparrow,pigeon,crow";
char delim[] = ",";
cout << "The tokens are:" << endl;
char *token = strtok(str,delim);
while (token)
{
    cout << token << endl;
    token = strtok(NULL,delim);
}

///Stop continious taking string
while( gets( s ) && strlen( s ) )
{
    char *token ;
    token = strtok( s , " " ) ;
    src = token ;
    token = strtok( NULL , " " ) ;
    des = token ;

    cout << src << " " << des << endl ;
    vec.clear() ;
}


///string to int
int x ;
str = "123" ;
stringstream ss1 ;

ss1 << str ;
ss1 >> x ;

///int to string
string s ;
stringstream ss2 ;
x = 123 ;
ss2 << x ;
s = ss2.str() ;
--------------------------------------------******************---------------------------------------------------
///Vector

int main()
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

///Set and Multiset

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


///Map


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


///Deque

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

///Stack and Queue

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


///Priority_queue

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



///pair

int main()
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

///Vector pair


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


*****------------- power template ----------------*****

template < class T >T pow( T a,T b )
{
    int c = 1 ;
    for( int i = 1 ; i <= b ; i ++ ) c *= a ;
    return c ;
}

-------------**************-------------------------

///Creating Template


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

