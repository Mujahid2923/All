#include<bits/stdc++.h>
using namespace std;

map<int,int>Mp;
int bit[100];

int main()
{
    int n=11,cnt=0,ck=0;
    int arr[]={-102,1,134565589,134565589,-102,66666668,134565589,66666668,-102,1,-2};
   // sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int x=arr[i];
        if(Mp.find(x)==Mp.end())
        {
            Mp[x]=cnt;
            printf("Mapping %d with %d\n",x,cnt);
            cnt++;
        }
        x=Mp[x];
        bit[ck++]=x;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",bit[i]);
    }
    return 0;
}
