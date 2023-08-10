#include<bits/stdc++.h>
using namespace std;
vector<int> intersection_arr(list<int>li1, list<int>li2)
{
  li1.unique();
  li2.unique();
  
  int arr1[li1.size()], arr2[li2.size()];
  int m=0, n=0;
  for( auto it1 : li1)
  {
    arr1[m++]= it1;
  }
  for( auto it2 : li2)
  {
    arr2[n++]= it2;
  }
vector<int>vec;
for(int i=0; i<li1.size(); i++)
{
    for(int j=0; j<li2.size(); j++)
    {
        if(arr1[i]==arr2[j])
        {
            vec.push_back(arr1[i]);
        }
    }
}

return vec;
}


int main()
{
int n1,n2;
cout<<"Enter the number of elements of two arrays :"<<endl;
cin>>n1>>n2;
list<int>li1;
list<int>li2;
cout<<"Enter the elements of 1st array :"<<endl;
for(int i=0; i<n1; i++)
{   int element;
    cin>>element;
    li1.push_back(element);
}
cout<<"Enter the elements of 2nd array :"<<endl;
for(int i=0; i<n2; i++)
{   int element;
    cin>>element;
    li2.push_back(element);
}
vector<int> inter=intersection_arr(li1,li2);
cout<<"Intersection of two arrays :"<<endl;
for(auto it:inter)
{
    cout<<it<<" ";
}

return 0;
}
