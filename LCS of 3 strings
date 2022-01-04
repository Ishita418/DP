/* Longest Common Subsequence of 3 strings
   Problem Link : https://www.codingninjas.com/codestudio/problems/lcs-of-3-strings_842499
 */
#include<bits/stdc++.h>
using namespace std;
int dp[205][205][205];
int LCS(string &s1,string &s2,string &s3,int n,int m,int p)
{
    if(n==0 || m==0 || p==0)
    return 0;
    else if(dp[n-1][m-1][p-1]!=-1)
    return dp[n-1][m-1][p-1];
    if(s1[n-1]==s2[m-1] && s2[m-1]==s3[p-1])
    return dp[n-1][m-1][p-1]=1+LCS(s1,s2,s3,n-1,m-1,p-1);
    int l=LCS(s1,s2,s3,n-1,m,p);
    int c=LCS(s1,s2,s3,n,m-1,p);
    int s=LCS(s1,s2,s3,n,m,p-1);
    return dp[n-1][m-1][p-1]=max({l,c,s});
}
int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int i,j,k;
    for(i=0;i<205;i++)
    {
      for(j=0;j<205;j++)  
      {
          for(k=0;k<205;k++)
          dp[i][j][k]=-1;
      }
    }
    cout<<LCS(s1,s2,s3,s1.length(),s2.length(),s3.length());
}
