#include <iostream>
#include <map>

void Fillarray(int** arr, int m, int n)
{
    for(int i = 0; i < m; ++i)
{
for(int j = 0; j < n; ++j)
    {
    
  std::cin >> arr[i][j];
    }   
}
   
}

void Delete(int** arr, int m)
{
    
     for (int i = 0; i < m; i++)
        delete[] arr[i];

        delete[] arr;
}
void to_zero(int m, int n)
{
std::map<int, int> map;

    int** arr = new int*[m];
    for (int i = 0; i < m; i++)
    arr[i] = new int[n];

    Fillarray(arr, m, n);

for(int i = 0; i < m; ++i)
{
for(int j = 0; j < n; ++j)
{
	if(arr[i][j] == 0)
	{
		map.emplace(i, j);
	}
     
}
} 

for(auto it : map)
{ 

for(int j=0; j < n;++j) 
{
    
	arr[it.first][j] = 0; 
}


for(int i = 0; i < m; ++i) 
{
    
	arr[i][it.second] = 0; 
}

}

Delete(arr, n);

}
int main()
{
to_zero(2, 3);
}

