class monster
{
  int hp,potion;
  string name;
  monster* next;
  public:
    monster(string,int=0,int=0);
    void show_node();
    void insert(monster*&);
    int atk_all();
    void HP(int);
    monster* move_next();
    ~monster();
};