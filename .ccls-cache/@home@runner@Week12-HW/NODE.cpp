#include<iostream>
using namespace std;
#include"NODE.h"
#include"Monster.h"

NODE::NODE(int x)
{
  data=x;
  next=NULL;
  cout<< "adding "<< x <<endl;
}
NODE:: ~NODE()
{
  cout<<"Node "<<data<<" is being deleted"<<endl;
}

NODE* NODE::move_next()
{
  return next;
}
void monster:: show_node()
{
  cout<<"Monster : "<<name;
  cout<<" Hp : "<<hp;
  cout<<" Potion : "<<potion<<endl;
}
void NODE::insert(NODE*& x)
{
  x->next=this; //t->next=hol;
}

monster::monster(string NAME , int HP, int POTION)
{
  name = NAME;
  hp = HP;
  potion = POTION;
  cout << "name :"<<name << "\nhp:" << hp << "\npotion :"<<potion<<"\n"<< "=============" << endl; 
}