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

vector < ll > v, v1, v2, v3, v4 ;
vector < pair< ll, ll > > vec ;
vector < int > adj[ 100005 ],radj[ 100005 ], result[ 100005 ] ;
map < ll, ll > Mp, Mp1, Mp2 ;
set < ll > st, st1, st2 ;
stack < int > Stk ;
multiset< pll > S ;

///---------------------**********--------------------------------

int t, n, m, x, y ;
int visited[ 100005 ] ;

void Reset()
{
    zero( visited ) ;
    for( int i = 1 ; i <= n ; i ++ )
    {
        adj[ i ].clear() ;
        radj[ i ].clear() ;
        result[ i ].clear() ;
    }
}


void Input()
{
    cin >> n >> m ;
    for( int i = 0 ; i < m ; i ++ )
    {
        cin >> x >> y ;
        if( x != y )
        {
            adj[ x ].pb( y ) ;
            radj[ y ].pb( x ) ;
        }
    }
}

void dfs( int u )
{
    visited[ u ] = 1 ;
    for( auto v : adj[ u ] )
    {
        if( !visited[ v ] ) dfs( v ) ;
    }
    Stk.push( u ) ;
}

void ssc( int u, int idx )
{
    result[ idx ].pb( u ) ;
    visited[ u ] = 1 ;
    for( auto v : radj[ u ] )
    {
        if( !visited[ v ] ) ssc( v, idx ) ;
    }
}

void Calculation()
{
    for( int i = 1 ; i <= n ; i ++ )
    {
        if( !visited[ i ] ) dfs( i ) ;
    }

    zero( visited ) ;
    int idx = 0 ;
    while( !Stk.empty() )
    {
        int u = Stk.top() ;
        Stk.pop() ;
        if( !visited[ u ] )
        {
            ssc( u, idx ) ;
            idx ++ ;
        }
    }
    int cnt = 0 ;
    for( int i = 0 ; i < idx ; i ++ )
    {
        if( result[ i ].size() == 1 && !adj[ result[ i ][ 0 ] ].empty() ) cnt ++ ;
    }
    printf( "Case %d: %d\n", ++t,cnt ) ;
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

