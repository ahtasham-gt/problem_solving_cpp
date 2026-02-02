#include <bits/stdc++.h>
using namespace std;

//anagram string
int ana(string s1, string s2){
    if (s1.length()!=s2.length())
        return 0;
    map<char,int> mpp1;
    map<char,int> mpp2;
    for(int i=0; i<s1.length(); i++){
        mpp1[s1[i]]++;
        mpp2[s2[i]]++;
    }
    if (mpp1==mpp2) return 1;
    else return 0;

}

int main(){
    string s1="listen", s2="silent";
    cout<<ana(s1,s2);

}