#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}

//selection sort tc-> O(n^2)
void selection(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<arr[i])
                swap(arr[i],arr[j]);
        }
    }
}


//bubble sort tc-> O(n^2)  best-> O(n)
void op_bubble(int arr[],int n){
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


//insertion sort  tc-> O(n^2)  best-> O(n)
void insertion(int arr[],int n){
    for(int i=1; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }

}

//recursive bubble sort
void r_bubble(int arr[], int n){
    if(n==1) return;
    int didswap=0;
    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]);
            didswap=1;
        }
    }
    if(didswap==0) return;
    r_bubble(arr,n-1);
}

//recursive insertion sort
void r_insertion(int arr[], int n, int i){
    if(i==n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    
    r_insertion(arr,n,i+1);
}

//merge sort tc->O(nlogn) sc-> O(n)(bcoz temp vector is used)
void merge(vector<int> &arr, int l, int m, int h){
    vector<int> temp;
    int r=m+1;
    int low=l;
    while (l<=m && r<=h){
        if(arr[l]<arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=m){
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=h){
        temp.push_back(arr[r]);
        r++;
    }
    for(int i=low; i<=h; i++){
        arr[i]=temp[i-low];
    }
}
void ms(vector<int> &arr, int l, int h){
    if(l>=h) return;
    int m=(l+h)/2;
    ms(arr,l,m);
    ms(arr,m+1,h);
    merge(arr,l,m,h);
}

int main(){
    int arr[]={12,4,8,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // r_bubble(arr,n);
    r_insertion(arr,n,0);
    for(int i: arr){
        cout<<i<<" ";
    }

    //merge and quick sort
    // vector<int> v={12,4,8,6,1};
    // ms(v,0,v.size()-1);
    // for(auto i:v){
    //     cout<<i<<" ";
    // }

    return 0;

}