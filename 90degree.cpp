#include <iostream>

void Delete(int ** arr, int m)
{
for(int i = 0; i < 3; ++i)
{
 delete [] arr [i];
}

delete [] arr;

}


void swap(int& i, int& j)
{

int tmp = i;
i = j;
j = tmp;

}

void rotate(int n)
{
int** arr;

    arr = new int*[n]; 
    for (int i = 0; i < n; i++) 
    arr[i] = new int[n];
////////////////
for(int i = 0; i < 3; ++i)
{
for(int j = 0 ; j < 3; ++j)
{
	
 std::cin >> arr[i][j];	
} 

}

for(int i = 0; i < n / 2; ++i)
{
for(int j = i ; j < n - i - 1; ++j)
{
	int tmp = arr[i][j];				
	swap(arr[i][j],arr[j][n-i-1]);
	swap(arr[j][n-i-1],arr[n-i-1][n-j-1]);
	swap(arr[n-i-1][n-j-1],arr[n-j-1][i]);
	swap(arr[n - 1 - j][i] , tmp);

}

}

std::cout << "here your 90 degree rotated array\n";

for(int i = 0; i < 3; ++i)
{
for(int j = 0 ; j < 3; ++j)
{
	
 std::cout << arr[i][j];	
} 
std::cout << "\n";
}
Delete(arr, 3);
}
int main()
{

rotate(3);

return 0;

}
