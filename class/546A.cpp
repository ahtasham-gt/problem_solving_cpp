//codeforses.com/contest/546A
#include <iostream>
using namespace std;
int main(){
    int n,w,k;
    cin>>k>>n>>w;
    int t=k*(w*(w+1))/2;
    if(t>n) cout<<t-n<<endl;
    else cout<<0<<endl;
    return 0;
}