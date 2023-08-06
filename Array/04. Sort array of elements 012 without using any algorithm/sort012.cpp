#include<bits/stdc++.h>
using namespace std;

int sort012(int *arr, int n)
{
int i=0;
int z=0;
int t=n-1;

for(int i=0; i<n && i<=t;)
{
    if(arr[i]==0)
    {
        swap(arr[i],arr[z]);
        z++;
        i++;
    }
    else if(arr[i]==2)
    {
       swap(arr[i],arr[t]);
       t--;
    }
    else
    {
       i++;
    }
}
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
sort012(arr,n);

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<endl;
}

return 0;
}
