#include<bits/stdc++.h>
using namespace std ;
#define ll long long int

string text, pattern ;
ll p = 31 ;
ll mod = 1e9 + 9 ;

int main()
{
    cin >> text >> pattern ;
    ll n = text.size(), m = pattern.size() ;
    vector< ll > p_pow( max( n, m ) ) ;

    p_pow[ 0 ] = 1 ;
    for( int i = 1 ; i < (int)p_pow.size() ; i ++ )
    {
        p_pow[ i ] = ( p_pow[ i - 1 ] * p ) % mod ;
    }

    vector< ll > Hash( n + 1, 0 ) ;

    for( int i = 0 ; i < n ; i ++ )
    {
        Hash[ i + 1 ] = ( Hash[ i ] + ( text[ i ] - 'a' + 1 ) * p_pow[ i ] ) % mod ;
    }

    ll pattern_hash = 0 ;
    for( int i = 0 ; i < m ; i ++ )
    {
        pattern_hash = ( pattern_hash + ( pattern[ i ] - 'a' + 1 ) * p_pow[ i ] ) % mod ;
    }

    vector< ll > v ;

    for( int i = 0 ; i <= n - m ; i ++ )
    {
        ll text_hash = ( Hash[ i + m ] - Hash[ i ] + mod ) % mod ;
        if( text_hash == ( pattern_hash * p_pow[ i ] ) % mod ) v.push_back( i ) ;
    }

    for( int i = 0 ; i < v.size() ; i ++ )
    {
        cout << v[ i ] << " " ;
    }

    return 0 ;
}
