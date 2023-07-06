//badger
#pragma once

//type
typedef short int $NUM;
#define $U unsigned
#define $I int
#define $SI short int
#define $LI long int
#define $F float
#define $D double
#define $S string
#define $C char
#define $CT char*
#define $B bool
#define $A auto
#define $V void
//constant
#define $CU const unsigned
#define $CI const int
#define $CSI const short int
#define $CLI const long int
#define $CF const float
#define $CD const double
#define $CS const string
#define $CC const char
#define $CCT const char*
#define $CB const bool
#define $CA const auto
#define $CV const void
//data structure type
#define $DEF_C class
#define $DEF_S struct
#define $DEF_E enum
#define $DEF_U union
//constant
#define $DEF_CC const class
#define $DEF_CS const struct
#define $DEF_CE const enum
#define $DEF_CU const union
//other
#define $TYPE(name) template<typename name>
#define $SET_PTR(type,name,ptr_name) type name,*ptr_name=&a2
#define $ST static