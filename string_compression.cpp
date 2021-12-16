#include <iostream>

std::string symbol_count(std::string str)
{
    int count = 1;
    std::string str_begin = str;
    
    for(int i = 0; i < str.size(); ++i)
    {
        for(int j = i + 1; j < str.size(); ++j)
        {
            if(str[i] == str[j])
            {
                ++count;
                str.erase(j, 1);
                --j;
            }
            
        }
        str.insert(i + 1, std::to_string(count));
        count = 1;
        ++i;
    }
    
 return str.size() > str_begin.size() ? str_begin : str;   
    

}

int main()
{
 
}

