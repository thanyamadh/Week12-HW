#include<iostream>
#include<cstdlib>
using namespace std;
#include"Monster.h"
#include"LL.h"

int main(int argc, char *argv[])
{  
  LL A; //Linked List =>constructor L.hol=NULL L.size=0
  int i,atk=0; 
  monster *t;
  monster boss("BigBosslnwza007",1000,50);
  boss.show_node();
  for(i=1;i<argc;i=i+3) 
  {
    t=new monster(argv[i],atoi(argv[i+1]),atoi(argv[i+2])); //constructor
    A.add_node(t);//add front of linked List + size++
  }
  //A.atk_All(boss);                 
  A.show_all();
  //system("PAUSE");
  atk= A.atk_all();
  boss.HP(atk);
  cout<<"After"<<endl;
  boss.show_node();
  return 0;
}

