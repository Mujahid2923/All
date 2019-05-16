#include<bits/stdc++.h>
using namespace std;

int binarySearchlower(int arr[],int n,int a)
{

    int low = 0;
    int high = n - 1;
    int index = -1;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == a)
        {
            index = mid;
            high = mid - 1;
        }
        else if (arr[mid] < a)
        {
            low = mid + 1;

        }
        else
        {
            high = mid - 1;
        }
    }

    mid = (low + high) / 2;
    if (arr[mid] == a)
    {
        index = mid;
    }
    else if (arr[mid] < a)
    {
        index = mid + 1;

    }
    else if (arr[mid] > a)
    {
        index = mid;
    }
    return index;
}


int binarySearchupper(int arr[],int n,int b)
{

    int low = 0;
    int high = n - 1;
    int index = -1;
    int mid;
    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == b)
        {
            index = mid + 1;
            low = mid + 1;
        }
        else if (arr[mid] < b)
        {
            low = mid + 1;

        }
        else
        {
            high = mid - 1;
        }
    }
    mid = (low + high) / 2;
    if (arr[mid] == b)
    {
        index = mid + 1;
    }
    else if (arr[mid] < b)
    {
        index = mid + 1;

    }
    else if (arr[mid] > b)
    {
        index = mid;
    }
    return index;
}


int main()
{
    int t, n, q, a, b;
    int cnt;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d",&n,&q);
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[j]);
        }

        printf("Case %d:\n",i);
        for (int j = 0; j < q; j++)
        {
            scanf("%d %d",&a,&b);
            int x = binarySearchlower(arr,n, a);
            int y = binarySearchupper(arr,n, b);
            printf("%d\n",y-x);
        }

    }
}

