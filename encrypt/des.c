/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :des
*@version
*
*/


#include "des.h"

typedef struct _DesPrivate		 DesPrivate;
struct  _DesPrivate
{

};

K_TYPE_DEFINE_DERIVED(Des, des,sizeof( DesPrivate),K_TYPE_OBJECT)
#define DES_GET_PRIVATE(o) (K_OBJECT_GET_PRIVATE ((o), DesPrivate, DES_TYPE_DES))


static void des_constructor(Des *self)
{
}

static void des_destructor(Des *self)
{
}

Des *des_get(void)
{
	static Des *self = NULL;
	if ( !self )
	{
		self = k_object_new(DES_TYPE_DES);
	}
	return self;
}
