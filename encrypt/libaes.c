/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :aes
*@version
*
*/

#include <stdio.h>
#include <malloc.h>
#include <libaes.h>

typedef struct _AesPrivate		 AesPrivate;
struct  _AesPrivate
{

};

static void aes_constructor(Aes *self)
{
}

static void aes_destructor(Aes *self)
{
}

Aes *aes_new(void)
{
	Aes *self = (Aes*)malloc(sizeof(Aes));
	aes_constructor(self);
	return self;
}

int aes_destory(Aes *self)
{
	if(self)
		aes_destructor(self);
	
	return 0;
}
