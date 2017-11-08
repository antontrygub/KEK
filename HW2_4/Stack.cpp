#include <iostream>

using namespace std;

class Leaf{
public:
    int val;
    Leaf* next;
    Leaf* prev;
};

void add_new_Leaf(Leaf* &cur, int val_new)
{
   cur->next = new Leaf;
   Leaf* a = cur;
   cur = cur->next;
   cur->val = val_new;
   cur->prev = a;
}

int main()
{

    Leaf* head = new Leaf;
    Leaf* cur = head;
    head->prev = 0;
    for (int i = 0; i<10; i++) add_new_Leaf(cur, i);


    while (cur->prev) {cout<<cur->val<<' '; cur = cur->prev;}
    return 0;
}
