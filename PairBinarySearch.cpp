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
#define          CASEL(t)               printf("Case %d:\n",t)

ll n, m ;
pair< ll, ll > p[ 10000 + 5 ];

void parlor()
{
    ll a, b ;

    for( ll i = 0 ; i < (m + 1) / 2 ; i++ )
    {
        ll flag = 0;
        ll low = i + 1 ;
        ll hi = m - 1 ;
        ll item = n - p[i].first ;
        ll index , mid ;

        while( low <= hi )
        {
            mid = low + ( hi - low ) / 2 ;

            if( p[mid].first == item && mid != i )
            {
                index = mid ;
                flag = 1 ;
                break ;
            }
            else if( p[mid].first < item )
            {
                low = mid + 1 ;
            }
            else if( p[mid].first > item )
            {
                hi = mid - 1 ;
            }

        }

        if( flag == 1 )
        {
            a = p[i].second ;
            b = p[index].second ;
            break ;
        }
    }

    int x = min( a , b ) ;
    int y = max( a , b ) ;
    cout << x+1 << " " << y+1 << endl ;

}

int main()
{
    ll t;
    cin >> t ;

    while(t--)
    {
        cin >> n >> m ;

        for( ll i = 0 ; i < m ; i++ )
        {
            cin >> p[i].first ;
            p[i].second = i;
        }

        sort( p, p + m ) ;

        parlor( ) ;

    }
}
///problem link :https://www.hackerrank.com/contests/monthly/challenges/icecream-parlor/copy-from/1314286096
