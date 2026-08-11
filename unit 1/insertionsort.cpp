#include<iostream>
using namespace std;
int main ()
{
    int n,arr[100];
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        int  j= i+1;
        while(j>=1 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }


    }
    cout<<" sorted array is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";
    }
    
    return 0;
}