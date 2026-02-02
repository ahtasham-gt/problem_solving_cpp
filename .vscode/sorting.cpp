#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void selection(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }
}

void bubble(int arr[],int n){
    int isswap=0;
    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-2; j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                isswap=1;
            }
        }
        if(isswap==0) break;
    }

}

void insertion(int arr[],int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<=i; j++){
            if(arr[i]<arr[j]) swap(arr[i], arr[j]);
        }
    }

}

int main(){
    int arr[]={12,4,6,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion(arr,n);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;

}