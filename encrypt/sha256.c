/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :sha256
*@version
*
*/


#include "sha256.h"

typedef struct _Sha256Private		 Sha256Private;
struct  _Sha256Private
{

};

K_TYPE_DEFINE_DERIVED(Sha256, sha256,sizeof( Sha256Private),K_TYPE_OBJECT)
#define SHA256_GET_PRIVATE(o) (K_OBJECT_GET_PRIVATE ((o), Sha256Private, SHA256_TYPE_SHA256))


static void sha256_constructor(Sha256 *self)
{
}

static void sha256_destructor(Sha256 *self)
{
}

Sha256 *sha256_get(void)
{
	static Sha256 *self = NULL;
	if ( !self )
	{
		self = k_object_new(SHA256_TYPE_SHA256);
	}
	return self;
}
