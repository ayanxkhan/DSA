#include<bits/stdc++.h>

using namespace std;

int main()
{
long int num;
string str;

cin>>num;

str=to_string(num);

for(int i=0;i<str.length();i++)
{
if(str[i]=='0')
{
str[i]='1';
}
}

cout<<str<<endl;

return 0;
}