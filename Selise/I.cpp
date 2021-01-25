#include<bits/stdc++.h>
using namespace std;

#define          Looser                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          pii                    pair< int, int >
#define          pll                    pair< ll, ll >
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          pf                     printf
#define          mp                     make_pair
#define          gcd(a, b)          	__gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          segment_tree           int Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;

///--------------------**********----------------------------------

vector < int > v, v1, v2, v3, v4 ;
vector < pair< ll, ll > > vec ;
vector < ll > adj[ 100005 ] ;
map < char, ll > Mp, Mp1, Mp2 ;
set < ll > st, st1, st2 ;
stack < ll > Stk ;
multiset< pll > S ;

///---------------------**********--------------------------------

int t, n, k, x, m ;
string s ;

void Reset()
{
    v1.clear() ;
    v2.clear() ;
}


void Input()
{
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> x ;
        v1.pb( x ) ;
    }
    cin >> m ;
}

int Fun()
{
    v2.pb( v1[ 0 ] ) ;
    for( int i = 1 ; i < n ; i ++ )
    {
        if( v1[ i ] >= v2.back() )
        {
            v2.pb( v1[ i ] ) ;
        }
        else
        {
            int pos = Upper( v2, v1[ i ] ) ;
            v2[ pos ] = v1[ i ] ;
        }
    }

    if( v2.size() < m ) return -1 ;
    else return v2[ m - 1 ] ;
}

void Calculation()
{
    int ans = Fun() ;
    printf( "Case %d: %d\n", ++t, ans ) ;
}

void solve()
{
    Reset() ;
    Input() ;
    Calculation() ;
}

int main()
{
    Looser ;
    int T = 1 ;
    cin >> T ;
    while( T-- ) solve() ;
    return 0 ;
}




