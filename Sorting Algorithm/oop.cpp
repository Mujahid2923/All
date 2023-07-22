#include<bits/stdc++.h>
using namespace std ;

class Person
{
    int x, y ;

public:
    Person()
    {
        x = 0 ;
        y = 0 ;
    }

    Person( int a, int b )
    {
        x = a ;
        y = b ;
    }

    Person operator +(Person p)
    {
        Person temp ;
        temp.x = x + p.x ;
        temp.y = y + p.y ;
        return temp;
    }

    Person operator -(Person p)
    {
        Person temp ;
        temp.x = x - p.x ;
        temp.y = y - p.y ;
        return temp;
    }

    Person operator ++() // pre increment
    {
        ++ x ;
    }

    Person operator ++(int) // post increment
    {
        x ++ ;
    }

    void display()
    {
        cout << x << " " << y << endl ;
    }
};

int main()
{
    Person p1(10, 15) ;
    p1.display() ;

    ++ p1 ;
    p1.display() ;

    p1 ++ ;
    p1.display() ;

    Person p2(20, 25) ;
    p2.display() ;

    Person ps = p1 + p2 ; // Same like p1.add(p2)
    ps.display() ;

    Person pm = p1 - p2 ; // Same like p1.add(p2)
    pm.display() ;

    return 0 ;
}
