#include <iostream>
#include <fstream>
using namespace std;

void checkboth(string word, string other);
void checkwinner(string word,string other);

int main(){
        int numberofplays=0,numberofinputs=0,roundsplayed=0;
        string word1,word2,wordone,wordtwo;
        char ansone,anstwo,stillwannaplay;//answer to yes or no questions
        fstream getone("player1.in");
        fstream gettwo("player2.in");
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
           					 cout <<"Player one chose : "<<word1 <<" Player two chose : " << word2 <<endl;
						checkboth(word1,word2);

            					checkwinner(word1,word2);						
                                                
						
			
       		        	 	}else {
						cout<<"Boohoo. \n";
						cin.get();
 		               		}
				
				}
		}while(roundsplayed<numberofplays);
	//}while(stillwannaplay='y');
}


void checkboth(string word,string other){
	if(word=="rock"){
		if(other=="scissor"){
                        
			cout<<"\n         _______"; cout<<"                   _______";
           		cout<<"\n      ---'   ____)";cout<<"             ____(____   '---";
           		cout<<"\n            (_____)";cout<<"           (_______";
	   		cout<<"\n            (______)";cout<<"         (__________";
	   		cout<<"\n    VK      (____)";cout<<"                (____)";
	   		cout<<"\n      ---.__(___)";cout<<"                  (___)__.----\n";
		
		}else if(other=="paper"){
			
			cout<<"\n         _______"; cout<<"                   _______";
           		cout<<"\n      ---'   ____)";cout<<"             ____(____   '---";
           		cout<<"\n            (_____)";cout<<"           (_______";
	   		cout<<"\n            (______)";cout<<"         (_______";
	   		cout<<"\n    VK      (____)";cout<<"            (_______";
	   		cout<<"\n      ---.__(___)";cout<<"                 (_________.----\n";
		
		}else if(other==word){
			
			cout<<"\n         _______"; cout<<"                   _______";
           		cout<<"\n      ---'   ____)";cout<<"                 (____   '---";
           		cout<<"\n            (_____)";cout<<"               (_____)";
	   		cout<<"\n            (______)";cout<<"             (______)";
	   		cout<<"\n    VK      (____)";cout<<"                (_____)";
	   		cout<<"\n      ---.__(___)";cout<<"                  (____)__.----\n";
		
		} else {
			cout<<"One or more of your inputs are invalid.\n";
			cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
			cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
			cout<<"Thank you.";
		}
        }else if(word=="scissors"){
		
		if(other=="rock"){
			cout<<"                    ";
			cout<<"\n         _______"; cout<<"                          _____";
           		cout<<"\n      ---'   _____)____";cout<<"                 __/__   '---";
           		cout<<"\n                 ______)";cout<<"               (_____)";
	   		cout<<"\n              __________)";cout<<"             (______)";
	   		cout<<"\n             (____)";cout<<"                    (_____)";
	   		cout<<"\n       ---.__(___)";cout<<"                      (____)__.----\n";
		
		}else if(other=="paper"){
			cout<<"\n         _______"; cout<<"                        _______";
           		cout<<"\n      ---'   ____)____";cout<<"              __ _(____   '---";
           		cout<<"\n                 ______)";cout<<"           (_______";
	   		cout<<"\n              __________)";cout<<"         (_______";
	   		cout<<"\n             (____)";cout<<"                (_______";
	   		cout<<"\n       ---.__(___)";cout<<"                     (_________.----\n";
		}else if(other==word){
			cout<<"\n         _______"; cout<<"                        _______";
           		cout<<"\n      ---'   ____)_____";cout<<"             ____(____   '---";
           		cout<<"\n                 ______)";cout<<"           (_______";
	   		cout<<"\n              __________)";cout<<"         (__________";
	   		cout<<"\n             (____)";cout<<"                   (____)";
	   		cout<<"\n      ---.___(___)";cout<<"                     (___)__.----\n";
		
		}else {
			cout<<"One or more of your inputs are invalid.\n";
			cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
			cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
			cout<<"Thank you.";
		}
	}else if(word=="paper"){   
		if(other=="scissor"){
			cout<<"\n          _______"; cout<<"                         _______";
           		cout<<"\n      ---'   ____)____";cout<<"               ____(____   '---";
           		cout<<"\n                ______)";cout<<"            (_______";
	   		cout<<"\n                _______)";cout<<"          (__________";
	   		cout<<"\n               _______)";cout<<"                  (____)";
	   		cout<<"\n      ---._________)";cout<<"                      (___)__.----\n";
		
		}else if(other=="rock"){
			cout<<"\n         _______"; cout<<"                          _____";
           		cout<<"\n      ---'   ____)____";cout<<"                 __/__   '---";
           		cout<<"\n                ______)";cout<<"               (_____)";
	   		cout<<"\n                _______)";cout<<"             (______)";
	   		cout<<"\n               _______)";cout<<"               (_____)";
	   		cout<<"\n      ---._________)";cout<<"                   (____)__.----\n";
		}else if(other==word){
			cout<<"\n         _______"; cout<<"                           _______";
           		cout<<"\n      ---'   ____)____";cout<<"                 ____(____   '---";
           		cout<<"\n                ______)";cout<<"               (______";
	   		cout<<"\n                _______)";cout<<"             (_______";
	   		cout<<"\n               _______)";cout<<"               (_______";
	   		cout<<"\n      ---._________)";cout<<"                    (_________.----\n";
		} else {
			cout<<"One or more of your inputs are invalid.\n";
			cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
			cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
			cout<<"Thank you.";
		}
	} else {
		cout<<"One or more of your inputs are invalid.\n";
		cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
		cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
		cout<<"Thank you.";

	}

}


void checkwinner (string word, string other){
                   cout<<word<<" vs "<<other<<endl<<endl;
}