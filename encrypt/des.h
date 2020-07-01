/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :des
*@version
*
*/

#ifndef __DES_H__
#define __DES_H__

#include <klib/kobject.h>


#define DES_TYPE_DES		(des_get_type())
#define DES(obj)		(K_TYPE_CHECK_INSTANCE_CAST(obj, Des))

Class  Des extends KObject{

};

KConstType 			des_get_type(void);

Des 		*des_get(void);
#endif
