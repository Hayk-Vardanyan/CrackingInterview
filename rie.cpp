#include <iostream>

bool foo(std::string str1,std::string str2)
{

if(str1.size() < str2.size())
{
       std::swap(str1, str2);
}

if(str1.size() - str2.size() > 1)
return false;

int index;
char sym;

std::string tmp = str2;

int newcount, newcount2;

for(int i = 0; i < str1.size(); ++i)
{

 if(str1[i] != str2[i])
 {
  sym = str1[i];

  index = i;

  break;

 }

}

tmp[index] = sym;


for(int i = 0; i < str1.size(); ++i)

 {

  if(tmp[i] == str1[i])
    {
       
   ++newcount;

    }
 }


if(newcount == str1.size())
{

	return true;
}
else
     tmp = str1;

     

tmp.erase(index, 1);




if(tmp == str2)
{
  
  return true;
}

 else

  return false;


}

 int main()
{

}
