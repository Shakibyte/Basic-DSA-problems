#include<bits/stdc++.h>
using namespace std;

int arr_union(int arr1[], int arr2[], int m, int n,int arr_uni[],int o,int *p)
{
 for (int i=0; i<m; i++)
 {
    arr_uni[i]= arr1[i];
 }
 for(int j=0; j<n; j++)
 {
    arr_uni[m+j]=arr2[j];
 }
sort(arr_uni, arr_uni+o);

for(int i=0; i<o; i++)
{
    for(int j=i+1; j<o; j++)
    {
        if(arr_uni[i]==arr_uni[j])
        {
            for(int k=j; k<o; k++)
            {
                arr_uni[k]=arr_uni[k+1];
            }
            o--;
            j--;
        }
    }
}
*p=o;
}


int main()
{
int m, n,p;
cin>>m>>n;
cout<<"Insert the elements of 1st array :"<<endl;
int arr1[m];
for(int i=0; i<m; i++)
{
    cin>>arr1[i];
}
cout<<"Insert the elements of 2nd array :"<<endl;
int arr2[n];
for(int i=0; i<n; i++)
{
    cin>>arr2[i];
}
int o=m+n;
int arr_uni[o];
arr_union(arr1, arr2,m,n,arr_uni,o,&p);

cout<<"The union of two arrays :"<<endl;
for(int i=0; i<p; i++)
{
    cout<<arr_uni[i]<<" ";
}
return 0;
}
