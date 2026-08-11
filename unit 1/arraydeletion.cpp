#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i,pos;
    cout<<"Enter the no of array elements:";
    cin>>n;
    cout<<"Enter array elements :"<< " " <<endl;
    for(i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Enter the position to delete :";
    cin>>pos;
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"\n Array after deletion is :";
    for(i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}