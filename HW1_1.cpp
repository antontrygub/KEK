#include <iostream>
#include <array>

using namespace std;

int main()
{
using namespace std;
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i<10; i++) cout<< a[i]<<' ';
    cout<<endl;
    int sum = 0;
    for (int i=0; i<10; i++) {a[i] = a[i]*a[i]; cout<<a[i]<<' '; sum = sum + a[i];}
    cout<<sum;

return 0;
}
