# Rock_Paper_Scissors_Bot
Rock Paper Scissors with Algorithm

#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
string oyun[3]={"rock","papper","scissors"};
string secim;

cout<<endl;
cout<<"ROCK PAPPER SCISSORS OYUNU"<<endl<<endl;

cout<<"Choose: ";
cin>>secim;

srand(time(0));

int rastgeleIndeks = rand()%3;

string taskagitmakas = oyun[rastgeleIndeks];

cout<<"My Choose: "<<taskagitmakas<<endl;



if (secim=="rock" && taskagitmakas=="papper")
{
    cout<<"You Lose"<<endl;
}
else if (secim=="papper" && taskagitmakas=="rock")
{
    cout<<"You Win"<<endl;
}
else if (secim=="rock" && taskagitmakas=="rock")
{
    cout<<"Draw"<<endl;
}


if (secim=="scissors" && taskagitmakas=="rock")
{
    cout<<"You Lose"<<endl;
}
else if (secim=="scissors" && taskagitmakas=="papper")
{
    cout<<"You Win"<<endl;
}
else if (secim=="scissors" && taskagitmakas=="makas")
{
    cout<<"Draw"<<endl;
}


if (secim=="papper" && taskagitmakas=="scissors")
{
    cout<<"You Lose"<<endl;
}
else if (secim=="papper" && taskagitmakas=="papper")
{
    cout<<"Draw"<<endl;
}

else if (secim=="rock" && taskagitmakas=="scissors")
{
    cout<<"You Win"<<endl;
}

}
