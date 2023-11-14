#include<iostream>
using namespace std;
void linearsearch(int size,int n,int arr[]){
    for (int i=0;i<size;i++){
        if (arr[i]==n){
            cout<<"found at index"<<i;
        }
    }
}

int main() {
    int arr[]={1,2,3,4,5,6};
    int n;
    cout<<"Enter the number to be searched"<<endl;
    cin>>n;
    int size=sizeof(arr)/sizeof(int);
    linearsearch(size,n,arr);

    return 0;

}