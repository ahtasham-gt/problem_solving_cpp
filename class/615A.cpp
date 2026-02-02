//codeforeces.com/contest/615/A/Bulbs
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    bool arr[m]={false};
    for(int i=0; i<n; i++){
        int b;
        cin >> b;
        for (int i = 0; i < b; i++)
        {
            int bulb;
            cin >> bulb;
            arr[bulb] = true;   
        }
        
    }
    for(int i=1; i<=m; i++){
        if(arr[i]==false){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
