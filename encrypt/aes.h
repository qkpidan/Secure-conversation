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

#ifndef __AES_H__
#define __AES_H__

#include <klib/kobject.h>


#define AES_TYPE_AES		(aes_get_type())
#define AES(obj)		(K_TYPE_CHECK_INSTANCE_CAST(obj, Aes))

Class  Aes extends KObject{

};

KConstType 			aes_get_type(void);

Aes 		*aes_get(void);
#endif
