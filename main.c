
#include <stdio.h>

void function_hello_world()
{
	printf("HELLO WOLRD!!!");
	
}

int main(void)
{
	int x = 0;
	if(0)
	{
		x = 10;
	}
	
	function_hello_world();
	
	char local_array[10]={0};
	local_array[9]=100;
	
	return 0;

}