#include <iostream>

bool foo(std::string str1, std::string str2)
{
bool flag = false;
if(str1.size() != str2.size()) {
return false;
}
if(str1 == str2){

return true;
}
 

for(int i {} ; i < str2.size(); ++i)
{
str2.push_back(str2[0]);
str2.erase(str2.begin());
if(str2 == str1){
	flag = true;
}
}

return flag;

}

int main()
{

}
