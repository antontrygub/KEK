#include <iostream>
#include <array>

using namespace std;

int main()
{
using namespace std;
int c[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int* a;
a = &c[0];
    for (int i = 0; i<10; i++) {cout<<*a<<' '; a=a+1;}
    cout<<endl;
    int sum = 0;
    a=a-1;
    for (int i = 9; i>=0; i--) {cout<<(*a)*(*a)<<' '; sum = sum + (*a)*(*a); a=a-1;}
    cout<<endl<<sum;

return 0;
}
