#include<bits/stdc++.h>
using namespace std;

int main(){

    int num ,guess, chances;
    srand(time(0));
    num = (rand()%100)+1;

cout<<"*********Let's Begin the NUMBER GUESSING GAME!!!*********"<<endl;

do{

     cout<<"Enter a guess between numbers (1-100):";
    cin>>guess;
    chances++;

if(guess>num){
    cout<<"Too High number.Try Again."<<endl;
}
else if(guess<num){
    cout<<"Too Low number.Try Again."<<endl;
}
else{
    cout<<"CORRECT GUESSS!!!"<<endl;
}

}while(guess!=num);

cout<<"*********Thanks for Playing*********"<<endl;

    return 0;
}