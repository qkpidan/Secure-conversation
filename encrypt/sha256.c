/*
*@Copyright (C) 2010-2020 上海网用软件有限公司
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :sha256
*@rely              :klib
*@function
*设计的主要功能:
*1、
*2、
*3、
*4、
*5、
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
