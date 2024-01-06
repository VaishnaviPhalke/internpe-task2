#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int user=0,computer=0;
    cout<<"rock paper scissor game"<<endl;
    cout<<"1.rock"<<endl;
    cout<<"2.paper"<<endl;
    cout<<"3.scissor"<<endl;
    cin>>user;
// **********user choice************
    if (user==1)
    {
     cout<<"you chose rock\n";
    }
    else if (user==2)
    {
     cout<<"you chose paper\n";
    }
    else 
    {
     cout<<"you chose scissor\n";
    }
    
// **********computers choice************
    computer=rand()%3+1;
    if (computer==1)
    {
        cout<<"computer choses rock\n";
    }
    else if (computer==1)
    {
        cout<<"computer choses paper\n";
    }
    else
    {
        cout<<"computer choses scissor\n";
    }

// **********chosing winner************
    if(user==computer)
    {
        cout<<"match tie"<<endl;
    }
    // when user=1
    else if(user==1)
    {
        if(computer==2)
        {
            cout<<"you lose"<<endl;
        }
        if(computer==3)
        {
            cout<<"you win"<<endl;
        }
    }
    // when user=2
     else if(user==2)
    {
        if(computer==1)
        {
            cout<<"you win"<<endl;
        }
        if(computer==3)
        {
            cout<<"you lose"<<endl;
        }
    }
    // when user=3
     else if(user==3)
    {
        if(computer==1)
        {
            cout<<"you lose"<<endl;
        }
        if(computer==2)
        {
            cout<<"you win"<<endl;
        }
    }
    return 0;
    getch();
}