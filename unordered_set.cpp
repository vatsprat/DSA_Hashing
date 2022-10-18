//  set->key are stored in ordered fashion
//  unordered_set->keys are stored in unordered fashion
//  set is implemented as RED BLACK Tree
//  unordered_set is internally implemented using Hashing
//  Set operation time complexity O(logn)
//  Unordered set operation time complexity O(1)
// Unordered set doesnt have duplicate keys
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
for(auto it=s.begin();it!=s.end();it++)
cout<<(*it)<<endl;

cout<<"number of elements"<<s.size()<<endl;

// s.clear();
// cout<<"number of elements"<<s.size()<<endl;

   int key=25;
   if(s.find(key)==s.end())
   {
   cout<<"key not found"<<endl;
   }
   else{
    cout<<"key found"<<endl;
   }
  auto it =s.find(key);
  s.erase(it);   

  //count is substitute of find function
  //find() returns the iterator to that element
  //count() return the "1" if it is present or '0' if not
  if(s.count(5))
  cout<<"Key found"<<endl;
  else
  cout<<"not found"<<endl;
}





