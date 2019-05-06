                                           ///Single value in order set
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

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           ull              unsigned long long int
#define           pii              pair < int, int>
#define           pll              pair < ll, ll>
#define           MOD              1000000007
#define           vi               vector<int>
#define           vl               vector<ll>
#define           pb               push_back
#define           sc               scanf
#define           pf               printf
#define         scin(x)            scanf("%d",&(x))
#define        scin2(x,y)          scanf("%d %d",&(x),&(y))
#define         scln(x)            scanf("%lld",&(x))
#define        scln2(x,y)          scanf("%lld %lld",&(x),&(y))
#define       min3(a,b,c)          min(a,min(b,c))
#define       min4(a,b,c,d)        min(d,min(a,min(b,c)))
#define       max3(a,b,c)          max(a,max(b,c))
#define       max4(a,b,c,d)        max(d,max(a,max(b,c)))
#define         ms(a,b)            memset(a,b,sizeof(a))
#define           mp               make_pair
#define       gcd(a, b)            __gcd(a,b)
#define       lcm(a, b)            ((a)*(b)/gcd(a,b))
#define         input              freopen("input.txt","rt", stdin)
#define         output             freopen("output.txt","wt", stdout)
#define           PI               3.141592653589793238462643
#define     rep( i , a , b )       for( i=a ; i<b ; i++)
#define     rev( i , a , b )       for( i=a ; i>=b ; i--)
#define     repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define       CASEL(t)             printf("Case %d:\n",t)
#define     RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define        zero(a)             memset(a,0,sizeof a)
///priority_queue<int,vector<int>,greater<int> >pq;
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------


int main()
{
    CIN;
    orderset<int>os;
    orderset<int>::iterator it;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        os.insert(a);
    }


    it=os.find_by_order(3);///3 number index e ki ache
    int val1=*it;
    cout<<val1<<endl;
    int val2=os.order_of_key(5);///5 koto index e ache
    cout<<val2<<endl;
    return 0;
}
/*
5
1 2 5 13 17

Output:
13
2
*/


                                            ///Multiple value in order set
/**OOO**/
#include<bits/stdc++.h>
typedef long long int ll;
typedef unsigned long long ull;
using namespace std;


#define mems(arr,VAL)           memset(arr,VAL,sizeof(arr))
#define pii                     pair<int,int>
#define mk                      make_pair
#define pb                      push_back
#define ff                      first
#define ss                      second
#define PI                      acos(-1.0)

#define pf                      printf
#define sc                      scanf
//#define Mod                     1000000007
#define hiii                    1e9//1000000000
#define looo                   -1e9//-1000000000



// Ordered set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset =
tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;


//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(1)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4
//cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl; // 0 //cout<<X.order_of_key(1)<<endl; // 0
//cout<<X.order_of_key(3)<<endl; // 2 //cout<<X.order_of_key(4)<<endl; // 2
//cout<<X.order_of_key(400)<<endl; // 5




int n,q,p,v,m,type,x;

struct info
{
        int val,id;
        info(int a,int b)
        {
                val = a;
                id = b;
        }

        bool operator<(const info& p)const
        {

                if(val==p.val)
                {
                        return id<p.id;
                }
                else
                {
                        return val<p.val;
                }
        }
};

int a[200005], b[200005];

orderset<info>os;


map<int,int>mmap;

void input()
{
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++)
        {

                cin>>b[i];
                mmap[b[i]]++;
                os.insert(info(b[i],mmap[b[i]]));
        }
}

int element,Id;
vector<ll>vec;

void solve()
{
        for(int i=1;i<=n;i++)
        {

                int t = n - a[i];
                int pos = os.order_of_key(info(t,mmap[t]));

                if(pos == os.size())pos = 0;

                element = (*os.find_by_order(pos)).val;
                vec.pb((element + a[i])%n );

                Id = (*os.find_by_order(pos)).id;
                os.erase(info(element,Id));
                mmap[element]--;
        }
}


int main()
{

        input();
        solve();
        for(int i=0;i<vec.size();i++)
                cout<<vec[i]<<' ';
        cout<<endl;


//cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " seconds." << endl;
return 0;
}