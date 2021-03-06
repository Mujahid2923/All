///...................................*****.................................................///
///                  Mujahidul Islam ( mujahidulislam2923@gmail.com )                       ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

#include<bits/stdc++.h>
using namespace std;

#define          CIN                    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ull                    unsigned long long int
#define          db                     double
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
#define          rep( i , a , b )       for( i=a ; i<b ; i++)
#define          rev( i , a , b )       for( i=a ; i>=b ; i--)
#define          repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define          RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          get_pos(vect,x)        (lower_bound(vect.begin(),vect.end(),x)-vect.begin())
#define          CASEL(t)               printf("Case %d:\n",t)

///priority_queue<int,vector<int>,greater<int> >pq;

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

vl v, vec ;
ll mxC, mxG ;

void kadane()
{
    mxC = v[ 0 ], mxG = v[ 0 ] ;
    for( int i = 1 ; i < v.size() ; i ++ )
    {
        mxC = max( v[ i ], mxC + v[ i ] ) ;
        if( mxC > mxG )
        {
            mxG = mxC ;
        }
    }
    // cout << mxG << endl ;
    vec.pb( mxG ) ;
}

int main()
{
    CIN ;
    ll n,m, a ;
    cin >> n >> m ;
    ll arr[ n ][ m ] ;
    for( int i = 0 ; i < n ; i ++ )
    {
        v.pb( 0 ) ;
    }

    for( int i = 0 ; i < n ; i ++ )
    {
        for( int j = 0 ; j < m ; j ++ )
        {
            cin >> arr[ i ][ j ] ;
        }
    }

    for( int i = 0 ; i < n ; i ++ )
    {
        for( int j = 0 ; j < m ; j ++ )
        {
            pf("%4lld",arr[ i ][ j ] ) ;
        }
        cout << endl ;
    }
    cout << endl ;


    for( int k = 0 ; k < m ; k ++ )
    {
        for( int j = k ; j < m ; j ++ )
        {
            int l = 0 ;
            for( int i = 0 ; i < n ; i ++ )
            {
                //pf("%4lld",arr[ i ][ j ] ) ;
                ll x = arr[ i ][ j ] + v[ l ] ;
                v[ l ] = x ;
                //pf("%4lld", x ) ;
                l ++ ;

            }
            kadane() ;
            for( int i = 0 ; i < n ; i ++ )
            {
                pf("%4lld",  v[ i ] ) ;
            }
            cout << endl ;
        }
        v.clear() ;
        for( int j = 0 ; j < n ; j ++ )
        {
            v.pb( 0 ) ;
        }
        cout << endl ;
    }
    sort( all( vec ) ) ;
    cout << vec[ vec.size() - 1 ] << endl ;

    return 0 ;
}
/*
4 5
2 1 -3 -4 5 0 6 3 4 1 2 -2 -1 4 -5 -3 3 1 0 3
*/

