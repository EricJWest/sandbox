/* Lesson 4, Exercise 1
   Teach Yourself C++ in One Hour a Day (8th edition)
   by Siddhartha Rao */

#include <iostream>
using namespace std;

enum chessPieces
{
   Empty,
   Pawn,
   Rook,
   Knight,
   Bishop,
   Queen,
   King
};

int main()
{
   chessPieces chessBoard [8] [8] = {};
   chessBoard[0][0] = Rook;
   chessBoard[0][1] = Knight;
   chessBoard[0][2] = Bishop;
   chessBoard[0][3] = Queen;
   chessBoard[0][4] = King;
   chessBoard[0][5] = Bishop;
   chessBoard[0][6] = Knight;
   chessBoard[0][7] = Rook;

   chessBoard[1][0] = Pawn;
   chessBoard[1][1] = Pawn;
   chessBoard[1][2] = Pawn;
   chessBoard[1][3] = Pawn;
   chessBoard[1][4] = Pawn;
   chessBoard[1][5] = Pawn;
   chessBoard[1][6] = Pawn;
   chessBoard[1][7] = Pawn;

   chessBoard[2][0] = Empty;
   chessBoard[2][1] = Empty;
   chessBoard[2][2] = Empty;
   chessBoard[2][3] = Empty;
   chessBoard[2][4] = Empty;
   chessBoard[2][5] = Empty;
   chessBoard[2][6] = Empty;
   chessBoard[2][7] = Empty;

   chessBoard[3][0] = Empty;
   chessBoard[3][1] = Empty;
   chessBoard[3][2] = Empty;
   chessBoard[3][3] = Empty;
   chessBoard[3][4] = Empty;
   chessBoard[3][5] = Empty;
   chessBoard[3][6] = Empty;
   chessBoard[3][7] = Empty;

   chessBoard[4][0] = Empty;
   chessBoard[4][1] = Empty;
   chessBoard[4][2] = Empty;
   chessBoard[4][3] = Empty;
   chessBoard[4][4] = Empty;
   chessBoard[4][5] = Empty;
   chessBoard[4][6] = Empty;
   chessBoard[4][7] = Empty;

   chessBoard[5][0] = Empty;
   chessBoard[5][1] = Empty;
   chessBoard[5][2] = Empty;
   chessBoard[5][3] = Empty;
   chessBoard[5][4] = Empty;
   chessBoard[5][5] = Empty;
   chessBoard[5][6] = Empty;
   chessBoard[5][7] = Empty;

   chessBoard[6][0] = Pawn;
   chessBoard[6][1] = Pawn;
   chessBoard[6][2] = Pawn;
   chessBoard[6][3] = Pawn;
   chessBoard[6][4] = Pawn;
   chessBoard[6][5] = Pawn;
   chessBoard[6][6] = Pawn;
   chessBoard[6][7] = Pawn;

   chessBoard[7][0] = Rook;
   chessBoard[7][1] = Knight;
   chessBoard[7][2] = Bishop;
   chessBoard[7][3] = King;
   chessBoard[7][4] = Queen;
   chessBoard[7][5] = Bishop;
   chessBoard[7][6] = Knight;
   chessBoard[7][7] = Rook;

   cout << "Enter a row (1-8): ";
   int rowNumber = 0;
   cin >> rowNumber;

   cout << "Enter a column (1-8): ";
   int colNumber = 0;
   cin >> colNumber;

   cout << "Square (" << rowNumber << "," << colNumber <<") is occupied by " \
   << chessBoard[rowNumber - 1][colNumber - 1] << endl;

   cout << endl;
   cout << "KEY: " << endl;
   cout << "0 = Empty" << endl;
   cout << "1 = Pawn" << endl;
   cout << "2 = Rook" << endl;
   cout << "3 = Knight" << endl;
   cout << "4 = Bishop" << endl;
   cout << "5 = Queen" << endl;
   cout << "6 = King" << endl;

   return 0;
}
