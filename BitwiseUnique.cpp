#include <iostream>


bool foo(std::string str)
{ 
int count{};

for(int i = 0; i < str.size(); ++i)
{ 

if (count & ( 1 << (str[i] - 'a') ) ) 
return false;

else count |= ( 1 << (str[i] - 'a') );

} 

return true;

} 


int main()
{
std::cout << foo("helo");
}

