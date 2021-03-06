///...................................*****.................................................///
///                  Mujahidul Islam ( mujahidulislam2923@gmail.com )                       ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define          CIN                    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          ull                    unsigned long long int
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          vi                     vector<int>
#define          vl                     vector<ll>
#define          pb                     push_back
#define          sc                     scanf
#define          pf                     printf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          input                  freopen("input.txt","rt", stdin)
#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "No" << endl ;
#define          yes                    cout << "Yes" << endl ;
//#define          endl                   '\n'

///priority_queue<int,vector<int>,greater<int> >pq;
///string str = "abcdefghijklmnopqrstuvwxyz";
///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = std::bitset<64>(n).to_string();
///---------------Order set-------------------
///template<typename T> using orderset =tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
///#include <ext/pb_ds/assoc_container.hpp>
///using namespace __gnu_pbds;
///*os.find_by_order(index) os.order_of_key(value)

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
///sort( all( v ) ) ;

vector < ll > v, v1, v2, v3, v4 ;
vector < string > vs ;
vector < pll > vec, vec1, vec2 ;
vector < pair < ll, pll > > vec3 ;
vector < ll > adj[ 200005 ] ;
map < ll, ll > Mp1;
map < ll, ll > Mp2;
set < ll > st,st1, st2 ;
queue < ll > Q ;
stack < ll > Stk ;
multiset < ll > S, S2 ;
multiset < ll > :: iterator it ;

struct comp_pair_int
{
    bool operator()(const pair<ll,ll> &a, const ll & b)
    {
        return (a.first < b);
    }
    bool operator()(const ll & a,const pair<ll,ll> &b)
    {
        return (a < b.first);
    }
};

ll n, a ;
void check()
{
    ll x = 2 ;
    for( int i = 0 ; i < 16 ; i ++ )
    {
        v3.pb( x ) ;
        x *= 2 ;
    }


    for( int i = 0 ; i < 65536 ; i ++ )
    {
        string s = std::bitset< 17 >( i ).to_string();
        vs.pb( s ) ;
    }
}

void summing1()
{
    ll ok = 0, cnt = 0, sum = 0 ;
    for( int i = 0 ; i < v3[ n - 1 ] ; i ++ )
    {
        string str = vs[ i ] ;
        string s = "" ;
        for( int j = str.size() - 1 ; j >= str.size() - n ; j -- )
        {
            s += str[ j ] ;
        }

        reverse( s.begin(), s.end() ) ;

        for( int j = 0 ; j < s.size() ; j ++ )
        {
            if( s[ j ] == '1' )
            {
                sum += v1[ j ] ;
            }
            else
            {
                cnt ++ ;
            }
        }
        vec1.pb( mp( sum, cnt ) ) ;
        sum = 0, cnt = 0, ok = 0 ;
    }
}

void summing2()
{
    ll ok = 0, cnt = 0, sum = 0 ;
    for( int i = 0 ; i < v3[ n - 1 ] ; i ++ )
    {
        string str = vs[ i ] ;
        string s = "" ;
        for( int j = str.size() - 1 ; j >= str.size() - n ; j -- )
        {
            s += str[ j ] ;
        }

        reverse( s.begin(), s.end() ) ;

        for( int j = 0 ; j < s.size() ; j ++ )
        {
            if( s[ j ] == '1' )
            {
                sum += v2[ j ] ;
            }
            else
            {
                cnt ++ ;
            }

        }
        vec2.pb( mp( sum, cnt ) ) ;
        sum = 0, cnt = 0, ok = 0 ;
    }
}

int main()
{
    CIN ;
    check() ;
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> a ;
        v1.pb( a ) ;
    }

    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> a ;
        v2.pb( a ) ;
    }

    summing1() ;
    summing2() ;

    sort( all( vec1 ) ) ;
    sort( all( vec2 ) ) ;

    for( auto x : vec1 )
    {
        if( binary_search( all( vec2 ), x.first, comp_pair_int() ) )
        {
            ll y = lower_bound( all( vec2 ), x.first, comp_pair_int() ) - vec2.begin() ;

            if( y == vec2.size() )
            {
                y -- ;
            }
            v.pb( vec2[ y ].second + x.second ) ;
        }
    }

    sort( all( v ) ) ;
    cout << Min( v ) << endl ;

    return 0 ;
}
