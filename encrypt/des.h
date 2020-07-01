/*
*@Copyright (C) 2010-2020 上海网用软件有限公司
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :des
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
