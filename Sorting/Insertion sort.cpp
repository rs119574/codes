#include<bits/stdc++.h>
using namespace std;

//pogram for insertion sort

void fun(int *arr, int n){
    
        for(int i=1;i<n;i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>0){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
        
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    fun(arr,n);
    cout<<"Sorted arrry (by using Insertion Sort) is:\n";
    for(int i=0;i<n;i++)cout<<arr[i]<<' ';
    
    
    return 0;
}
