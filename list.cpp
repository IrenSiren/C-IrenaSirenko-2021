language = "cpp"
run = "space"
#include <iostream>
#include <string>

using namespace std;

struct Data 
{
  int num;
};

struct List{
  Data d;
  struct List* rest;
};

//Далее old - указатель на начало списка


// takes old list and adress of element 'x' that we want to add to beg
void add2beg(List **old , Data &x)
{
   List *new_list = new List;
   new_list -> d.num = x.num;
   new_list -> rest = *old;
   *old = new_list;
}


//taks old list and new element 'x' to the end 
void add2end(List **old, Data &x)
{
  List *new_list = new List;
  new_list-> d.num = x.num;
  List *t = *old;

  if(*old == 0) // if old one is empty input to beg
  {
      new_list -> rest = 0;
      *old = new_list;
      return;
  }
  else
  {
    t -> rest = new_list; 
  }
  *old = t; 
}


// List *old - указатель на начало списка
void Print(List *old)
{
   List *p = old;
   cout << "Your list:" << endl;
   while(p)
   {
      cout << p->d.num << endl;
      p = p-> rest;
   }
}

// takes list & returns same list (copied)
List copy(List *old )
{
  List *p = old;
  return *p;
}

//takes list, deletes element with the value of given num 'x'
void Delete(List **old, Data &x)
{
   if(*old == 0) //if old is empty
   {
      return;
   }
   else
   {
      List *t = *old;
      if(t->d.num == x.num) //old is niot empty, delete first element
      {
        *old = t->rest;
        delete t;
        return;
      }
      List *t1 = t->rest;
      while(t1)
      {
        if(t1->d.num == x.num)
        // old is not empty, check and delete other elem
        {
            t->rest = t1->rest;
            delete t1;
            return;
        }
        t = t1;
        t1 = t1->rest;
      }
   }
}

List reverse()
{}


List merge(List **old_1, List **old_2)
{
  List *t = *old_1;
  t 

}


void add_i(List **old, Data &x, int i)
{
   List *new_list = new List;

   if(*old == 0 or i==1) 
   {
    new_list-> d.num = x.num;
    new_list ->rest = 0;
    *old = new_list;
    return;
   }
   else
   {
     List *t = *old;
     List *t1 = NULL;
     for (int k = 1; k < i; k++)
     {
       Data *m;
       &m = t->d.num;
       add2end(*t1, &m);
       t = t->rest;
     }
     List *p = new List;
     p->d.num = x.num;
     new_list = t1;
     new_list-> rest = p;
   }


int main() {

}