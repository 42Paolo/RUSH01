#include <unistd.h>
#include <stdlib.h>

int count_num(char *str)
{
	int count = 0;
	while(*str)
	{
		while(*str == 32 && *str)
			str++;
		if(*str != 32 && *str != '\0')
			count++;
		while(*str != 32 && *str)
			str++;
	}
	return count;
}
int search_size(int n)
{
	int i = 9;
	while(n % i == 0)
	{
		i--;
	}
	if(i < 4)
	{
		return 1;
	}
	return  i;
}

int *check_nums(char *str, int size)
{
	int num = 0;
	while (*str) 
	{
		while(*str == 32)
			str++;
		if(*str == '-' || *str == '+')	
		if((*str >= '0' && *str <= '9')
		{

		}
		if(*str)
	}
	
}

//size se e uguale a 4 vorra dire che e un 4 x 4
int	grid_build(char *str,int *nums, int size)
{
	//TOOD: check numeri con -, check numeri maggiori di size, check quantita numeri esatta, size a scelta
	

}
