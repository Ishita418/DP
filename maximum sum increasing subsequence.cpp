/* Maximum Sum Increasing Subsequence 
   Problem Link: https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lis[n];
    for(i=0;i<n;i++)
    {
        lis[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<=(lis[j]+arr[i]))
            lis[i]=lis[j]+arr[i];
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<lis[i])
        max=lis[i];
    }
    cout<<max;
}
