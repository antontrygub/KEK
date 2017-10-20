#include<iostream>
#include<string>

int main()
{
using namespace std;
    cout<<"Write STOP if you want to end the process"<<endl;

     string s;
    getline(cin, s);
while(s!="STOP")
{if(s=="int") cout<<sizeof(int)<<endl;
else if(s=="bool") cout<<sizeof(bool)<<endl;
else if(s=="double") cout<<sizeof(double)<<endl;
else if(s=="char") cout<<sizeof(char)<<endl;
else if(s=="long int") cout<<sizeof(long int)<<endl;
else if(s=="long") cout<<sizeof(long)<<endl;
else if(s=="long double") cout<<sizeof(long double)<<endl;
else if(s=="short") cout<<sizeof(short)<<endl;
else if(s=="long long") cout<<sizeof(long long)<<endl;
 else cout<<"I don't know"<<endl;

  getline(cin, s);
}

return 0;
}
