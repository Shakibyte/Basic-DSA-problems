#include<bits/stdc++.h>
using namespace std;

int main()
{
list<int>li1;
list<int>li2;
int n1, n2;
cin>>n1>>n2;
for(int i=0; i<n1; i++)
{
int element;
cin>>element;
li1.push_back(element);
}
for(int i=0; i<n2; i++)
{
int element;
cin>>element;
li2.push_back(element);
}
li1.merge(li2);// merge two list
li1.unique(); // remove duplicates

for(auto it: li1)
{
    cout<<it<<"  ";
}

return 0;
}
