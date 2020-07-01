/*
*@Copyright (C) 2010-2020 上海网用软件有限公司
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :rsa
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

#ifndef __RSA_H__
#define __RSA_H__

#include <klib/kobject.h>


#define RSA_TYPE_RSA		(rsa_get_type())
#define RSA(obj)		(K_TYPE_CHECK_INSTANCE_CAST(obj, Rsa))

Class  Rsa extends KObject{

};

KConstType 			rsa_get_type(void);

Rsa 		*rsa_get(void);
#endif
