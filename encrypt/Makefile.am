#automake提供了三种软件等级:foreign,gnu和gnits.默认等级为gnu.在本例使用foreign等级,它只检测必须的文件
AUTOMAKE_OPTIONS=foreign
 
#引入库文件
AM_CPPFLAGS=-I../include  -lpthred
AM_LDFLAGS= -w  

noinst_LIBRARIES = librsa.a

noinst_HEADERS = librsa.h

librsa_a_SOURCES = librsa.c

librsa_a_LIBADD = @LDFLAGS@

#make install的可执行文件安装目录
bindir=../bin
   
#make 的可执行文件
#bin_PROGRAMS= rsa
    
	 
#可执行文件的依赖
#=========  rsa  ==========
#rsa_SOURCES=rsa.c
#rsa_LDADD=rsa.h
