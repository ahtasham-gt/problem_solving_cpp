//https://codeforces.com/problemset/problem/202/A - Lexicographically Largest Palindromic Subsequence
//counting frequency of characters and printing the largest one
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int freq[26]={0};
    for(char c:s){
        freq[c-'a']++;
    }
    for(int i=25;i>=0;i--){
        if(freq[i]>0){
            char ch='a'+i;
            for(int j=0;j<freq[i];j++){
                cout<<ch;
            }
            break;
        }
    }
    return 0;
}