#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node
{
    string firstName,lastName;
    node(string a,string b)
    {
        firstName=a;
        lastName=b;
    }

    bool operator <(const node &r) const
    {
        if(firstName == r.firstName)
        {
            return lastName<r.lastName;
        }
        else
        {
            return firstName<r.firstName;
        }
    }

    /*bool operator <(const distanc &r) const
    {
        if(firstName != r.firstName)
        {
            return firstName>r.firstName;
        }
        else
        {
            return lastName>r.lastName;
        }
    }*/
};

int main()
{
    vector<node>v;
    string a,b;
    for(int i=0; i<6; i++)
    {
        cin>>a>>b;
        v.push_back(node(a,b));
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(const node &Node : v)
    {
        cout<<Node.firstName<<" "<<Node.lastName<<endl;
    }

    return 0;
}

/*
Barack Obama
Abraham obama
George Washington
George Bush
John Tyler
John Kennedy
*/

///Here p.id && p.val == Present id and value
///Here id && val == Previous id and value

///Sort in ascending order
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
///Sort in descending order
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
            return id>p.id;
        }
        else
        {
            return val>p.val;
        }
    }
};
