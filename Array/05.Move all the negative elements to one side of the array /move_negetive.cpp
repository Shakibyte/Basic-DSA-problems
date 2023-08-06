#include<bits/stdc++.h>
using namespace std;

void moveneg(int arr[], int n)
{
 int j=0;
 for(int i=0; i<n;)
 { 
     if ( arr[i]<0)
     {
        int temp= arr[i];
        arr[i] = arr[j];
        arr[j]= temp;
        j++;
        i++;
     }
     else if( arr[i]>0)
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
moveneg(arr,n);

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
