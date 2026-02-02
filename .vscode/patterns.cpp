
#include <iostream>
using namespace std;
void print1(int n){// inverse triangle
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n){//tower pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<i*2+1; j++){
            cout<<"*";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;    
    }
}

void print3(int n){//inverse tower pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(n-1-i)*2+1; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;    
    }
}

void print4(int n){//bow pattern
    for(int i=1; i<=2*n-1; i++){
            int star=i;
            if (i>n) star=2*n-i;
            for(int j=1; j<=star; j++){
                cout<<"*";
            }
            cout<<endl;
    }
}

void print5(int n){//bit flip triangle pattern
    int st=1;
    for(int i=0; i<n; i++){
        if(i%2==0) st=1;
        else st=0;
        for(int j=0; j<=i; j++){
            cout<<st;
            st=1-st;//toflip
        }
        cout<<endl;
    }
}

void print6(int n){//num space num pattern refer text
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){//num
            cout<<j;
        }
        for(int j=1; j<=n*2-i*2; j++){//space
            cout<<" ";
            
        }
        for(int j=i; j>0; j--){//num
            cout<<j;
        }
        cout<<endl;
        
    }
}

void print7(int n){//num increase trianle pattern
    int num=1;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<num;
            num++; 
        }
        cout<<endl;
    }
    
}

void print8(int n){//Alphabet trianle pattern
    for(int i=0; i<n; i++){
        for (char ch='A'; ch<='A'+i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
    
}

void print9(int n){//Alphabet tower pattern
for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){//space
        cout<<" ";
    }
    for(char ch='A'; ch<='A'+i; ch++){//char
        cout<<ch;
    }
    for(char ch='A'+i-1; ch>='A'; ch--){//char
        cout<<ch;
    }
    for(int j=0; j<n-i-1; j++){//space
        cout<<" ";
    }
    cout<<endl;
}
}

void print10(int n){//Alphabet tower pattern alternate method
for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1; j++){//space
        cout<<" ";
    }
    
    char ch='A';
    int bp=(i*2+1)/2;
    for(int j=1; j<=i*2+1; j++){//characters
        cout<<ch;
        if(j<=bp) ch++;
        else ch--;
    }
    
    for(int j=0; j<n-i-1; j++){//space
        cout<<" ";
    }
    cout<<endl;
}
}

void print11(int n){//desc alpha traingle pattern
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print12(int n){//empty diamond pattern(stars space stars)
    for(int i=0; i<n; i++){//inverted
        for(int j=0; j<n-i; j++){//stars
            cout<<"*";
        }
        for(int j=0; j<i*2; j++){//space
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){//stars
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){//stars
            cout<<"*";
        }
        for(int j=0; j<n*2-i*2; j++){//space
            cout<<" ";
        }
        for(int j=0; j<i; j++){//stars
            cout<<"*";
        }
        cout<<endl;
    }
}

void print13(int n){//V + inverted V pattern
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int star=i;
        if(i>n) {
            star=2*n-i;
        }
        for(int j=1; j<=star; j++){//star
            cout<<"*";
        }
        for(int j=1; j<=space; j++){//star
            cout<<" ";
        }
        for(int j=1; j<=star; j++){//star
            cout<<"*";
        }
        cout<<endl;
        if (i<n) space-=2;
        else space+=2;
    }
}

void print14(int n){//square pattern
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){//fibonacci series
    int curr=1;
    int prev=0;
    int nxt=0;
    cout<<prev<<endl;
    if(n==1)
    return;
    cout<<curr<<endl;
    for (int i=0; i<n-2; i++){
        nxt=prev+curr;
        prev=curr;
        curr=nxt;
        cout<<nxt<<endl;
    }
}


int printprac(int n){
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<i*2; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        } 
        //spaces
        for(int j=0; j<n*2-2-i*2; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int num_box(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int t=i;
            int l=j;
            int r=2*n-2-j;
            int b=2*n-2-i;
            int mini=min(min(t,b),min(l,r));
            cout<<n-mini<<" ";
        }
        cout<<endl;
    }
}

int square(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

int bowinvertedbow(int n){
    int space=2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int star=i;
        if(i>n) star=2*n-i;
        //stars
        for(int j=0; j<star; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<space; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<star; j++){
            cout<<"*";
        }
        if(i<n) space-=2;
        else space+=2;
        cout<<endl;
    }
}

int main(){
bowinvertedbow(3);
}