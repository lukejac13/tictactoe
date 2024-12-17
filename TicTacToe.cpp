#include <iostream>
#include <windows.h>
#include <winable.h>
#include <string>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include <ctime>
#include <cmath>
using namespace std;

int twoPlayer(){
	int numRows{ 3 }; 
     int numCols{ 3 };
     bool end = false;
     int player1Row;
     int player1Col;
     int player2Row;
     int player2Col;
     int p1count;
     int p2Count;
     bool valid = false;
     int count = 0;
     
 
    
    int product[numRows][numCols]{};
    
 
    
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            product[row][col] = 0;
        }
     }
 
    // Print the table
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
 
 while (end != true){
 	
 	valid = false;
 	while(valid == false){
 	cout<< "Player 1 select a row: (1-3) ";
 	cin >> player1Row;
 	cout << "Player 1 select a Column: (1-3) ";
 	cin >>player1Col;
 	
 	if(product[player1Row][player1Col] == 0){
	 
 	product[player1Row][player1Col] = 1;
 	valid = true;
 	p1count++;
 	
 	
 	}else{
	 	cout<<"Invalid input, Please select another point" <<endl;
	 	valid = false;
	 	//11/30/2022: What are the odds this stays row 69 lol
	 }
 		
	 }
 	system("cls");
 	valid = false;
 	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
 	 if(product[1][1]== 1 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[2][1]== 1 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[3][1]== 1 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1]== 1 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][2]== 1 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][3]== 1 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1] == 1 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(product[1][3] == 1 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(p1count == 5 ){
		end = true;
		cout <<"Tie" <<endl;
		break;
	}
	
	
 	valid = false;
 	while(valid == false){
 	cout<< "Player 2 select a row: (1-3) ";
 	cin >> player2Row;
 	cout << "Player 2 select a Column: (1-3) ";
 	cin >>player2Col;
 	
 	if(product[player2Row][player2Col] == 0){
	 
 	product[player2Row][player2Col] = 2;
 	valid = true;
 	
 	break;
 	
 	}else{
	 	cout<<"Invalid input, Please select another point" <<endl;
	 	valid = false;
	 	
	 }
 		
	 }
 	system("cls");
	 for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
    
    if(product[1][1]== 2 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Player 2 wins!!!";
    	break;
	}
	if(product[2][1]== 2 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Player 2 wins!!!";
    	break;
	}
	if(product[3][1]== 2 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Player 2 wins!!!";
	    	break;
	}
	if(product[1][1]== 2 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Player 2 wins!!!";
	    	break;
	}
	if(product[1][2]== 2 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Player 2 wins!!!";
	    	break;
	}
	if(product[1][3]== 2 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Player 2 wins!!!";
	    	break;
	}
	if(product[1][1] == 2 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Player 2 wins!!!";
		break;
	}
	if(product[1][3] == 2 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Player 2 wins!!!";
		break;
	}
	
	
	
 }
}


int AIGameEasy(){
	system("CLS");
	int numRows{ 3 };
     int numCols{ 3 };
     bool end = false;
     int player1Row;
     int player1Col;
     int aiRow;
     int aiCol;
     int count = 0;
     int aiCount = 0;
     bool valid = false;
     
 
    
    int product[numRows][numCols]{};
 
    
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            product[row][col] = 0;
        }
     }
 
    // Print the table
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
 srand(time(0));
 while (end != true){
 	
 	
 	
 	valid = false;
 	while(valid == false){
 	cout<< "Player 1 select a row: (1-3) ";
 	cin >> player1Row;
 	cout << "Player 1 select a Column: (1-3) ";
 	cin >>player1Col;
 	
 	if(product[player1Row][player1Col] == 0){
	 
 	product[player1Row][player1Col] = 1;
 	valid = true;
 	count++;
 	break;
 	
 	}else{
	 	cout<<"Invalid input, Please select another point" <<endl;
	 	valid = false;
	 	
	 }
 		
	 }
 	system("cls");
 	
 	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
 	 if(product[1][1]== 1 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[2][1]== 1 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[3][1]== 1 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1]== 1 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][2]== 1 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][3]== 1 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1] == 1 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(product[1][3] == 1 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(count == 5 ){
		end = true;
		cout << "Tie"<<endl;
		break;
	}
	system("cls");
	cout<< "The AI is choosing now"<<endl;
	
	
	aiRow = rand() % 3 +1;
	aiCol = rand() % 3 + 1;
	
	
		
		while(aiCount != count){
		

	
	if(product[aiRow][aiCol] == 0){
 		product[aiRow][aiCol] = 2;
 		aiCount++;
 		
 		break;
	 }else{
	 	aiRow = rand() % 3 +1;
		aiCol = rand() % 3 + 1;
	 }
	 
}
		
	
	
	
	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
	
	if(product[1][1]== 2 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[2][1]== 2 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[3][1]== 2 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1]== 2 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][2]== 2 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][3]== 2 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1] == 2 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
	if(product[1][3] == 2 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
}
	

}

int AIGameMedium(){
	system("CLS");
	int numRows{ 3 };
     int numCols{ 3 };
     bool end = false;
     int player1Row;
     int player1Col;
     int aiRow;
     int aiCol;
     int count = 0;
     int aiCount = 0;
     bool valid = false;
     
 
    
    int product[numRows][numCols]{};
 
    
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            product[row][col] = 0;
        }
     }
 
    // Print the table
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
 srand(time(0));
 while (end != true){
 	
 	
 	
 	valid = false;
 	while(valid == false){
 	cout<< "Player 1 select a row: (1-3) ";
 	cin >> player1Row;
 	cout << "Player 1 select a Column: (1-3) ";
 	cin >>player1Col;
 	
 	if(product[player1Row][player1Col] == 0){
	 
 	product[player1Row][player1Col] = 1;
 	valid = true;
 	count++;
 	break;
 	
 	}else{
	 	cout<<"Invalid input, Please select another point" <<endl;
	 	valid = false;
	 	
	 }
 		
	 }
 	system("cls");
 	
 	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
 	 if(product[1][1]== 1 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[2][1]== 1 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[3][1]== 1 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1]== 1 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][2]== 1 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][3]== 1 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1] == 1 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(product[1][3] == 1 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(count == 5 ){
		end = true;
		cout << "Tie"<<endl;
		break;
	}
	system("cls");
	cout<< "The AI is choosing now"<<endl;
	
	
	aiRow = rand() % 3 +1;
	aiCol = rand() % 3 + 1;
	
	
	if(product[2][2] == 2 && product [1][1] == 2 && product[3][3]==0){ //diagonal
	
		product[3][3] = 2;
		
	}else if(product[2][2] == 2 && product [3][3] == 2 && product[1][1]==0){ // diagonal
	
		product[1][1] = 2;
		
	}else if(product[3][3] == 2 && product [1][1] == 2 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [1][3] == 2 && product[3][1]==0){ //diagonal
	
		product[3][1] = 2;
		
	}else if(product[2][2] == 2 && product [3][1] == 2 && product[1][3]==0){ //diagonal
	
		product[1][3] = 2;
		
	}else if(product[3][1] == 2 && product [1][3] == 2 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [2][1] == 2 && product[2][3]==0){ //row 2 horizontal
	
		product[2][3] = 2;
		
	}else if(product[2][1] == 2 && product [2][3] == 2 && product[2][3]==0){ //row 2 horizontal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [2][3] == 2 && product[2][1]==0){ //row 2 horizontal
	
		product[2][1] = 2;
		
	}else if(product[2][2] == 2 && product [1][2] == 2 && product[3][2]==0){ //col 2 vertical
	
		product[3][2] = 2;
		
	}else if(product[1][2] == 2 && product [3][2] == 2 && product[2][2]==0){ //col 2 vertical
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [3][2] == 2 && product[1][2]==0){ //col 2 vertical
	
		product[1][2] = 2;
		
	}else if(product[2][1] == 2 && product [1][1] == 2 && product[3][1]==0){ // col 1 vertical
	
		product[3][1] = 2;
		
	}else if(product[1][1] == 2 && product [3][1] == 2 && product[2][1]==0){ // col 1 vertical
	
		product[2][1] = 2;
		
	}else if(product[2][1] == 2 && product [3][1] == 2 && product[1][1]==0){ // col 1 vertical
	
		product[1][1] = 2;
		
	}else if(product[2][3] == 2 && product [1][3] == 2 && product[3][3]==0){ // col 3 vertical
	
		product[3][3] = 2;
		
	}else if(product[1][3] == 2 && product [3][3] == 2 && product[2][3]==0){ // col 3 vertical
	
		product[2][3] = 2;
		
	}else if(product[2][3] == 2 && product [3][3] == 2 && product[1][3]==0){ // col 3 vertical
	
		product[1][3] = 2;
		
	}else if(product[1][2] == 2 && product [1][1] == 2 && product[1][3]==0){ // row 1 horizontal
	
		product[1][3] = 2;
		
	}else if(product[1][1] == 2 && product [1][3] == 2 && product[1][2]==0){ // row 1 horizontal
	
		product[1][2] = 2;
		
	}else if(product[1][2] == 2 && product [1][3] == 2 && product[1][1]==0){ // row 1 horizontal
	
		product[1][1] = 2;
		
	}else if(product[3][2] == 2 && product [3][1] == 2 && product[3][3]==0){ // row 3 horizontal
	
		product[3][3] = 2;
		
	}else if(product[3][2] == 2 && product [3][3] == 2 && product[3][1]==0){ // row 3 horizontal
	
		product[3][1] = 2;
		
	}else if(product[3][3] == 2 && product [3][1] == 2 && product[3][2]==0){ // row 3 horizontal
	
		product[3][2] = 2;
		
		
		
		
		
		//BLOCKS
		
		
		
		
		
	}else if(product[2][2] == 1 && product [1][1] == 1 && product[3][3]==0){ //diagonal
	
		product[3][3] = 2;
		
	}else if(product[2][2] == 1 && product [3][3] == 1 && product[1][1]==0){ // diagonal
	
		product[1][1] = 2;
		
	}else if(product[3][3] == 1 && product [1][1] == 1 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [1][3] == 1 && product[3][1]==0){ //diagonal
	
		product[3][1] = 2;
		
	}else if(product[2][2] == 1 && product [3][1] == 1 && product[1][3]==0){ //diagonal
	
		product[1][3] = 2;
		
	}else if(product[3][1] == 1 && product [1][3] == 1 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [2][1] == 1 && product[2][3]==0){ //row 2 horizontal
	
		product[2][3] = 2;
		
	}else if(product[2][1] == 1 && product [2][3] == 1 && product[2][3]==0){ //row 2 horizontal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [2][3] == 1 && product[2][1]==0){ //row 2 horizontal
	
		product[2][1] = 2;
		
	}else if(product[2][2] == 1 && product [1][2] == 1 && product[3][2]==0){ //col 2 vertical
	
		product[3][2] = 2;
		
	}else if(product[1][2] == 1 && product [3][2] == 1 && product[2][2]==0){ //col 2 vertical
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [3][2] == 1 && product[1][2]==0){ //col 2 vertical
	
		product[1][2] = 2;
		
	}else if(product[2][1] == 1 && product [1][1] == 1 && product[3][1]==0){ // col 1 vertical
	
		product[3][1] = 2;
		
	}else if(product[1][1] == 1 && product [3][1] == 1 && product[2][1]==0){ // col 1 vertical
	
		product[2][1] = 2;
		
	}else if(product[2][1] == 1 && product [3][1] == 1 && product[1][1]==0){ // col 1 vertical
	
		product[1][1] = 2;
		
	}else if(product[2][3] == 1 && product [1][3] == 1 && product[3][3]==0){ // col 3 vertical
	
		product[3][3] = 2;
		
	}else if(product[1][3] == 1 && product [3][3] == 1 && product[2][3]==0){ // col 3 vertical
	
		product[2][3] = 2;
		
	}else if(product[2][3] == 1 && product [3][3] == 1 && product[1][3]==0){ // col 3 vertical
	
		product[1][3] = 2;
		
	}else if(product[1][2] == 1 && product [1][1] == 1 && product[1][3]==0){ // row 1 horizontal
	
		product[1][3] = 2;
		
	}else if(product[1][1] == 1 && product [1][3] == 1 && product[1][2]==0){ // row 1 horizontal
	
		product[1][1] = 2;
		
	}else if(product[1][2] == 1 && product [1][3] == 1 && product[1][1]==0){ // row 1 horizontal
	
		product[1][1] = 2;
		
	}else if(product[3][2] == 1 && product [3][1] == 1 && product[3][3]==0){ // row 3 horizontal
	
		product[3][3] = 2;
		
	}else if(product[3][2] == 1 && product [3][3] == 1 && product[3][1]==0){ // row 3 horizontal
	
		product[3][1] = 2;
		
	}else if(product[3][3] == 1 && product [3][1] == 1 && product[3][2]==0){ // row 3 horizontal
	
		product[3][2] = 2;
		
	}else{
		
		while(aiCount != count){
		

	
	if(product[aiRow][aiCol] == 0){
 		product[aiRow][aiCol] = 2;
 		aiCount++;
 		
 		break;
	 }else{
	 	aiRow = rand() % 3 +1;
		aiCol = rand() % 3 + 1;
	 }
	 
}
		
	}
	
	
	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
	
	if(product[1][1]== 2 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[2][1]== 2 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[3][1]== 2 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1]== 2 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][2]== 2 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][3]== 2 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1] == 2 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
	if(product[1][3] == 2 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
	
	
}
}

int AIGameHard(){
	system("CLS");
	int numRows{ 3 };
     int numCols{ 3 };
     bool end = false;
     int player1Row;
     int player1Col;
     int aiRow;
     int aiCol;
     int count = 0;
     int aiCount = 0;
     bool valid = false;
     
 
    
    int product[numRows][numCols]{};
 
    
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            product[row][col] = 0;
        }
     }
 
    // Print the table or something idk
    for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
//its been forever idk wtf this even does anymore lol
 srand(time(0));
 
 while (end != true){
 	
 	
 	
 	valid = false;
 	while(valid == false){
 	cout<< "Player 1 select a row: (1-3) ";
 	cin >> player1Row;
 	cout << "Player 1 select a Column: (1-3) ";
 	cin >>player1Col;
 	
 	if(product[player1Row][player1Col] == 0){
	 
 	product[player1Row][player1Col] = 1;
 	valid = true;
 	count++;
 	break;
 	
 	}else{
	 	cout<<"Invalid input, Please select another point" <<endl;
	 	valid = false;
	 	
	 }
 		
	 }
 	system("cls");
 	
 	for (int row{ 1 }; row <= numRows; row++)
    {
        for (int col{ 1 }; col <= numCols; col++)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    //checks if player 1 wins
 	 if(product[1][1]== 1 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[2][1]== 1 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Player 1 wins!!!";
    	break;
	}
	if(product[3][1]== 1 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1]== 1 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][2]== 1 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][3]== 1 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Player 1 wins!!!";
	    	break;
	}
	if(product[1][1] == 1 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}
	if(product[1][3] == 1 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Player 1 wins!!!";
		break;
	}//checks tie
	if(count == 5 ){
		end = true;
		cout << "Tie"<< endl;
		break;
	}
	system("cls");
	cout<< "The AI is choosing now"<<endl;
	
	//ai chooses random
	aiRow = rand() % 3 +1;
	aiCol = rand() % 3 + 1;
	
	//places in middle if open, then wins if able to
	if(product[2][2] ==0 ){
		
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product[1][1] == 0){
		
		product[1][1]= 2;
		
	}else if(product[2][2] == 1 && product[3][3] == 1 && product [1][3] == 0 ){ // blocks top right
		
		product[1][3] = 2;
		
	}else	if(product[2][2] == 2 && product [1][1] == 2 && product[3][3]==0){ //diagonal
	
		product[3][3] = 2;
		
	}else if(product[2][2] == 2 && product [3][3] == 2 && product[1][1]==0){ // diagonal
	
		product[1][1] = 2;
		
	}else if(product[3][3] == 2 && product [1][1] == 2 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [1][3] == 2 && product[3][1]==0){ //diagonal
	
		product[3][1] = 2;
		
	}else if(product[2][2] == 2 && product [3][1] == 2 && product[1][3]==0){ //diagonal
	
		product[1][3] = 2;
		
	}else if(product[3][1] == 2 && product [1][3] == 2 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [2][1] == 2 && product[2][3]==0){ //row 2 horizontal
	
		product[2][3] = 2;
		
	}else if(product[2][1] == 2 && product [2][3] == 2 && product[2][3]==0){ //row 2 horizontal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [2][3] == 2 && product[2][1]==0){ //row 2 horizontal
	
		product[2][1] = 2;
		
	}else if(product[2][2] == 2 && product [1][2] == 2 && product[3][2]==0){ //col 2 vertical
	
		product[3][2] = 2;
		
	}else if(product[1][2] == 2 && product [3][2] == 2 && product[2][2]==0){ //col 2 vertical
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 2 && product [3][2] == 2 && product[1][2]==0){ //col 2 vertical
	
		product[1][2] = 2;
		
	}else if(product[2][1] == 2 && product [1][1] == 2 && product[3][1]==0){ // col 1 vertical
	
		product[3][1] = 2;
		
	}else if(product[1][1] == 2 && product [3][1] == 2 && product[2][1]==0){ // col 1 vertical
	
		product[2][1] = 2;
		
	}else if(product[2][1] == 2 && product [3][1] == 2 && product[1][1]==0){ // col 1 vertical
	
		product[1][1] = 2;
		
	}else if(product[2][3] == 2 && product [1][3] == 2 && product[3][3]==0){ // col 3 vertical
	
		product[3][3] = 2;
		
	}else if(product[1][3] == 2 && product [3][3] == 2 && product[2][3]==0){ // col 3 vertical
	
		product[2][3] = 2;
		
	}else if(product[2][3] == 2 && product [3][3] == 2 && product[1][3]==0){ // col 3 vertical
	
		product[1][3] = 2;
		
	}else if(product[1][2] == 2 && product [1][1] == 2 && product[1][3]==0){ // row 1 horizontal
	
		product[1][3] = 2;
		
	}else if(product[1][1] == 2 && product [1][3] == 2 && product[1][2]==0){ // row 1 horizontal
	
		product[1][2] = 2;
		
	}else if(product[1][2] == 2 && product [1][3] == 2 && product[1][1]==0){ // row 1 horizontal
	
		product[1][1] = 2;
		
	}else if(product[3][2] == 2 && product [3][1] == 2 && product[3][3]==0){ // row 3 horizontal
	
		product[3][3] = 2;
		
	}else if(product[3][2] == 2 && product [3][3] == 2 && product[3][1]==0){ // row 3 horizontal
	
		product[3][1] = 2;
		
	}else if(product[3][3] == 2 && product [3][1] == 2 && product[3][2]==0){ // row 3 horizontal
	
		product[3][2] = 2;
		
		
		
		
		
		//BLOCKS player 1 from winning
		
		
		
		
		
	}else if(product[2][2] == 1 && product [1][1] == 1 && product[3][3]==0){ //diagonal
	
		product[3][3] = 2;
		
	}else if(product[2][2] == 1 && product [3][3] == 1 && product[1][1]==0){ // diagonal
	
		product[1][1] = 2;
		
	}else if(product[3][3] == 1 && product [1][1] == 1 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [1][3] == 1 && product[3][1]==0){ //diagonal
	
		product[3][1] = 2;
		
	}else if(product[2][2] == 1 && product [3][1] == 1 && product[1][3]==0){ //diagonal
	
		product[1][3] = 2;
		
	}else if(product[3][1] == 1 && product [1][3] == 1 && product[2][2]==0){ // diagonal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [2][1] == 1 && product[2][3]==0){ //row 2 horizontal
	
		product[2][3] = 2;
		
	}else if(product[2][1] == 1 && product [2][3] == 1 && product[2][3]==0){ //row 2 horizontal
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [2][3] == 1 && product[2][1]==0){ //row 2 horizontal
	
		product[2][1] = 2;
		
	}else if(product[2][2] == 1 && product [1][2] == 1 && product[3][2]==0){ //col 2 vertical
	
		product[3][2] = 2;
		
	}else if(product[1][2] == 1 && product [3][2] == 1 && product[2][2]==0){ //col 2 vertical
	
		product[2][2] = 2;
		
	}else if(product[2][2] == 1 && product [3][2] == 1 && product[1][2]==0){ //col 2 vertical
	
		product[1][2] = 2;
		
	}else if(product[2][1] == 1 && product [1][1] == 1 && product[3][1]==0){ // col 1 vertical
	
		product[3][1] = 2;
		
	}else if(product[1][1] == 1 && product [3][1] == 1 && product[2][1]==0){ // col 1 vertical
	
		product[2][1] = 2;
		
	}else if(product[2][1] == 1 && product [3][1] == 1 && product[1][1]==0){ // col 1 vertical
	
		product[1][1] = 2;
		
	}else if(product[2][3] == 1 && product [1][3] == 1 && product[3][3]==0){ // col 3 vertical
	
		product[3][3] = 2;
		
	}else if(product[1][3] == 1 && product [3][3] == 1 && product[2][3]==0){ // col 3 vertical
	
		product[2][3] = 2;
		
	}else if(product[2][3] == 1 && product [3][3] == 1 && product[1][3]==0){ // col 3 vertical
	
		product[1][3] = 2;
		
	}else if(product[1][2] == 1 && product [1][1] == 1 && product[1][3]==0){ // row 1 horizontal
	
		product[1][3] = 2;
		
	}else if(product[1][1] == 1 && product [1][3] == 1 && product[1][2]==0){ // row 1 horizontal
	
		product[1][2] = 2;
		
	}else if(product[1][2] == 1 && product [1][3] == 1 && product[1][1]==0){ // row 1 horizontal
	
		product[1][1] = 2;
		
	}else if(product[3][2] == 1 && product [3][1] == 1 && product[3][3]==0){ // row 3 horizontal
	
		product[3][3] = 2;
		
	}else if(product[3][2] == 1 && product [3][3] == 1 && product[3][1]==0){ // row 3 horizontal
	
		product[3][1] = 2;
		
	}else if(product[3][3] == 1 && product [3][1] == 1 && product[3][2]==0){ // row 3 horizontal
	
		product[3][2] = 2;
		
	}else{
		
		while(aiCount != count){
		

	
			if(product[aiRow][aiCol] == 0){
 				product[aiRow][aiCol] = 2;
 				aiCount++;
 		
 			break;
	 		}else{
	 			aiRow = rand() % 3 +1;
				aiCol = rand() % 3 + 1;
	 		}
	 
		}	
		
	}
	
	
	for (int row{ 1 }; row <= numRows; ++row)
    {
        for (int col{ 1 }; col <= numCols; ++col)
        {
            cout << product[row][col] << '\t';
        }
 
        cout << '\n';
    }
    
    //checks if the computer won
	
	if(product[1][1]== 2 &&product[1][1]==product[1][2] && product[1][2] == product[1][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[2][1]== 2 &&product[2][1]==product[2][2] && product[2][2] == product[2][3]){
    	end = true;
    	cout<< "Hee Hee Hee Haw. The Computer Beat You";
    	break;
	}
	if(product[3][1]== 2 &&product[3][1]==product[3][2] && product[3][2] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1]== 2 &&product[1][1]==product[2][1] && product[2][1] == product[3][1]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][2]== 2 &&product[1][2]==product[2][2] && product[2][2] == product[3][2]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][3]== 2 && product[1][3]==product[2][3] && product[2][3] == product[3][3]){
    	end = true;
	cout<< "Hee Hee Hee Haw. The Computer Beat You";
	    	break;
	}
	if(product[1][1] == 2 && product[1][1]==product[2][2] && product[2][2] == product[3][3]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
	if(product[1][3] == 2 && product[1][3]==product[2][2] && product[2][2] == product[3][1]){
		end = true;
		cout << "Hee Hee Hee Haw. The Computer Beat You";
		break;
	}
	
	
}
}


int main(){
	
	bool loop = true;
	int replay;

	while(loop == true){
		
	
     int game;
     bool start = false;
     
     cout << "Would you like to play 2 player or against the computer?"<<endl;
     cout << "Type 2 for two player. Type 1 to play the computer"<< endl;
     cin >> game;
     system("cls");
     
     while(start == false){
	 
     if(game == 2 ){
     	
     	twoPlayer();
     	break;
     	
	 }else if(game == 1){
	 	
	 	int difficulty;
	 	cout<<"What Difficulty (1 easy, 2 Medium, 3 Hard): ";
	 	cin >> difficulty;
	 	
	 	if(difficulty == 1){
	 		
	 		AIGameEasy();
	 		
		 }else if(difficulty == 2){
		 	
		 	AIGameMedium();
		 	
		 }else if(difficulty == 3){
		 	
		 	AIGameHard();
		 	
		 }else {
		 	
		 	cout << "Invalid Input, please Try again";
		 	main();
		 	
		 }
	 	
	 
	 break;
	 
	 }else{
	 	cout << "Invalid Input" << endl;
	 	
	 }
}
	
     cout << endl << "Want to play again?"<< endl;
     cout << "Press 0 to play again. Press 1 to end the game." << endl;
     cin >> replay;
     
     if(replay == 0){
     	loop = true;
     	system("cls");
     	
	 }else{
	 	loop = false;
	 	system("cls");
	 	cout << "Thanks for playing";
	 }
}
	 
 
 
    return 0;
}

 
