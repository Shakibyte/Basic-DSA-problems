#include<bits/stdc++.h>
using namespace std;

int FindKthmin(int arr[], int n,int kmin)
{
 for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(arr[i]>arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]= temp;
        }
    }
}
 int min = arr[kmin-1];
 return min;
}

int findkthmax(int arr[], int n,int kmax )
{
   for(int i=0; i<n; i++)
{
    for(int j=i+1; j<n; j++)
    {
        if(arr[i]<arr[j])
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j]= temp;
        }
    }
}

int max = arr[kmax -1];
return max;
}

int main()
{
cout<<"Enter the number of elements of array :"<<endl;
int n;
cin>>n;
cout<<"Enter the  elements of array :"<<endl;
int arr[n];
for(int i=0; i<n; i++)
{
   cin>>arr[i];
}
int kmax, kmin;
cout<<"Enter kth maximum and kth minimum number :"<<endl;
cin>>kmax>>kmin;

cout<<"The "<<kmax<<"th maximum number is :"<<findkthmax(arr,n,kmax)<<endl;
cout<<"The "<<kmin<<"th minimum number is :"<<FindKthmin(arr,n,kmin)<<endl;
return 0;
}
