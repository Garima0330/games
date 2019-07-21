# include<iostream>
# include<string>
# include<cstdlib>
# include<ctime>
# include<conio.h>

using namespace std;
int main()
{
	
	char a,replay;
	cout<<"what did you want to play?\na) Guess number\nb) Stone , Paper and Scissor game "<<endl;
	cin>>a;
	switch (a)
	{
	
	case 'a':{
              int num,guess,tries=0;
              start:
              system("color FC");
	           srand(time(0));
	           num=rand() % 100 + 1;
              cout << "                                               GUESSING NUMBER GAME \n\n";
               cout <<"                     INSTRUCTIONS"<<endl;
               cout<< " 1> The user has to choose a number between 1 to 100 .\n 2>The computer compares your guess with the random number it has choosen .\n 3> If your guess is higher than the computer's value it print high viceverse until you guess correctly . \n 4> If you guess correctly it print you win \n5> If you want to play again press yes or no "<<endl;

	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	cout<<"DO YOU WANT TO PLAY AGAIN YES/NO"<<endl;
	cin>>replay;
	if(replay=='YES'||replay=='yes')
	{ system("cls");
	  goto start;
	}
	else if (replay =='NO'||replay=='no')
	{
	exit(0);
   }
	
          }
	break; //STONE PAPER AND SCISSOR

	case 'b': system("color 3F ");
	 char ch;
    int win = 0;
    int tie = 0;
    int lose = 0;
     do{
    int choice;    
    cout <<                                             "-- Lets play Stone, Paper, Scissors! --" << endl;   
    cout<<"INSTRUCTIONS"<<endl;
    cout<<"Choose "
    cout<<" WH@T YOU CHOOSE TO WIN"<<endl;
    cout << "Press 1 for Stone\n 2 for Paper\n 3 for Scissors:" << endl;
    cin >> choice;
    int ai = rand() % 3 + 1;      //ai=computer
    cout <<  "The computer chose:........... " << ai << endl;
    if(choice == 1 && ai == 1)
	     {
         cout << "Stone  Stone its a tie!" << endl;
         tie++;
         }
    else if(choice ==1 && ai== 2)
	     {
         cout << "Stone is covered by Paper the computer wins!." << endl;
         lose++;
         }
    else if(choice == 1 && ai == 3){
         cout << "Rock crushes Scissors you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 1){
         cout << "Paper covers Stone you win!" << endl;
         win++;
         }
    else if(choice == 2 && ai == 2){
         cout << "Paper meets Paper its a tie!" << endl;
         tie++;
         }
    else if(choice == 2 && ai == 3){
         cout << "Paper is cut by Scissors the computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 1){
         cout << "Scissors are crushed by Rock computer wins!" << endl;
         lose++;
         }
    else if( choice == 3 && ai == 2){
         cout << "Scissors cuts Paper you win!" << endl;
         win++;
         }
    else if(choice == 3 && ai == 3){
         cout << "Scissors meet Scissors its a tie!" << endl;
         tie++;
         }
      
    else{
         cout << "You didn't select 1, 2, or 3" << endl;
         }
        
         cout << "Wins: " << win << endl;
         cout << "Ties:" << tie << endl;
         cout << "Losses:" << lose << endl;
         cout << "Would you like to play again? Y/N" << endl;
         cin >> ch;
         system("CLS");
         }while(ch == 'Y' || ch == 'y');
         return 0;
    
}
}       
