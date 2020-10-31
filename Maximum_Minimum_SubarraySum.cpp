vector< int > v ;
int ans1 = INT_MIN, ans2 = INT_MAX , sum1 = 0, sum2 = 0 ;
for( auto x : v )
{      
    sum1 = max( sum1 + x, x ) ;
    ans1 = max( ans1, sum1 ) ;
            
    sum2 = min( sum2 + x, x ) ;
    ans2 = min( ans2, sum2 ) ;
}

ans1 = Maximum
ans2 = Minimum 
