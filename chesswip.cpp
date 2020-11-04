#include <iostream>
using namespace std;

//function to fill the chess board
void fillBoard(string open[8][8]){
 for (int i = 0; i < 8; i++) {
     for (int j = 0; j < 8; j++) {
         if ((i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0)){
          open[i][j] = " Wsq";
          }
        else{
          open[i][j] = " Bsq";
          }
          //cout << open[i][j];
            }
 }
 char pieces[8];
  pieces[0] = 'R' ;//Rook
  pieces[1] = 'N' ;//Knight
  pieces[2] = 'B' ;//Bishop
  pieces[3] = 'Q' ;//Queen
  pieces[4] = 'K' ;//King
  pieces[5] = 'B' ;
  pieces[6] = 'N';
  pieces[7] = 'R';



string piece;

for (int i=6; i < 7; i++){
  for (int j=0; j < 8; j++){
    open[i][j] = (piece +"(Pw)");
   // cout << board[i][j] ;
  }
}


for (int i=7; i < 8; i++){
  for (int j=0; j < 8; j++){
    open[i][j] = (piece +"(" + pieces[j])+"w)";
    //cout << board[i][j] ;
  }
}

for (int i=0; i<1; i++){
  for (int j=0; j<8; j++){
    open[i][j] = (piece + "(" + pieces[j]+"b)");
    //cout << board[i][j];
  }
}


for (int i=1; i<2; i++){
  for (int j=0; j<8; j++){
    open[i][j] = (piece + "|Pb|");
   // cout << board[i][j];
  }
}
}
void printBoard(string open[8][8]){
  cout << "\n   A   B   C   D   E   F   G   H";
  int n=8;
  n=8;
for (int i=0; i<8; i++){
   cout << endl;
   cout << n;
   n--;
  for (int j=0; j<8; j++){
    cout << open[i][j];
  }
}

cout << "\n   A   B   C   D   E   F   G   H";
}


int main(){

string ruy[8][8];
string italian[8][8];
string sicilian[8][8];
string french[8][8];
string caro[8][8];
string pirc[8][8];
string qgambit[8][8];
string indian[8][8];
string english[8][8];
string reti[8][8];

fillBoard(ruy);
fillBoard(italian);
fillBoard(sicilian);
fillBoard(french);
fillBoard(caro);
fillBoard(pirc);
fillBoard(qgambit);
fillBoard(indian);
fillBoard(english);
fillBoard(reti);

printBoard(ruy);
ruy[7][5] = " Wsq";
ruy[7][6] = " Bsq";
ruy[6][4] = " Wsq";
ruy[5][5] = ruy[7][1];
ruy[4][4] = ruy[6][1];
ruy[3][1] = "(Bw)";
ruy[0][1] = " Bsq";
ruy[1][4] = " Bsq";
ruy[2][2] = "(Nb)";
ruy[3][4] = "(Pb)";

italian[7][5] = " Wsq";
italian[7][6] = " Bsq";
italian[6][4] = " Wsq";
italian[5][5] = italian[7][1];
italian[4][4] = italian[6][1];
italian[4][2] = "(Bw)";
italian[0][1] = " Bsq";
italian[1][4] = " Bsq";
italian[2][2] = "(Nb)";
italian[3][4] = "(Pb)";

sicilian[6][4] = " Wsq";
sicilian[4][4] = "(Pw)";
sicilian[1][2] = " Bsq";
sicilian[3][2] = "(Pb)";

french[4][4] = "(Pw)";
french[2][4] = "(Pb)";
french[1][4] = " Bsq";
french[6][4] = " Wsq";

caro[4][4] = "(Pw)";
caro[6][4] = " Wsq";
caro[2][2] = "(Pb)";
caro[1][2] = " Bsq";

pirc[4][4] = "(Pw)";
pirc[6][4] = " Wsq";
pirc[2][3] = "(Pb)";
pirc[1][3] = " Wsq";

qgambit[4][2] = "(Pw)";
qgambit[4][3] = "(Pw)";
qgambit[6][2] = " Wsq";
qgambit[6][3] = " Bsq";
qgambit[1][3] = " Wsq";
qgambit[3][3] = "(Pb)";

indian[6][3] = " Bsq";
indian[4][3] = "(Pw)";
indian[0][6] = " Wsq";
indian[2][5] = "(Nb)";

english[6][2] = " Wsq";
english[4][2] = "(Pw)";

reti[7][6] = " Bsq";
reti[5][5] = "(Nw)";


cout << "\n\nLet's go through some openings.\n";
cout << "Press SPACE to cycle through openings.\n";
cout << "Press ESC when you wanna quit.\n";
char button;
cin.get (button);

  if (button == ' ') {
    int i=0;
    for (; ;){
       i++;
      
     while ((button = getchar()) == ' ');

     if(button==27){
        exit(1);
        }
      if (i==1){
        cout << "The Ruy Lopez:\n";
       printBoard(ruy);}
      if (i==2){
        cout <<"\nThe Italian Game:\n";
        printBoard(italian);}
      if (i==3){
        cout << "\nSicilian Defense:\n";
        printBoard(sicilian);}
      if (i==4){
        cout << "\nFrench Defense:\n";
        printBoard(french);
      }
      if(i==5){
        cout << "\nCaro-Kann Defense:\n";
        printBoard(caro);
      }
      if(i==6){
        cout << "\nPirc Defense:\n";
        printBoard(pirc);
      }
      if (i==7){
        cout << "\nQueen's Gambit:\n";
        printBoard(qgambit);
      }
      if (i==8){
        cout << "\nIndian Defense:\n";
        printBoard(indian);
      }
      if (i==9){
        cout <<"\nEnglish Opening:\n";
        printBoard(english);
      }
      if (i==10){
        cout <<"\nReti Opening:\n";
        printBoard(reti);
      }

       if(i==11){
         i=0;
       } 
      
    
    }
  }

  return 0;
}

