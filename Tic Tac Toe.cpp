// Tic Tac Toe Game By Akshit 
// Only switchPlayer function is made by chat gpt
// date : 07/07/2024 
#include <iostream>
using namespace std;
#define red "\033[31m" 
#define green "\033[32m"
#define blue "\033[34m"
#define yellow "\033[33m"
bool gameover;
char currentPlayer='X';
char l='|';
char s[3][3]={{'1','2','3'},{'4','5','6'},{'7','8', '9'}};
void draw(){
  gameover=false;
 // system ("cls");
//Not supported in replit using ansi code "\033[2j\033[1;1H" to clear screen
cout<<"\033[2J\033[1;1H";
  cout<<red<<l<<s[0][0]<<l<<s[0][1]<<l<<s[0][2];
  cout<<blue<<"\n"<<l<<s[1][0]<<l<<s[1][1]<<l<<s[1][2];
  cout<<green<<"\n"<<l<<s[2][0]<<l<<s[2][1]<<l<<s[2][2];
  cout<<endl;

}
void switchPlayer() {
  if (currentPlayer == 'X') {
          currentPlayer = 'O';
              } else {
                      currentPlayer = 'X';
  }
}

void input(){
  int x;
  cout<<yellow<<"Enter your move : ";
  cin>>x;
  
if(currentPlayer=='X'){
  switch(x){
    case 1 :
    s[0][0]='X';
    break;
    case 2:
    s[0][1]='X';
    break;
    case 3:
        s[0][2]='X';
    break;
    case 4:
        s[1][0]='X';
    break;
    case 5:
        s[1][1]='X';
    break;
    case 6:
      s[1][2]='X';
    break;
    case 7:
      s[2][0]='X';
    break;
    case 8:
      s[2][1]='X';
    break;
    case 9:
      s[2][2]='X';
    break;
    default :
    cout<<"Invalid move ! "<<endl;
      cout<<"Try again !"<<endl;
gameover=true;
    break;
  }
}
  if (currentPlayer=='O'){
  switch(x){
    case 1 :
    s[0][0]='O';
    break;
    case 2:
    s[0][1]='O';
    break;
    case 3:
        s[0][2]='O';
    break;
    case 4:
        s[1][0]='O';
    break;
    case 5:
        s[1][1]='O';
    break;
    case 6:
      s[1][2]='O';
    break;
    case 7:
      s[2][0]='O';
    break;
    case 8:
      s[2][1]='O';
    break;
    case 9:
      s[2][2]='O';
    break;
    default :
    cout<<"Invalid move ! "<<endl;
      cout<<"Try again !"<<endl;
gameover=true;
    break;
  }
  }
}
void checkWin (){
if(s[0][0]=='X'&&s[0][1]=='X'&&s[0][2]=='X'){
cout<<magenta<<"You win player 'X'"<<endl;
gameover=true;
}
if(s[0][0]=='X'&&s[1][1]=='X'&&s[2][2]=='X'){
cout<<magenta<<"You win player 'X' "<<endl;
gameover=true;
}
if(s[0][0]=='X'&&s[1][0]=='X'&&s[2][0]=='X'){
cout<<magenta<<"You win player 'X' "<<endl;
gameover=true;
}
if(s[0][1]=='X'&&s[1][1]=='X'&&s[2][1]=='X'){
cout<<magenta<<"You win player 'X' "<<endl;
gameover=true;
}
if(s[0][2]=='X'&&s[1][1]=='X'&&s[2][0]=='X'){
cout<<magenta<<"You win player 'X' "<<endl;
gameover=true;
}
if(s[1][0]=='X'&&s[1][1]=='X'&&s[2][1]=='X'){
cout<<magenta<<"You win player 'X' "<<endl;
gameover=true;
}
  // Checking O
if(s[0][0]=='O'&&s[0][1]=='O'&&s[0][2]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
if(s[0][0]=='O'&&s[1][1]=='O'&&s[2][2]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
if(s[0][0]=='O'&&s[1][0]=='O'&&s[2][0]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
if(s[0][1]=='O'&&s[1][1]=='O'&&s[2][1]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
if(s[0][2]=='O'&&s[1][1]=='O'&&s[2][0]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
if(s[1][0]=='O'&&s[1][1]=='O'&&s[2][1]=='O'){
cout<<magenta<<"You win player 'O' "<<endl;
gameover=true;
}
}
int main() {
  while(!gameover){
  draw();
  switchPlayer();
  input();
    checkWin();
  }
  return 0;
}
