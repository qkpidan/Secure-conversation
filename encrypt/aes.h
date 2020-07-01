/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :aes
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
