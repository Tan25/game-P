#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int n=0,rn, l;
string line,lines[10],finanswer;
void riddle(int n, string &finanswer){
  fstream get("tc.in");
  string answer;
  while(get>>rn>>l){
    if(rn!=n) {
      for(int i=0;i<l;i++){
        getline(get,line);
        get>>answer;
      }
      
    }else{
      for(int i=0;i<l;i++){
        getline(get,line);
        lines[i]=line;
         
      }
       get>>answer;
       finanswer=answer;
       for(int i=0;i<l;i++){
           cout <<lines[i]<<endl;
       }
    } 
  }
}

void game(){
   vector <int> riddles;
   int flag=0;
   string Uans;
   fstream get("tc.in");
   fstream get1("player1.in");
   fstream get2("player2.in");
   fstream get0("player1.in");
   fstream get01("player1.in");
   int one=0,two=0,draw=0,final,i=0,times,player=0;
   char p1, p2;
   string word1,word2,playerone,playertwo,winner,nowinner;
   cout <<"THIS IS A WAR BETWEEN FISTS!\n"; cin.get();
   cout <<"           BEGIN!           \n"; cin.get();

  do{ 
   do{
      
      cout <<"Please decide on how many times you would like to play.\n";
      cin>>times;
      while((get0>>word1)&&(get01>>word2)){i++;}
      if(i<=times){ final=1;}
      while(!final){
         cout <<"Please redecide on how many times you would like to play.\n";
         cout<<"or just add more answers to your input files.\n";
         cin>>times;
      }
      i=0;
      cout <<"Are you ready?\n(Y/N)\n";
      cin>>p1>>p2;
      for(int j=0;j<times;j++){
      if((p1=='Y'|| p1=='y') && (p2=='Y'|| p2=='y')){
        
        get1>>playerone; 
       
        get2>>playertwo;
        if(playerone=="rock"){
           
           cout<<"ROUND"<<i<<endl;
           cin.get();
           cout<<"\nPlayer one chose: \"ROCK\"!\n";
           cin.get();
           cout<<"\n         _______";
           cout<<"\n      ---'   ____)";
           cout<<"\n            (_____)";
	   cout<<"\n            (______)";
	   cout<<"\n    VK      (____)";
	   cout<<"\n      ---.__(___)\n";
           if(playertwo=="scissor"){//
               player--;
               one++;
               nowinner="false";
               winner="Player one crushes player two with a rock!";
           }else if(playertwo=="paper"){//
               two++;
               player++;
               nowinner="false";
               winner="Player two raps up player one with a paper!";
           }else if( playertwo==playerone){
               flag=1;
               draw++;
           } else {
               cout<<"Invalid input(s) on file.\n";
           }
        }else if(playerone=="paper"){
           cout<<"ROUND"<<i<<endl;
           cin.get();
           cout<<"\nPlayer one chose: \"PAPER\"!\n";
           cin.get();
           cout<<"\n          _______\n";
           cout<<"\n      ---'   ____)____";
           cout<<"\n                ______)";
           cout<<"\n                _______)";
           cout<<"\n               _______)";
           cout<<"\n    ---.__________)\n";
           if(playertwo=="rock"){
               one++;
               player--;
               nowinner="false";
               winner="Player one raps up player two with a paper!";
           }else if(playertwo=="scissor"){
               two++;
               player++;
               nowinner="false";
               winner="Player two shredds up player one with scissors!";
           }else if(playertwo==playerone){
               flag=1;
               draw++;
           } else {
              cout<<"INVALID input(s) on file.\n";
           }
        }else{//
           cout<<"ROUND"<<i<<endl;
           cin.get();
           cout<<"\nPlayer one chose: \"SCISSOR\"!\n";
           cin.get();
           cout<<"\n          _______";
	   cout<<"\n       ---'   ____)____";
           cout<<"\n                 ______)";
	   cout<<"\n              __________)";
    	   cout<<"\n             (____)";
	   cout<<"\n       ---.__(___)\n";
           if(playertwo=="paper"){//
               one++;
               nowinner="false";
               winner="Player one shredds up player two with scissors!";
               player--;
           }else if(playertwo=="rock"){//
               two++;
               nowinner="false";
               winner="Player two crashes player one with a rock!";
               player++;
           }else if(playertwo==playerone){
               flag=1;
               draw++;
           } else {
               cout<<"Invalid inputs on file.\n";
           }
        }//
     
      
          if(playertwo=="rock"){//
             cin.get();
             cout<<"\nPlayer two chose:\"ROCK!\""<<"!\n";
             cin.get();
             cout<<"\n         _______";
             cout<<"\n      ---'   ____)";
             cout<<"\n            (_____)";
	     cout<<"\n            (______)";
	     cout<<"\n    VK      (____)";
	     cout<<"\n      ---.__(___)\n";
          }else if(playertwo=="paper"){//
             cin.get();
             cout<<"\nPlayer two chose: \"PAPER!\""<<"!\n";
             cin.get();
             cout<<"\n          _______\n";
             cout<<"\n      ---'   ____)____";
             cout<<"\n                ______)";
             cout<<"\n                _______)";
             cout<<"\n               _______)";
             cout<<"\n    ---.__________)\n";

          }else{//
             cin.get();
             cout<<"\nPlayer two chose: \"SCISSOR!\""<<"!\n";
             cin.get();
             cout<<"\n          _______";
	     cout<<"\n       ---'   ____)____";
	     cout<<"\n                 ______)";
	     cout<<"\n              __________)";
  	     cout<<"\n             (____)";
	     cout<<"\n       ---.__(___)\n";
          }
          cout <<endl<<winner<<endl;
          cin.get();
          if(flag){;}else{
            cout<<"Enter a number that has not been entered yet and is not less than zero and not greater than fifty.\n";
            cin>>n;
            for(int h=0;h<riddles.size();h++){
             if(riddles[h]==n){
               cout <<"Please comply with the instructions and enter a valid #:\n";
               cin>>n;
             }
            }
           while(n<0||n>50){
             cout <<"Please comply with the instructions and enter a valid #:\n";
             cin>>n;
           }

           riddle(n,finanswer);
           riddles.push_back(n);
           cin>>Uans;
        
           if(player%2==1){

             if(Uans==finanswer){
                cout <<"You got it!\n";
                one=one;
             } else {
                one--;
             }

           } else if(player%2==0) {

             if(Uans==finanswer){
                cout <<"You got it!\n";
                two=two;
             } else {
                two--;
             }
           }

         
          }

      
          
          cout<<"SCOREBOARD:\nPlayer one: "<<one<< endl<<"Player two: "<<two<<endl;
          cin.get(); 
          i++;
          

        }else{//
              cout<<"What a bummer...You guys are quitting already?\n";
              cin.get();
              return;
        }//
        }
      
     } while(i<times);
        cout<<"Do you guys still want to play?\n(y/n)\n";
        cin>>p1>>p2;
   }while((p1=='Y'|| p1=='y') && (p2=='Y'|| p2=='y'));
    
        cout <<"OKAY. Would you like to see who won the most number of times?\n";
        cin>>p1>>p2;
        if((p1=='Y'|| p1=='y') && (p2=='Y'|| p2=='y')){
          if(i==0){
           cout<<"You guys haven't even played yet...";
          }else{
            cout<<"Player one accumulated "<<one<<" wins over "<< i ;
            if(i<=1)
               cout<<" round.\n";
            else 
               cout<<" rounds.\n";


            cout <<"\nAnd Player two accumulated "<< two<<" wins in return.\n";
            cout<<"That's why...\n";
            cin.get();
             if(one>two){
                cout<<"Player one wins this game!\n";
             } else if (one<two){
                cout<<"Player two wins this game!\n";
             } else{
                cout<<"It's a draw guys!\n";
             }
            }
          } else {
           cout<<"Okay.Whatever.\n";
        }
        
      

      cin.get();
      

}



void rules(){
  
   cout<<"\n\n\nRULES:\n\n"; cin.get();
   cout<<"1. Always use small letters.\n"; cin.get();
   cout<<"2. When prompted to choose from choices preceded by numbers,\n please enter the number which precedes your preferred choice.\n"; cin.get();
   cout<<"3. Whenever met with a pause in the game, press only the enter key.\n";cin.get();
   cout<<"4. Save the file you would be placing your inputs in as either 'player1.in'\n if you are player one";
   cout<<" and 'player2.in' if you are player two.\n";cin.get();
   cout<<"5. Type only either of the three to your input files: scissor paper rock"; cin.get();
   cout<<"\n6. Our Rock, paper, scissors game mechanic's comply with the original mechanics with \nthe added feature of our 'riddle test'.\n";cin.get();
   cout<<"7. The main rule is to answer a riddle givem to you. If you manage to answer it, then you get your point";
   cout<<"  However, failure to do so will merit you a negative";cin.get();cout<<"  point, and will consequently add a point to your opponent's score.\n";cin.get();
   cout<<"~The rules stated above is for you to follow for your own convenience.~\n"; cin.get();
  
   cout<<"\n                   Kapish?";
}
int main(){
   int num;
   cout <<"HELLO!\n";
   cin.get();
   cout<<"Go on and choose from below!\n";
   cin.get();
   cout<<"\n1. Play\n2. Rules\n3.Quit\n\n";
   cin>>num;
   if(num==1){
     game();
   } else if(num==2){
     rules();
   } else {
     cout<<"Yeah. Well, whatever : P.\n";
     cin.get();
     return 0;
   }

}