#include<iostream>
#include<cstdlib>
using namespace std;
#include"Monster.h"
#include"LL.h"

int main(int argc, char *argv[])
{  
  LL A; //Linked List =>constructor L.hol=NULL L.size=0
  int i,atk=0,pt=0; 
  monster *t;
  cout<<"\n===== Welcome to Monster112land =====\n"<<endl;
  cout<<"--- We found some monster.... That's boss!!! ---\n"<<endl;
  monster boss("BigBosslnwza007",1000,100);
  boss.show_node();
  cout<<"\n--- We collect many baby monsters... ---\n"<<endl;
  for(i=1;i<argc;i=i+3) 
  {
    t=new monster(argv[i],atoi(argv[i+1]),atoi(argv[i+2])); //constructor
    A.add_node(t);//add front of linked List + size++
  }       
  
  A.show_all();
  
  cout<<"\n!!! All baby monsters hit boss !!!"<<endl;
  atk= A.atk_all();
  cout<<"<3 All damage is "<<atk<<endl;
  boss.HP(atk);
  pt=boss.dm_boss();
  A.monster_atk(pt,t);
  cout<<"\n--- After fight ---"<<endl;
  boss.show_node();
  if(boss.BosscheckHP()>0)
    cout<<"Boss still alive and warp to another world..."<<endl;
  A.show_all();
  cout<<"All baby monsters that has alive warp to another world to find boss..."<<endl;
  cout<<"\n*** Destructor ***"<<endl;
  return 0;
}

