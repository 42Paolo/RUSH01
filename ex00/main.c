#include <unistd.h>
#include <stdlib.h>

int count_num(char *str);
int search_size(int n);

int main(int argc, char **argv)
{
	char *str = argv[1];
	if(argc == 2)
	{
		int tot_num = count_num(str);
		int size = search_size(tot_num);
		if(tot_num >= 16 && tot_num <= 36 && size != -1)
		{
			
			
		}

	}



}