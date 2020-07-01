/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :rsa
*@version
*
*/

#include <stdio.h>
#include <malloc.h>
#include <librsa.h>

typedef struct _RsaPrivate		 RsaPrivate;
struct  _RsaPrivate
{

};

static void rsa_constructor(Rsa *self)
{
}

static void rsa_destructor(Rsa *self)
{
}

Rsa *rsa_new(void)
{
	Rsa *self = (Rsa*)malloc(sizeof(Rsa));
	rsa_constructor(self);
	return self;
}

int rsa_destory(Rsa *self)
{
	if(self)
		rsa_destructor(self);
	
	return 0;
}
