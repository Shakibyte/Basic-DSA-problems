#include<bits/stdc++.h>
using namespace std;
int large_subarray_sum(int arr[], int n)
{
int current_sum = 0;
int maxsum =INT_MIN;

for(int i=0; i<n; i++)
{
 current_sum = current_sum+ arr[i];
  if (current_sum > maxsum)
  {
    maxsum = current_sum;
  }
  if(current_sum<0)
  {
    current_sum= 0;
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
cout<<large_subarray_sum(arr,n)<<endl;


return 0;
}
