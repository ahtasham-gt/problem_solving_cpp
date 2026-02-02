//codeforses.com/contest/540/A/combination lock
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;
    int move=0;
    for(int i=0;i<n;i++){
        int diff=abs((str1[i]-'0')-(str2[i]-'0'));
        move+=min(diff,10-diff);
    }
    cout<<move<<endl;
}