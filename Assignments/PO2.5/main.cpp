#include "blackjack.hpp"
#include <time.h>

using namespace std;

Player player;
Player dealer;



Hand H1,H2;
void hit();
void split();
void doubledown();
void stand();
void showdeck();

int dealertotal,playertotal;
Card c1,c2,c3,c4;

int main() {
    srand(time(0));
    
    char choice;
player=Player("Alexia",1000,100);
dealer=Player("Tukaram",500,100);

   // H.Add(new Card(rand()%52 + 1));
    c1=Card(random()%52);
    c2=Card(random()%52);
    H1.Add(&c1);
   // H1.Add(&c1);

  dealertotal=c1.getValue()+c2.getValue();
    //H1.Add(&c2);

    //cout<<"Card 1 = "<<c1.getValue()<<endl;
    //cout<<"Card 2 = "<<c2.getValue()<<endl;
    
    
    cout<<"Dealer"<<endl;
    cout<<H1<<endl;
    cout<<"┌────┐"<<endl;
    cout<<"│ // │"<<endl;
    cout<<"└────┘"<<endl;

    //cout<<"Dealer Total :"<<dealertotal;

    c3=Card(random()%52);
    c4=Card(random()%52);
    H2.Add(&c3);
    H2.Add(&c4);
    

  //  cout<<"\n\nCard 3 = "<<c3.getValue()<<endl;
  //  cout<<"Card 4 = "<<c4.getValue()<<endl;
    
    cout<<"\nPlayer"<<endl;
    cout<<H2<<endl;
    playertotal=c3.getValue()+c4.getValue();
    cout<<"Player Total :"<<playertotal;

if(playertotal>21)
{
cout<<"\nPlayer Lost The Game!"<<endl;
exit(0);
}
if(playertotal==21)
{
    cout<<"\nPlayer wins with BLACKJACK !"<<endl;
    exit(0);
}  
else
{
  while(1)
  {
    cout<<"\n\nH -> Hit\nP -> Split\nD -> Double Down\nS -> Stand\n? -> Show Deck\nQ -> Quit";
    cout<<"\nYour Choice : ";
    cin>>choice;

    switch(choice)
    {
       case 'H': 
               hit();
               break;

       case 'S': stand();
               break;


      case 'P': split();
               break;


       case 'D':
               doubledown();
               break;

       case '?':
               showdeck();
               break;

      case 'Q':exit(0); break;
    }

   } 
}

}


void hit()
{
  cout<<"Hit"<<endl;
  Card c5=Card(random()%52);
  H2.Add(&c5);
  cout<<H2<<endl;
  
  playertotal=playertotal+c5.getValue();
  cout<<"\nSUM = "<<playertotal;
  if(playertotal>21)
  {
    cout<<"\nPlayer Lost the game"<<endl;
    exit(0);
  }
}

void split()
{
  cout<<"Split"<<endl;  

}

void doubledown()
{
  cout<<"Double Down"<<endl;
  player.doubleDown();
  cout<<"The amount of Bet is Doubled now"<<endl;
  cout<<"Bet Amount is = $"<<player.getBet()<<endl;
}

void stand()
{
  cout<<"Stand"<<endl;
  showdeck();
}

  void showdeck(){
      system("clear");
      cout<<"DECK\n_____________\n"<<endl;
      cout<<"DEALER"<<endl;
      H1.Add(&c2);
      cout<<H1<<endl;
      dealertotal=c1.getValue()+c2.getValue();
      cout<<"DEALER SUM ="<<dealertotal<<endl;

      cout<<"PLAYER"<<endl;
      cout<<H2<<endl;

      cout<<"PLAYER SUM ="<<playertotal<<endl;
    
  if(dealertotal>playertotal)
  {
    cout<<"\nDealer Wins!"<<endl;
    cout<<"\nPlayer Balance : "<<player.getBalance();
  }
  else   
  {
 
   if(playertotal==21)
    {
      cout<<"\nCongrats!\nPlayer Wins with BLACKJACK!"<<endl;
  
    }
    else
    {
    cout<<"\nPlayer Wins!"<<endl;
    int betamount=player.getBet();
    double amountwon=betamount*2.5;
    cout<<"\nBet Amount - $"<<player.getBet()<<endl;
    cout<<"\nAmount Won - $"<<amountwon<<endl;
    player.addWinningAmount(amountwon);
    cout<<"Player Balance :  "<<player.getBalance()<<endl;
    exit(0);
    }
  }

  }




