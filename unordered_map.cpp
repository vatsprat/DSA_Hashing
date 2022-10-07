// key value pair
#include<bits/stdc++.h>
using namespace std;
int main()
{

//    unordered_map<string,int> umap;
//    umap["hello"]=44;
//    umap["world"]=56;
//    umap["helloworld"]=90;
   
//    for(auto x: umap)
//    {
//       cout<<x.first<<" "<<x.second<<endl;
//    }

//    for(auto itr=umap.begin();itr!=umap.end();itr++)
//    {
//     cout<<itr->first<<" "<<itr->second<<endl;
//    }

//    string key="hello";
//    if(umap.find(key) != umap.end())
//    {
//     cout<<"key found"<<endl;
//    }
//    else{
//     cout<<"key not found"<<endl;
//    }
//    if(umap.find(key) != umap.end())
//    {
//       auto temp = umap.find(key);
//       cout<<"key is :"<<temp->first<<endl;
//       cout<<"value is :"<<temp->second<<endl;
//    }
//    umap.insert(make_pair("mobile",17000));
//    cout<<umap.size()<<endl;

//    key="helloworld";
//    umap.erase(key);


   int arr[]={7,1,0,9,3,5,8,9,0,1,2,3};
   unordered_map<int,int> umaped;
   for(int i=0;i<12;i++)
   {
     umaped[arr[i]]++;
   }
   for(auto x:umaped)
   {
    cout<<x.first<<" "<<x.second<<endl;
   }







}