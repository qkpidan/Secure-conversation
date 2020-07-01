AUTOMAKE_OPTIONS=foreign

#指定宏文件的存放目录，与AC_CONFIG_MACRO_DIRS成配合使用
ACLOCAL_AMFLAGS = -I m4

#指定需要递归automake的子文件夹，即存在Makefile.am的子文件夹
SUBDIRS= encrypt 

ROOTDIR=$(shell /bin/pwd)

INCLUDES=-I$(ROOTDIR)/encrypt #指定头文件所在路径,并导出供子目录Makefile.am使用

export INCLUDES #使之变成全局变量

bin_PROGRAMS=kdccom #生成的目标文件

kdccom_SOURCES=main.c #指定产生执行文件需要的源文件,如果有多个,以空格隔开

#LDADD=$(ROOTDIR)/src/libmy_test.a（自己定义的静态库名称） #把src中的文件变成静态库的方式
