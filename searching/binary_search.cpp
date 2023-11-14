#include<iostream>
using namespace std;

void binarysearch(int size,int num,int arr[]){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(num==mid){
            cout<<"Found at index"<<mid;
        }

        else if(num>mid){
            s=mid+1;
            }
        else{
            e=mid-1;
        }

    }
    mid=s+(e-s)/2;
}


int main() {
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int num;
    cout<<"enter the number to search";
    cin>>num;
    binarysearch(size,num,arr);
    return 0;
}