#include <bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    cout<<"TIC TAC TOE"<<endl;
    cout<<"This  is  turn   based   game"<<endl;
    cout<<"first p1 will select a number"<<endl;
    cout<<"which is not  taken by X or O"<<endl;
    cout<<"then that will be replaced by"<<endl;
    cout<<"the player's  mark i.e X or O"<<endl;
    cout<<endl;
    cout<<"P1 gets X"<<endl;
    cout<<"P2 gets O"<<endl;
    while(t){
        char b[3][3];
        char a='1';
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                b[i][j]=a;
                a++;
            }
        }
        //display
        cout<<endl;
        cout<<endl;
        cout<<"the board"<<endl;
        cout<<"\t     |     |     "<<endl;
        cout<<"\t  "<<b[0][0]<<"  |  "<<b[0][1]<<"  |  "<<b[0][2]<<"  "<<endl;
        cout<<"\t-----|-----|-----"<<endl;
        cout<<"\t  "<<b[1][0]<<"  |  "<<b[1][1]<<"  |  "<<b[1][2]<<"  "<<endl;
        cout<<"\t-----|-----|-----"<<endl;
        cout<<"\t  "<<b[2][0]<<"  |  "<<b[2][1]<<"  |  "<<b[2][2]<<"  "<<endl;
        cout<<"\t     |     |     "<<endl;
        cout<<endl;
        cout<<endl;
        int r=0;
        //game starts
        int t1=9;
        int i=0;
        while(t1){
            
            int c=0;
            
            cout<<"Turn "<<i+1<<endl;
            i++;
            //p1 plays
            t1--;
            cout<<"P1, enter your choice! ";
            cin>>c;
            if(c==1 && b[0][0]=='1'){
                b[0][0]='X';
            }
            else if(c==2 && b[0][1]=='2'){
                b[0][1]='X';
            }
            else if(c==3 && b[0][2]=='3'){
                b[0][2]='X';
            }
            else if(c==4 && b[1][0]=='4'){
                b[1][0]='X';
            }
            else if(c==5 && b[1][1]=='5'){
                b[1][1]='X';
            }
            else if(c==6 && b[1][2]=='6'){
                b[1][2]='X';
            }
            else if(c==7 && b[2][0]=='7'){
                b[2][0]='X';
            }
            else if(c==8 && b[2][1]=='8'){
                b[2][1]='X';
            }
            else if(c==9 && b[2][2]=='9'){
                b[2][2]='X';
            }
            else{
                cout<<"wrong coice brother"<<endl;
                return 0;
            }
            //display after p1 plays
            cout<<endl;
            cout<<endl;
            cout<<"the board"<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<"\t  "<<b[0][0]<<"  |  "<<b[0][1]<<"  |  "<<b[0][2]<<"  "<<endl;
            cout<<"\t-----|-----|-----"<<endl;
            cout<<"\t  "<<b[1][0]<<"  |  "<<b[1][1]<<"  |  "<<b[1][2]<<"  "<<endl;
            cout<<"\t-----|-----|-----"<<endl;
            cout<<"\t  "<<b[2][0]<<"  |  "<<b[2][1]<<"  |  "<<b[2][2]<<"  "<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<endl;
            cout<<endl;
            
            //checking1
            if(b[0][0]==b[0][1] && b[0][0]==b[0][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[1][0]==b[1][1] && b[1][0]==b[1][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[2][0]==b[2][1] && b[2][0]==b[2][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[0][0]==b[1][0] && b[0][0]==b[2][0]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[0][1]==b[1][1] && b[0][1]==b[2][1]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[0][2]==b[1][2] && b[0][2]==b[2][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            else if(b[2][0]==b[1][1] && b[1][1]==b[0][2]){
                cout<<"P1 wins!";
                r=1;
                break;
            }
            if(t1==0){
                break;
            }
            //p2 plays
            t1--;
            cout<<"P2, enter your choice! ";
            cin>>c;
            if(c==1 && b[0][0]=='1'){
                b[0][0]='O';
            }
            else if(c==2 && b[0][1]=='2'){
                b[0][1]='O';
            }
            else if(c==3 && b[0][2]=='3'){
                b[0][2]='O';
            }
            else if(c==4 && b[1][0]=='4'){
                b[1][0]='O';
            }
            else if(c==5 && b[1][1]=='5'){
                b[1][1]='O';
            }
            else if(c==6 && b[1][2]=='6'){
                b[1][2]='O';
            }
            else if(c==7 && b[2][0]=='7'){
                b[2][0]='O';
            }
            else if(c==8 && b[2][1]=='8'){
                b[2][1]='O';
            }
            else if(c==9 && b[2][2]=='9'){
                b[2][2]='O';
            }
            else{
                cout<<"wrong coice brother"<<endl;
                return 0;
            }
            
            
            //display after p2 plays
            cout<<endl;
            cout<<endl;
            cout<<"the board"<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<"\t  "<<b[0][0]<<"  |  "<<b[0][1]<<"  |  "<<b[0][2]<<"  "<<endl;
            cout<<"\t-----|-----|-----"<<endl;
            cout<<"\t  "<<b[1][0]<<"  |  "<<b[1][1]<<"  |  "<<b[1][2]<<"  "<<endl;
            cout<<"\t-----|-----|-----"<<endl;
            cout<<"\t  "<<b[2][0]<<"  |  "<<b[2][1]<<"  |  "<<b[2][2]<<"  "<<endl;
            cout<<"\t     |     |     "<<endl;
            cout<<endl;
            
            //checking2
            if(b[0][0]==b[0][1] && b[0][0]==b[0][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[1][0]==b[1][1] && b[1][0]==b[1][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[2][0]==b[2][1] && b[2][0]==b[2][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[0][0]==b[1][0] && b[0][0]==b[2][0]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[0][1]==b[1][1] && b[0][1]==b[2][1]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[0][2]==b[1][2] && b[0][2]==b[2][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[0][0]==b[1][1] && b[1][1]==b[2][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            else if(b[2][0]==b[1][1] && b[1][1]==b[0][2]){
                cout<<"P2 wins!";
                r=1;
                break;
            }
            cout<<endl;
            cout<<"------------------------------------------------------"<<endl;
            cout<<endl;
        }
        if(r==0){
            cout<<"Draw"<<endl;
        }
        cout<<"\nWanna play again? Y/N"<<endl;
        char ch;
        cin>>ch;
        if(ch=='N'||ch=='n'){
            t=0;
        }
    }
    
    
    return 0;
}
