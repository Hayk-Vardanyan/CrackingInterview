#include <iostream>
#include <map>

void delete_probs(std::string& str)
{
    for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == ' ')
        {
            str.erase(i, 1);
        }
    }
}

bool palindrome_pos(std::string str)
{
    
delete_probs(str);
std::cout << str;

std::map<char, int>mmap;

for(int i = 0; i < str.size(); ++i)
{

 mmap[str[i]]++;

}

int count = 0;
int count2 = 0;

for(std::map<char, int>::iterator it = mmap.begin(); it != mmap.end(); ++it)
 {

   if(it -> second % 2 != 0)
    {
   ++count;

   if(count > 1){return false;}
    }

 }
return true;
}
int main()
{

}

