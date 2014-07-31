#include <iostream>
#include <fstream>
using namespace std;
int main(){
        int numberofplays=0,numberofinputs=0,roundsplayed=0;
        string word1,word2,wordone,wordtwo;
        char ansone,anstwo,stillwannaplay;//answer to yes or no questions
        
	fstream determineone("player1.in");
        fstream determinetwo("player2.in");
	cout <<"THIS IS A WAR BETWEEN FISTS!\n"; cin.get();
        cout <<"           BEGIN!           \n"; cin.get();
        cout <<"REMEMBER TO PRESS THE ENTER KEY WHEN MET WITH A PAUSE IN THE GAME.\n";
        cout<<"And to always type in small letters!\n";
        cin.get();
	//do{ 
		 
		cout <<"How many times would you like to play rock,paper,&scissors and consecutively show the results in each round?\n"; 
         	 cin>>numberofplays;
                do{                                                         //determine the number of inputs in both files
                                                                         //numberofinputs will only increment if there are still input(s) in both file
     	
			  	while((determineone>>wordone)&&(determinetwo>>wordtwo)){
					numberofinputs++;
				}
       		 	
        			if (numberofplays>numberofinputs){
					cout <<"Please redecide on how many times you would like to play.\n";
                			cout<<"or just add more answers to your input files.\n";
					cin>>numberofplays;
		
				}else{
                			cout<<"Are you people ready?"; cin.get();
                			cin>>ansone>>anstwo;
                			if((ansone=='y')&& (anstwo=='y')){
						cout<<"YAY!\n";
						getone>>word1;
						gettwo>>word2;
                                                
						
			
       		        	 	}else {
						cout<<"Boohoo. \n";
						cin.get();
 		               		}
				
				}
		}while(roundsplayed<=numberofplays);
	//}while(stillwannaplay='y');
}