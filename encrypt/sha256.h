/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :sha256
*@rely              :klib
*@function
*@version
*
*/

#ifndef __SHA256_H__
#define __SHA256_H__

#include <klib/kobject.h>


#define SHA256_TYPE_SHA256		(sha256_get_type())
#define SHA256(obj)		(K_TYPE_CHECK_INSTANCE_CAST(obj, Sha256))

Class  Sha256 extends KObject{

};

KConstType 			sha256_get_type(void);

Sha256 		*sha256_get(void);
#endif
