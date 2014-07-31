/*ALGORITHM

1.Create a MAIN MENU
2.CREATE a ROCK PAPER SCISSORS GAME
3.Create a riddle taker


1. MAIN MENU
	consists of :
		1. Play
		2. Rules
		3. Quit
*/
#include <iostream>
using namespace std;
void game(){
	int numberofplays;
	cout <<"THIS IS A WAR BETWEEN FISTS!\n"; cin.get();
        cout <<"           BEGIN!           \n"; cin.get();
	cout <<"How many times are you guys gonna play?\n"; cin.get();
        cin>>numberofplays;
}
void rules(){}
int main(){
        int mainmenuanswer;
        bool answervalid;
	cout<<"                       **********\n";
	cout<<"                       * Hello! *\n";
        cout<<"                       **********\n\n";
        cout<<"                   Press the enter key \n";
        cout<<"                     for every pause\n";
        cout<<"                       in the game\n";
	cin.get();
	cout<<"             *******************************\n";
        cout<<"             *     This is the main menu   *\n";
        cout<<"             *******************************\n";
        cout<<"             *******************************\n";
        cout<<"             * Choose a number from below. *\n";
        cout<<"             *******************************\n";
	cout<<"             *          1.Play             *\n";
        cout<<"             *          2.Rules            *\n";
        cout<<"             *          3.Quit             *\n";
        cout<<"             *******************************\n";
       	cout<<"             *******************************\n";
        cout<<"             ";
        cin >>mainmenuanswer;
       
	while(!answervalid){
	                 if(mainmenuanswer==1){
				game();
               		 	answervalid=1;
        		}
		        else if(mainmenuanswer==2){
  				rules;
				answervalid=1;
        		}
        		else if(mainmenuanswer==3){
				cout<<"Fine. Whatever.\n";
                		return 0;
       			 }else if(!answervalid){
                		cout<<"There are only three numbers that could be seen from above.\n"; cin.get();
                		cout<<"Do you think that what you've just entered is one of those?\n"; cin.get();
                		cout<<"Huh. Funny. Try again.\n";
                		cin >>mainmenuanswer;  
        		}
	}
}