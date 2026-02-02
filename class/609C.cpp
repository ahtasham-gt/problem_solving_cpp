//https://codeforces.com/problemset/problem/609/C - Load Balancing ###opotimize the code
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    vector<int> load(n);
    for(int i=0; i<n; i++){
        cin>>load[i];
        s+=load[i];
    }
    int min_move=0;

    //logic 
    int avg=(s/n);
    for(int i=0; i<n; i++){
        if(load[i]>avg){
            min_move+=load[i]-avg;
        }
    }

    int rem=s%n;
    cout<<min_move-rem<<endl;
    return 0;
}