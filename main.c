#include <stdio.h>
#include <librsa.h>
#include <libaes.h>

int main( int argc, char *argv[])
{
	printf("Start KDC-com!\n");
	
	Aes *aes = aes_new();
	int ret = aes_destory(aes);
	printf("End KDC-aes : %d\n", ret);
	
	Rsa *rsa = rsa_new();
	ret = rsa_destory(rsa);
	printf("End KDC-rsa : %d\n", ret);

	printf("End KDC-com : %d\n", ret);
	return 0;
}
