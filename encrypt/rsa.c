/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :rsa
*@version
*
*/


#include "rsa.h"

typedef struct _RsaPrivate		 RsaPrivate;
struct  _RsaPrivate
{

};

K_TYPE_DEFINE_DERIVED(Rsa, rsa,sizeof( RsaPrivate),K_TYPE_OBJECT)
#define RSA_GET_PRIVATE(o) (K_OBJECT_GET_PRIVATE ((o), RsaPrivate, RSA_TYPE_RSA))


static void rsa_constructor(Rsa *self)
{
}

static void rsa_destructor(Rsa *self)
{
}

Rsa *rsa_get(void)
{
	static Rsa *self = NULL;
	if ( !self )
	{
		self = k_object_new(RSA_TYPE_RSA);
	}
	return self;
}
