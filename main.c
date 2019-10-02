
#include <stdio.h>

void function_hello_world(x)
{
	printf("HELLO WOLRD!!!");
	
	if(1)
	{
		printf("HELLO WOLRD 1!!!");
		return;
	}
		
		
	if(2)
	{
		printf("HELLO WOLRD 2!!!");
		return;
	}
	
	if(3)
	{
		printf("HELLO WOLRD 3!!!");
		return;
	}
	
}

int main(void)
{
	int x = 0;
	if(0)
	{
		x = 10;
	}
	
	function_hello_world(2);
	function_hello_world(3);
	
	char local_array[10]={0};
	local_array[9]=100;
	
	return 0;

}