#include<bits/stdc++.h>
using namespace std;

list<int>unionarr(list<int>li1, list<int>li2)
{
li1.merge(li2);
li1.unique();
return li1;
}

int main()
{
list<int>li1;
list<int>li2;
int n1, n2;
cout<<"Enter the number of elemnts of arrays"<<endl;
cin>>n1>>n2;
cout<<"Enter the  elemnts of  1st array"<<endl;
for(int i=0; i<n1; i++)
{
int element;
cin>>element;
li1.push_back(element);
}
cout<<"Enter the  elemnts of  2nd array"<<endl;
for(int i=0; i<n2; i++)
{
int element;
cin>>element;
li2.push_back(element);
}

list<int> uni = unionarr(li1,li2);

cout<<"Union of two arrays"<<endl;
for(auto it: uni)
{
    cout<<it<<"  ";
}

return 0;
}
