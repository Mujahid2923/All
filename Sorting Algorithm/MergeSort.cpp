#include<bits/stdc++.h>
using namespace std ;

vector< int > v ;
int n, x ;

void Merge( int low, int mid, int high )
{
    int n1 = mid - low + 1 ;
    int n2 = high - mid ;
    int L[ n1 ], R[ n2 ] ;

    int idx1 = 0, idx2 = 0, i = 0, j = 0, k = low ;
    for( int i = low ; i <= mid ; i ++ ) L[ idx1 ++ ] = v[ i ] ;
    for( int i = mid + 1 ; i <= high ; i ++ ) R[ idx2 ++ ] = v[ i ] ;

    while( i < n1 && j < n2 )
    {
        if( L[ i ] <= R[ j ] ) v[ k ++ ] = L[ i ++ ] ;
        else v[ k ++ ] = R[ j ++ ] ;
    }
    while( i < n1 ) v[ k ++ ] = L[ i ++ ] ;
    while( j < n2 ) v[ k ++ ] = R[ j ++ ] ;
}

void mergeSort( int low, int high )
{
    if( low >= high ) return ;
    int mid = low + ( high - low ) / 2 ;
    mergeSort( low, mid ) ;
    mergeSort( mid + 1, high ) ;
    Merge( low, mid, high ) ;
}

int main()
{
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> x ;
        v.push_back( x ) ;
    }
    mergeSort( 0, n - 1 ) ;

    for( int i = 0 ; i < n ; i ++ )
    {
        cout << v[ i ] << " " ;
    }
    cout << endl ;
    return 0 ;
}

/*
8
7 2 1 6 8 5 3 4
*/
