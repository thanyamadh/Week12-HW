#include<iostream>
using namespace std;
#include"Monster.h"

monster::monster(string n , int Hp, int pt) //สร้างmonที่จะเพิ่ม
{
  name = n;
  hp = Hp;
  potion = pt;
  next=NULL;
  cout<< "Adding monster : "<< name <<" HP "<< hp <<" Potion "<< potion <<endl;
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
  cout<< "monster : "<< name <<" hp "<< hp <<" potion "<< potion <<endl;
}

void monster::insert(monster*& x) //เพิ่มmon
{
  x->next=this; //t->next=hol;
}

int monster:: atk_all() //ทุกตัวโจมตีบอส
{
  return potion;
}

void monster:: HP(int x)
{
  hp = hp-x;
}

