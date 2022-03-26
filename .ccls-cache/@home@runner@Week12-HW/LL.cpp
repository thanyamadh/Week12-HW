#include<iostream>
using namespace std;
#include"Monster.h"
#include"LL.h"


LL::LL()
{
  hol=NULL;
  size=0;
}

LL::~LL()
{
  //clear all nodes
  monster* t = hol;
  monster* temp = t;
  int i;
  for(i=0;i<size;i++)
  {
    temp = t;            
    t = t->move_next();
    delete temp;
  }
  size=0;
}

void LL::show_all()
{
  monster* t=hol;
  int i;
  cout<<"\n*** Baby monters list ***"<<endl;
  for(i=0;i<size;i++)
  {
    t->show_node();
    t = t->move_next();
  }
}

void LL::add_node(monster *&A)
{
  hol->insert(A);// new_node->next=hol;
  hol=A;
  size++;
}

int LL:: atk_all() //ทุกตัวโจมตีบอส
{
  int i,pt_all=0;
  monster* mon = hol;
  for(i=0;i<size;i++)
  {
    pt_all=pt_all + mon->atk_all() ;
    mon = mon->move_next();
  }
  return pt_all;
}

void LL:: monster_atk(int dm_boss,monster *&x) //บอสตีทุกตัว
{
  int i;
  monster* mon = hol;
  dm_boss=dm_boss;
  mon->monster_atk(x,dm_boss);
}
