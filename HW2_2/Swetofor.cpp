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

int main()
{
   int a = 1;
   Color current = Color::red;
   while (a)
   {
       if (current == Color::red) {cout<<"Red"<<endl; for(int i = 0; i<1000000000; i++) {a++;} a = 1;  ++current;}
       else if (current == Color::yellow) {cout<<"Yellow"<<endl; for(int i = 0; i<200000000; i++) a++; a = 1;  ++current;}
       else {cout<<"Green"<<endl; for(int i = 0; i<800000000; i++) a++; a = 1;  ++current;}

   }


}
