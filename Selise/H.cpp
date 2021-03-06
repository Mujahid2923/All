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
vector < ll > adj[ 100005 ] ;
map < char, ll > Mp, Mp1, Mp2 ;
set < ll > st, st1, st2 ;
stack < ll > Stk ;
multiset< pll > S ;

///---------------------**********--------------------------------

int t, n, k, x, cap ;
int dp[ 105 ][ 100005 ] ;
string s ;

void Reset()
{
    zero( dp ) ;
}


void Input()
{
    cin >> n >> cap ;
}

void Calculation()
{
    vector< int > P( n + 5, 0 ), W( n + 5, 0 ) ;

    for( int i = 1 ; i <= n ; i ++ )
    {
        cin >> W[ i ] >> P[ i ] ;
    }

    for( int i = 1 ; i <= n ; i ++ )
    {
        for( int j = 1 ; j <= cap ; j ++ )
        {
            if( j >= W[ i ] ) dp[ i ][ j ] = max( dp[ i - 1 ][ j ], P[ i ] + dp[ i - 1 ][ j - W[ i ] ] ) ;
            else dp[ i ][ j ] = dp[ i - 1 ][ j ] ;
        }
    }
    printf( "Case %d: %d\n", ++t, dp[ n ][ cap ] ) ;
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




