
#include <stdio.h>

void function_hello_world()
{
	printf("HELLO WOLRD!!!");
	
}

int main(void)
{
	
	if(0)
	{
		int x = 10;
	}
	
	function_hello_world();
	
	char local_array[10]={0};
	local_array[9]=100+x;
	
	return 0;

}