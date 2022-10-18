// You have Given An Array contains both positive and non-positive numbers,
// element are in the range from -MAX to +MAX
// Our task is to search if some number is present in the array or not in 0(1) time.
#include<iostream>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2];

bool search(int x)
{
    if(x>=0)
    {
        if(hashTable[x][0]==1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }else
    {
        x=abs(x);
        if(hashTable[x][1]==1)
        {
            return true;
        }else
        {
            return false;
        }
    }
}



void insert(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
              hashTable[abs(a[i])][1] =1;
        }
    }
}


int main()
{
    int arr[]={-1,9,2,-5,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    insert(arr,n);
    int find=-3;
    if(search(find))
    {
        cout<<"Element is present";
    }
    else{
        cout<<"Element not found";
    }
}