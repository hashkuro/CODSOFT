#include <bits/stdc++.h>
using namespace std;
int main() {
    srand(time(0)); 
    int n = rand()%51;
    int ch;
    cout<<"Pick a number from 0 to 50 (inclulding 0 and 50)"<<endl;
    int s=0;
    while(1){
        s++;
        cout<<"Your choice: ";
        cin>>ch;
        if(ch<0 || ch>50){
            cout<<"Youre making this hard for yourself, pick something in the given range"<<endl;
        }
        else if(ch==n){
            cout<<"Correct!";
            cout<<"You took "<<s<<" tries";
            break;
        }
        else if(ch>n){
            cout<<"Try something smaller"<<endl;
        }
        else if(ch<n){
            cout<<"Try something bigger"<<endl;
        }
    }
    return 0;
}
