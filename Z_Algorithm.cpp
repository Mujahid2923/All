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
#define          PI                     3.141592653589793238462643
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Upper(c,x)           (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)           (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)             (X).erase(unique(all(X)),(X).end())

///priority_queue<int,vector<int>,greater<int> >pq;
///string str = "abcdefghijklmnopqrstuvwxyz";
///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;

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

vl v, v1, v2 ;
int arr[ 1000006 ] ;

void calculateZ( string s )
{
    ll left = 0, right = 0 ;
    for( int i = 1 ; i < s.size() ; i ++ )
    {
        if( i > right )
        {
            left = right = i ;
            while( right < s.size() && s[ right ] == s[ right - left ] )
            {
                right ++ ;
            }
            arr[ i ] = right - left ;
            right -- ;
        }
        else
        {
            int j = i - left ;
            if( arr[ j ] <= right - i )
            {
                arr[ i ] = arr[ j ] ;
            }
            else
            {
                left = i ;
                while( right < s.size() && s[ right ] == s[ right - left ] )
                {
                    right ++ ;
                }
                arr[ i ] = right - left ;
                right -- ;
            }
        }
    }
}


int main()
{
    CIN ;
    string text = "aaabcxyzaaaabczaaczaaczabbaaaaaabc" ;
    string pattern = "aaabc" ;
    string s = pattern + "$" + text ;
    calculateZ( s ) ;

    for( int i = 0 ; i < s.size() ; i ++ )
    {
        if( arr[ i ] == pattern.size() )
        {
            v.pb( i - pattern.size() - 1 ) ;
        }
    }

    for( int i = 0 ; i < v.size() ; i ++ )
    {
        cout << v[ i ] << " " ;
    }


    return 0 ;
}

-----------------------------******************--------------------------------
    int pi[2000001];

string preF(string s)
{
    int n = (int)s.size(), j = 0;
    for (int i = 1; i < n; ++i)
    {
        while (j && s[i] != s[j])
        {
            j = pi[j - 1];
        }
        if (s[i] == s[j])
        {
            ++j;
        }
        pi[i] = j;
    }
    return s.substr(0, j);
}

