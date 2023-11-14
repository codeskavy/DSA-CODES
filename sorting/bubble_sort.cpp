#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[]={3,4,1,2,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}