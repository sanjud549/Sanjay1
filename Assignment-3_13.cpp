#include<iostream>
using namespace std;
class team1
{
int score;
float overs;
public:
team1(int s ,float o){

score=0;
overs=0;
}
float runrate()
{
return (score/overs);
}
};
class team2
{
int winscore;
float overs;
public:
team2(int s,float o)
{
winscore=s;
overs=o;
}
float (int s,float o)
{
return (winscore-s/overs-0);
}
};
int main()
{
int score1, score2;
float overs1,overs2;
cout<<"r the score of vteam1";
cin>>score1;
cout<<"enter the oers played by team 1";
cin>>overs1;
team1 t1 (score1,overs1)
float rr1=t1.runrate();
cout<<"runrate of team1 is"<<overs2;
team2 t2(score1,overs);
float overs2=0;
int overs2=0;
while(score2<score1|| overs2!=250)
{
cout<<"enter no overs of team2";
cin>>overs2;
cout<<"enter score of team2";
cin>>score2;
if(score2<score1 &&overs2<250)
{
float rr1=t2.runrate(score2,overs2);
float reqr2= t2.runrate(score2,overs2);
cout<<"runrate of team2 is ";
cout<<"requird runrate of team2"<<reqr2;
}
else if(score2>score1)
{
cout<<"team is won";
break ;
}
else
{
cout<<"team1 is won";
break ;
}
}
return 0;
}

