#include<bits/stdc++.h>
using namespace std;
int FindMinMax(int arr[], int n,int *max, int *min)
{
    int i;

    if(n==1)
    {
    *min=arr[0];
    *max= arr[0];
    return 1;
    }
    if(arr[0]>arr[1])
    {
     *min=arr[1];
     *max=arr[0];
    }
    else
    {
    *min=arr[0];
    *max=arr[1];
    }
    for(i=2; i<n; i++)
    {
     if (arr[i]>*max)
     {
        *max=arr[i];
     }
     else if(arr[i]<*min)
     {
        *min= arr[i];
     }
    }
}

int main()
{
int n, max, min; 
cin>>n;
int arr[n];
for(int i=0; i<n; i++)
{
  cin>> arr[i];
}

FindMinMax(arr,n,&max,&min);
cout<<"the maximum number is : "<<max<<endl;
cout<<"The minimus number is : "<<min<<endl;
return 0;
}
