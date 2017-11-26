#include <iostream>

using namespace std;

enum class Color { red, yellow, green };

Color& operator++(Color& t)
{
   switch(t)
   {
   case Color:: red :
      return t=Color:: green;
   case Color:: green:
      return t=Color::yellow;
   case Color::yellow:
      return t=Color:: red;
   }
}

void stop(int n)
{
    int a = 0;
    for(int i = 0; i<n; i++) {a++;}
}

int main()
{

   Color current = Color::red;
   for (int i = 0; i<100; i++)
   {
       if (current == Color::red) {cout<<"Red"<<endl; stop(1000000000);  ++current;}
       else if (current == Color::yellow) {cout<<"Yellow"<<endl; stop(200000000); ++current;}
       else {cout<<"Green"<<endl; stop(800000000); ++current;}

   }

    return 0;
}
