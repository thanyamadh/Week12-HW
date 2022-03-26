#include<iostream>
#include <iomanip>
using namespace std;
#include"Monster.h"

monster::monster(string n , int Hp, int pt) //สร้างmonที่จะเพิ่ม
{
  name = n;
  hp = Hp;
  potion = pt;
  next=NULL;
  cout<<setw(-4)<< "Adding monster : "<< name <<" \tHp -> "<< hp<<" potion -> "<< potion <<endl;
}

monster:: ~monster() //ลบmon
{
  cout<<"Monster "<<name<<" is being deleted"<<endl;
}

monster* monster::move_next() //ขยับไปตัวถัดไป
{
  return next;
}

void monster:: show_node() //แสดงmon1ตัว(ตัวที่เลือก)
{
  if(hp<0)
    cout<<setw(-4)<< name <<" \tis already dead..."<<endl;
  else
    cout<<setw(-4)<< "monster  : "<< name <<" \tHp -> "<< hp<<" potion -> "<< potion<<endl;
}

void monster::insert(monster*& x) //เพิ่มmon
{
  x->next=this; //t->next=hol;
}

int monster:: atk_all() //ทุกตัวโจมตีบอส
{
  int atk;
  atk=rand()%potion;
  cout<<name<<" hit boss "<<atk<<" damage"<<endl;
  return atk;
}

void monster:: HP(int x)
{
  hp = hp-x;
}

int monster:: BosscheckHP()
{
  return hp;
}

void monster:: monster_atk(monster*&x , int pt) 
{
  monster* hol=x;
  while(x!=NULL)
  {
    x->hp=x->hp-pt;
    x=x->next;
  }
  x=hol;
}

int monster:: dm_boss()
{
  int atk;
  atk=rand()%potion;
  cout<<"\n!!! Boss hit all baby monsters "<<atk<<" damage !!!"<<endl;
  return atk;
}
