#include<iostream>
using namespace std;

int main(){
    int n;
    int t1=0;
    int t2=1;
    int next_t=0;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci Series: "<<endl;
    for(int i=1; i<=n; i++){
        if(i==1){
            cout<<t1<<" "<<endl;
            continue;
        }
        if(i==2){
            cout<<t2<<" "<<endl;
            continue;
        }
        next_t=t1+t2;
        t1=t2;
        t2=next_t;
        cout<<next_t<<" "<<endl;
    }
    cout<<endl;
    return 0;
}
