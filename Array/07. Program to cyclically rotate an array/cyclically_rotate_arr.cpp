#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,c;
cout<<"Enter the number of elements of the array :"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the  elements of the array :"<<endl;
for(int i=0; i<n; i++)
{
  cin>>arr[i];
}
cout<<"Enter the number of cycle for rotating :"<<endl;
cin>>c;
for(int k=1; k<=c; k++)
{
int last = arr[n-1];
for(int i= n-1; i>=0; i--)
{
  arr[i]= arr[i-1];
}
arr[0]=last;
}
cout<<"Final result after "<<c<<" times rotating "<<endl;
for(int i=0; i<n; i++)
{
  cout<<arr[i]<<" ";
}
return 0;
}
