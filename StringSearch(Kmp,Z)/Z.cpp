#include<bits/stdc++.h>
using namespace std;


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
