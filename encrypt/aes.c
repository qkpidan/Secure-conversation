/*
*@Copyright (C) 2010-2020 上海网用软件有限公司
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :aes
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


#include "aes.h"

typedef struct _AesPrivate		 AesPrivate;
struct  _AesPrivate
{

};

K_TYPE_DEFINE_DERIVED(Aes, aes,sizeof( AesPrivate),K_TYPE_OBJECT)
#define AES_GET_PRIVATE(o) (K_OBJECT_GET_PRIVATE ((o), AesPrivate, AES_TYPE_AES))


static void aes_constructor(Aes *self)
{
}

static void aes_destructor(Aes *self)
{
}

Aes *aes_get(void)
{
	static Aes *self = NULL;
	if ( !self )
	{
		self = k_object_new(AES_TYPE_AES);
	}
	return self;
}
