/// https://codeforces.com/contest/1407/problem/C

#include<bits/stdc++.h>
using namespace std;

#define          FaRaBi                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          output                 freopen("output.txt","wt", stdout)
#define          ld                     long double
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          pf                     printf
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
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
#define          siz                    10005

///--------------------**********----------------------------------

vector < int > v, v1, v2, v3, v4 ;
vector < pll > vec ;
vector < ll > adj[ 100005 ] ;
map < ll, ll > Mp ;
set < int > st, st1, st2 ;
stack < ll > Stk ;
multiset < ll > S ;

///---------------------**********--------------------------------

int n, r ;
int arr[ siz ] ;

void Reset()
{
    memset( arr, -1, sizeof arr ) ;
}


void Input()
{
    cin >> n ;
    for( int i = 1 ; i <= n ; i ++ ) st.insert( i ) ;
}

int query( int x, int y )
{
    cout << "? " << x << " " << y << endl ; /// The value I will give them , I have to print them
    cin >> r ;   /// they will give us this
    return r ;
}

void Calculation()
{
    int p = 1, cnt = n ;
    while( cnt -- )
    {
        for( int i = 1 ; i <= n ; i ++)
        {
            if( arr[ i ] == -1 && i != p )
            {
                int a = query( p, i ) ;   /// I can give them any two index and in return they will give me remainder
                int b = query( i, p ) ;
                st.erase( max( a, b ) ) ;
                if( a > b )
                {
                    arr[ p ] = a ;
                    p = i ;
                }
                else
                {
                    arr[ i ] = b ;
                }
                break ;
            }
        }
    }

    for( int i = 1 ; i <= n ; i ++ ) if( arr[ i ] == -1 ) arr[ i ] = *st.begin() ;

    cout << "! ";
    for( int i = 1 ; i <= n ; i ++ ) cout << arr[ i ] << " " ;
    cout << endl ;
}

void solve()
{
    Reset() ;
    Input() ;
    Calculation() ;
}

int main()
{
    FaRaBi ;
    int t ;
    //cin >> t ;
    t = 1 ;
    while( t-- ) solve() ;
    return 0 ;
}
