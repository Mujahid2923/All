#include<bits/stdc++.h>
///#include <ext/pb_ds/assoc_container.hpp>
///#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
///using namespace __gnu_pbds;
///template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;

#define           CIN                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll                 long long int
#define           ull                unsigned long long int
#define           pii                pair < ll, ll>
#define           pll                pair < ll, pii>
#define           fs                 first
#define           scnd               second
#define           mx4                1000005
#define           MOD               1000000007
#define           mod2               1000000009
#define           pb                 push_back
#define           min3(a,b,c)        min(a,min(b,c))
#define           min4(a,b,c,d)      min(d,min(a,min(b,c)))
#define           max3(a,b,c)        max(a,max(b,c))
#define           max4(a,b,c,d)      max(d,max(a,max(b,c)))
#define           ms(a,b)            memset(a,b,sizeof(a))
#define           mpp                make_pair
#define           gcd(a, b)          __gcd(a,b)
#define           lcm(a, b)          ((a)*(b)/gcd(a,b))
#define           input              freopen("input.txt","rt", stdin)
#define           output             freopen("output.txt","wt", stdout)
#define           PI                 2*acos(0.0)
#define           zero(a)            memset(a,0,sizeof a)
#define           all(v)             v.begin(),v.end()
#define           rall(v)            v.rbegin(),v.rend()
#define           upper(s)           transform(s.begin(),s.end(),s.begin(), ::toupper)
#define           lower(s)           transform(s.begin(),s.end(),s.begin(), ::tolower)
#define           Unique(X)          (X).erase(unique(all(X)),(X).end())
#define           no                  cout << "NO" << endl ;
#define           yes                 cout << "YES" << endl;
#define           MX                  200005

///***********************************************************************************************************************
///inline string tstring(ll a) {stringstream ss; ss << a; string str = ss.str(); return str; }
///inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
///inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
///inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
///inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
///inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
///inline ll modInverse(ll a) { return modPow(a, MOD-2); }
///inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
///inline ll mod(ll a, ll m){ if(a<0) return m-(abs(a)%m); else if(a<m) return a; else return (a%m); }
///***********************************************************************************************************************

///Compute_phi_co_prime
/*void computeTotient(int n){ll phi[n+5];for (int i=1; i<=n; i++)phi[i] = i;for (int p=2; p<=n; p++)
{if (phi[p] == p){phi[p] = p-1;for (int i = 2*p; i<=n; i += p){phi[i] = (phi[i]/p) * (p-1);}}}}*/
///seieve
/*bool mark[10000005];vector<ll>prime;void sieve(ll x){ll i,j;mark[1] = 1;for(ll i =4; i<=x; i=i+2) mark[i]=1;
for(i=3; i*i<=x; i+=2){if(!mark[i]){for(j=i*i; j<=x; j+=2*i) mark[j]=1;}}
prime.pb(2);for(i=3; i<=x; i+=2){if(mark[i]==0) prime.pb(i);}}*/
///PrimeFactorization
/*void primeFact(ll n){for( int i = 0 ; prime[i]*prime[i] <= n ; i++ ){
if( n % v[i] == 0 ){ll cnt = 0 ;while( n % v[i] == 0 ){n = n / v[i] ;cnt++;}
vec.pb(pii(v[i],cnt));}}if( n > 1 ){vec.pb(pii(n,cnt)) ;}}*/
///power
/*ll pow( ll base , ll val ){ll res = 1 ;for(int i = 1 ; i <= val ; i++ ){res *= base ;}return res ;}*/
///Fibonacci
/*ll fib[ 100005 ] ;fib[ 1 ] = 1 ;fib[ 2 ] = 2 ;
for( int i = 3 ; i <= 100000 ; i ++ ){ fib[ i ] = ( fib[ i - 1 ] + fib[ i - 2 ] ) % MOD ;}*/
///leap_year
/*inline bool isLeapYear(ll year) { return (year%400==0) || (year%4==0 && year%100!=0); }*/

///priority_queue<int,vector<int>,greater<int> >pq;
///string s1 = "abcdefghijklmnopqrstuvwxyz";
///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;

///---------------Order set-------------------
///*os.find_by_order(index) os.order_of_key(value)

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vector<ll>v1,v2,v3,v4;
map<ll,ll>mp2,mp;
ll a;

void fun1( ll pos, ll sum,ll cnt )
{
    v3.pb(sum) ;

    mp[sum]=max(mp[sum],cnt) ;
    if(pos>=a)
        return ;


    ll ret1 = 0, ret2 = 0;

    fun1( pos+1, sum+v1[pos],cnt+1 ) ;

    fun1( pos+1, sum,cnt ) ;

}

void fun2( ll pos, ll sum,ll cnt )
{

    v4.pb(sum) ;

    mp2[sum]=max(mp2[sum],cnt) ;

    if(pos>=a)
        return ;


    ll ret1 = 0, ret2 = 0;

    fun2( pos+1, sum+v2[pos],cnt+1) ;

    fun2( pos+1, sum,cnt) ;

}


int main()
{
    ll  b,c,d,e,f,i,j,k,cnt1=0,cnt2=0,sum1=0,sum2=0,chk1=0,chk2=0,T;

    scanf("%lld",&a);

    for( i = 0 ; i < a ; i++ )
    {
        scanf("%lld",&b);
        v1.pb(b);
    }
    for( i = 0 ; i < a ; i++ )
    {
        scanf("%lld",&b);
        v2.pb(b);
    }

    fun1(0,0,0);
    fun2(0,0,0);

    sort(all(v3));
    sort(all(v4));

    Unique(v3);
    Unique(v4);
    ll height = 0 ;
    ll n = v3.size();
    for( i = n-1 ; i >= 0 ; i--)
    {
        ll p = lower_bound(all(v4),v3[i])-v4.begin();
        if(v4[p]==v3[i])
        {
            height = v4[p] ;
            break;
        }
    }
    k = (a+a)-(mp[height]+mp2[height]);
    printf("%lld\n",k);
    return 0 ;
}
