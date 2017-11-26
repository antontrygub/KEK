#include <iostream>

using namespace std;

struct Leaf {
    int val;
    Leaf* next;
};

void add_new_Leaf(Leaf* &cur, int val_new)
{
   cur->next = new Leaf;
   cur = cur->next;
   cur->val = val_new;
}

int main()
{

    Leaf* head = new Leaf;
    Leaf* cur = head;
    cur->val=0;
    for (int i = 1; i<10; i++) add_new_Leaf(cur, i);
    cur->next = new Leaf; cur = cur-> next; cur->next=0;
    cur = head;
    while (cur->next) {cout<<cur->val<<' '; cur = cur->next;}
    return 0;
}
