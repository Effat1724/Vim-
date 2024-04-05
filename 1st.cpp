
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 cout <<"hello" <<endl;




 vector<int>v;
 v.push_back(3);
 v.push_back(12);
 v.push_back(5);
 v.push_back(2);
 v.push_back(9);

 for(int i=0;i<v.size();i++)
 	cout<<v[i]<<" ";
 cout<<endl;
 cout<<"After sorting "<<endl;
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++)
 	cout<<v[i]<<" ";
 cout<<endl;
 cout<<"After reversing "<<endl;
 sort(v.rbegin(),v.rend());
 for(int i=0;i<v.size();i++)
 	cout<<v[i]<<" ";

 return 0;
}