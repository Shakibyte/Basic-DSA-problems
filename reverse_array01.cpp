#include<bits/stdc++.h>
using namespace std;

int reverse_array(int arr[], int n)
{
    for(int i=0, j=n-1; j>i; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
reverse_array(arr,n);

for(int i=0; i<n; i++)
{
    cout<<arr[i];
}



return 0;
}