#include <iostream>

void set(std::string str)
{
    while(str[str.size() - 1] == ' ')
    {
        str.erase(str.size() - 1);
    }

for(int i = 0; i < str.size(); ++i)
    {
        if(str[i] == ' ')
        {
            str[i] = '%';
            str.insert(i + 1, "20");
        }
    }

    std::cout << str;
}


int main()
{
    
}
