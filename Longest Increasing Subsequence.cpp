/* Longest Increasing Subsequence 
   Problem link : https://leetcode.com/problems/longest-increasing-subsequence/submissions/ 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,t;
    cin>>n;//length of the array 
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    int lis[n];//taking an array with a counter of each array value 
    for(i=0;i<n;i++)
    lis[i]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j] && lis[i]<=lis[j]) //we put the second condition since we have to find the longest common subsequence 
            lis[i]++;
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(lis[i]>max)
        max=lis[i];
    }
    cout<<max<<endl;
}
