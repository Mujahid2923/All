***********-----------------------------Search the element For circularly sorted array-------------------------------*******************

vector < ll > v ;
ll n, x ;

void Input()
{
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> x ;
        v.pb( x ) ;
    }
}

int Fun( int low, int high, int val )
{
    while( low <= high )
    {
        int mid = ( low + high ) >> 1 ;
        if( v[ mid ] == val ) return mid ;

        if( v[ mid ] <= v[ high ] )
        {
            if( val >= v[ mid ] && val <= v[ high ] ) low = mid + 1 ;
            else high = mid - 1 ;
        }
        else if( v[ low ] <= v[ mid ] )
        {
            if( val >= v[ low ] && val <= v[ mid ] ) high = mid - 1 ;
            else low = mid + 1 ;
        }
    }
}

void Calculation()
{
    for( int i = 0 ; i < n ; i ++ )
    {
        cout << Fun( 0, n - 1, v[ i ] ) + 1 << endl ;
    }
}


/*
8
11 12 15 18 2 5 6 8
*/


************************-------------------------------Lower and Upper ---------------------------------****************************
vector < ll > v ;
ll n, x ;

void Input()
{
    cin >> n ;
    for( int i = 0 ; i < n ; i ++ )
    {
        cin >> x ;
        v.pb( x ) ;
    }
}

int Fun( int val , int ck )
{
    int low = 0 , high = n - 1, result = -1 ;
    while( low <= high )
    {
        int mid = ( low + high ) >> 1 ;
        if( v[ mid ] == val )
        {
            result = mid ;
            if( !ck ) high = mid - 1 ;
            else low = mid + 1 ;
        }
        else if( v[ mid ] > val ) high = mid - 1 ;
        else if( v[ mid ] < val ) low = mid + 1 ;
    }
    return result ;
}

void Calculation()
{
    cout << Fun( 2, 0 ) + 1 << " " << Fun( 2, 1 ) + 1 << endl ;
    cout << Fun( 6, 0 ) + 1 << " " << Fun( 6, 1 ) + 1 << endl ;

}

/*

10
1 2 2 2 5 6 6 6 6 8

*/

