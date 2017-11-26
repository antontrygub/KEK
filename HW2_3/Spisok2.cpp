#include <iostream>

using namespace std;

class List
{
private:
    struct Leaf
    {
       double val;
       Leaf* next;
       Leaf* prev;
    };

public:
   Leaf* cur;
   List() : cur{new Leaf*} {}//конструктор


private:
   void add(List &a, int b)
   {
   a.cur->next = new Leaf;
   a.cur->val = b;
   (a.cur->next)->prev = a.cur;
   a.cur = a.cur->next;
   }
public:
   Leaf* current() {return cur;}
};



int main()
{
    List ourList();
   cout<<ourList.current()->val;


}
