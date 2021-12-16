#include <iostream>

void make_lowercase(std::string& str)
{
	for(int i = 0; i < str.size(); ++i)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
	
	}
}


bool is_permution(std::string str, std::string str2)
{
    if(str.size() != str2.size()) return false;
int count1 = 0; 
int count2 = 0;
int same1 = 0;
int same2 = 0;

make_lowercase(str);
make_lowercase(str2);

for(int i = 0; i < str.size(); ++i)
{ 

if (count1 & ( 1 << (str[i] - 'a') ) ) 
    {
        same1++;
    }
else
    count1 |= ( 1 << (str[i] - 'a') );

 if (count2 & ( 1 << (str2[i] - 'a') ) ) 
    {
        same2++;
    }
else
    count2 |= ( 1 << (str2[i] - 'a') );
    
}

return (count1 == count2 && same1 == same2);

} 


int main()
{

}

