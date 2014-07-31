#include<iostream>

using namespace std;
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


int main(){
	string move,other;
	cin >>move;
        cin>>other;
	cout<<"We're checking.\n"; 
	cin.get();
	checkboth(move,other);

}

/*















	if(other=="scissors"){
		cout <<"scissors";
		cout<<"\nPlayer two chose: \"SCISSOR\"!\n";
	               cin.get();
                cout<<"         _______\n";
		cout<<"    ____(____   '---\n";
		cout<<"   (_______\n";
		cout<<"  (__________\n";
		cout<<"       (____)\n";
		cout<<"        (___)__.----\n";
	else if(other=="rock"){;
		cout<<"\nPlayer two chose: \"ROCK\"!\n";
           	cin.get();
           	cout<<"         _______\n";
		cout<<"        (____   '---\n";
		cout<<"       (____)\n";
		cout<<"      (______)\n";
		cout<<"       (____)\n";
		cout<<"        (___)__.----\n";
	}
	else if(other=="paper"){
		cout<<"paper";	
		cout<<"\nPlayer two chose: \"PAPER\"!\n";
         	  cin.get();
          	cout<<"         _______\n";
		cout<<"    ____(____   '---\n";
		cout<<"   (_______\n";
		cout<<"  (_______\n";
		cout<<"   (_______\n";
		cout<<"        (______.----\n";
	}else{
		cout<<"One or more of your inputs are invalid.\n";
		cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
		cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
		cout<<"Thank you.";
	 }
     
}
/*
cout<<"         _______\n";
cout<<"    ____(____   '---\n";
cout<<"   (_______\n";
cout<<"  (__________\n";
cout<<"       (____)\n";
cout<<"        (___)__.----\n";


cout<<"         _______\n";
cout<<"        (____   '---\n";
cout<<"       (____)\n";
cout<<"      (______)\n";
cout<<"       (____)\n";
cout<<"        (___)__.----\n";

cout<<"         _______\n";
cout<<"    ____(____   '---\n";
cout<<"   (_______\n";
cout<<"  (_______\n";
cout<<"   (_______\n";
cout<<"        (______.----\n";

void checkkind(string word){
   
	if(word=="scissors"){
		cout <<"scissors";
		cout<<"\nPlayer one chose: \"SCISSOR\"!\n";
	               cin.get();
                cout<<"\n          _______";
                cout<<"\n       ---'   ____)____";
 	        cout<<"\n                 ______)";
	        cout<<"\n              __________)";
    	   	cout<<"\n             (____)";
	   	cout<<"\n       ---.__(___)\n";
	}
	else if(word=="rock"){;
		cout<<"\nPlayer one chose: \"ROCK\"!\n";
           	cin.get();
           	cout<<"\n         _______";
           	cout<<"\n      ---'   ____)";
           	cout<<"\n            (_____)";
	   	cout<<"\n            (______)";
	   	cout<<"\n    VK      (____)";
	   	cout<<"\n      ---.__(___)\n";
		
	}
	else if(word=="paper"){
		cout<<"paper";	
		cout<<"\nPlayer one chose: \"PAPER\"!\n";
         	  cin.get();
          	cout<<"\n          _______\n";
           	cout<<"\n      ---'   ____)____";
         	cout<<"\n                ______)";
           	cout<<"\n                _______)";
           	cout<<"\n               _______)";
           	cout<<"\n    ---.__________)\n";
	}else{
		cout<<"One or more of your inputs are invalid.\n";
		cout<<"The three words (scissors rock paper) are the only valid inputs for this game.\n";	
		cout<<"Please revise your input files and check back when you've complied with our conditions.\n";
		cout<<"Thank you.";
	 }
     
}*/
