#include<bits/stdc++.h>
using namespace std;

int maximum_sum_subarray(int arr[], int n)
{
int maxsum=-999999999;
for(int i=0; i<n; i++)
{ 
 int sum =0;
 for(int j=i; j<n; j++)
 {
   sum= sum+ arr[j];
   maxsum = max(maxsum,sum);
 }
}
return maxsum;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
cout<<"Maximum sum of sub-array :\n"<< maximum_sum_subarray(arr,n);
return 0;
}
