#include<bits/stdc++.h>
using namespace std;

map<string,int>Mp;
string arr[100];

int main()
{
    int n=3,cnt=0,ck=0;
    string s1,s2;
    for(int i=0;i<n;i++)
    {
        cin>>s1>>s2;

        if(Mp.find(s1)==Mp.end())
        {
            //cout<<s1<<endl;
            Mp[s1]=cnt++;
            //cout<<"Mapping "<<s1<<" with "<<cnt<<endl;
        }

        if(Mp.find(s2)==Mp.end())
        {
            //cout<<s2<<endl;
            Mp[s2]=cnt++;
           // cout<<"Mapping "<<s2<<" with "<<cnt<<endl;
        }
        int a=Mp[s1];
        int b=Mp[s2];
        //cout<<"Edge "<<a<<" "<<b<<endl;
        arr[a]=s1;
        arr[b]=s2;
    }
    for(int i=0;i<Mp.size();i++)
    {
        cout<<i<<" represents "<<arr[i]<<endl;
    }
    return 0;
}

/*
BAN AUS
AUS SRI
SRI BAN
*/
