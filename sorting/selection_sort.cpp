#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min=j;
        }

        if(min!=i)
            swap(arr[min],arr[i]);
    }
}
int main() {
    int arr[]={5,1,2,8,10,0,1,1};
    int n=sizeof(arr)/sizeof(int);
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}