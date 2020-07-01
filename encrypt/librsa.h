/*
*@date              :2020-07-01
*@author            :马朝阳
*@brief             :rsa
*@version
*
*/

#ifndef __RSA_H__
#define __RSA_H__

typedef struct _Rsa		Rsa;
struct _Rsa{

};

Rsa 				*rsa_new(void);
int 				rsa_destory(Rsa *self);

#endif
