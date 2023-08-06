#include<bits/stdc++.h>
using namespace std;
//define two values in structure
//two values from findmaxmin()
struct maxi // maxi is the structure variable
{
    int max; // max and min are datamembers
    int min;
};

maxi findmaxmin(int arr[], int n) // function calling by struct variable
{
struct maxi maxmin; // maxmin is struct type variable which will return the values
int i;

    if(n==1)
    {
   maxmin.min=arr[0];
    maxmin.max= arr[0];
    return maxmin;
    }
    if(arr[0]>arr[1])
    {
    maxmin.min=arr[1];
     maxmin.max=arr[0];
    }
    else
    {
   maxmin.min=arr[0];
    maxmin.max=arr[1];
    }
    for(i=2; i<n; i++)
    {
     if (arr[i]>maxmin.max)
     {
        maxmin.max=arr[i];
     }
     else if(arr[i]<maxmin.min)
     {
       maxmin.min= arr[i];
     }
    } 
 return maxmin;  
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

struct maxi oneshot=findmaxmin(arr,n);
cout<<"The maximum Number : "<<oneshot.max<<endl;
cout<<"The minimum Number : "<<oneshot.min<<endl;
return 0;
}
