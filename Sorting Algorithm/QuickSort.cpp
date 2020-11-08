#include<bits/stdc++.h>
using namespace std ;

vector< int > v ;
int n, x ;

int Partition( int low, int high )
{
    int pivot = v[ high ] ;
    int idx = low ;
    for( int i = low ; i < high ; i ++ )
    {
        if( v[ i ] <= pivot )
        {
            swap( v[ i ], v[ idx ] ) ;
            idx ++ ;
        }
    }
    swap( v[ idx ], v[ high ] ) ;
    return idx ;
}

void QuickSort( int low, int high )
{
    if( low >= high ) return ;
    int index = Partition( low, high ) ;
    QuickSort( low, index - 1 ) ;
    QuickSort( index + 1, high ) ;
}

int main()
{
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> x ;
        v.push_back( x ) ;
    }
    QuickSort( 0, n - 1 ) ;
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
// https://www.geeksforgeeks.org/quick-sort/
// https://www.youtube.com/watch?v=COk73cpQbFQ&list=PL2_aWCzGMAwKedT2KfDMB9YA5DgASZb3U&index=7&ab_channel=mycodeschool
