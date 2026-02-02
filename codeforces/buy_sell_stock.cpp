#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int min_price=0;
    int max_profit=0;
    for(int i=0; i<n; i++){
        int price;
        cin>>price;
        if(price<min_price){
            min_price=price;
        }
        int profit=price-min_price;
        if(profit>max_profit){
            max_profit=profit;
        }
    }
    cout<<max_profit<<endl;
    return 0;
}
