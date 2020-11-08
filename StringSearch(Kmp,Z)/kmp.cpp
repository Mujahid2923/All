#include<bits/stdc++.h>
using namespace std;

int arr[ 100005 ] ;

void creatingArray( string pattern )
{
    int j = 0, i = 1 ;
    while( i < pattern.size() )
    {
        if( pattern[ j ] == pattern[ i ] )
        {
            arr[ i ] = j + 1 ;
            i ++, j ++ ;
        }
        else
        {
            if( j != 0 ) j = arr[ j - 1 ] ;
            else arr[ i ] = 0, i ++ ;
        }
    }
}

bool check( string text, string pattern )
{
    creatingArray( pattern ) ;
    int i = 0, j = 0 ;
    while( i < text.size() && j < pattern.size() )
    {
        if( text[ i ] == pattern[ j ] )
        {
            i ++, j ++ ;
        }
        else
        {
            if( j != 0 ) j = arr[ j - 1 ] ;
            else i ++ ;
        }
        if( j == pattern.size() ) return true ;
    }

    return false ;
}

int main()
{
    string s1, s2 ;
    cin >> s1 >> s2 ;
    if( check( s1, s2 ) )
    {
        cout << "Found" << endl ;
    }
    else
    {
        cout << "Not Found" << endl ;
    }

    return 0 ;
}

/*
abcxabcdabcdabcy
abcdabcy
*/
