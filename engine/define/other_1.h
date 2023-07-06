//badger
#pragma once

#define $FOR(a1,a2) for(a1=0;a1<a2;a1++)
#define $OPERATOR(name,return_type,left,right)\
name##_{} name;\
template<typename T>struct name##Proxy{\
public:\
	name##Proxy(const T& t):t_(t){}\
	const T& t_;\
	static return_type _ ##name## _(const left,const right);\
};\
template<typename T>name##Proxy<T>operator<(const T& lhs,const name##_& rhs){\
	return name##Proxy<T>(lhs);\
}\
return_type operator>(const name##Proxy<return_type>& lhs,const return_type& rhs){\
	return name##Proxy<return_type>::_ ##name## _(lhs.t_,rhs);\
}\
template<typename T>inline return_type name##Proxy<T>::_ ##name## _(const left,const right)

/*#define $KEYWORD(name,return_type,right)\
name##_{} name;\
template<typename T>struct name##Proxy{\
public:\
	name##Proxy(const T& t):t_(t){}\
	const T& t_;\
	static return_type _ ##name## _(const right);\
};\
template<typename T>name##Proxy<T>operator<(const T& lhs,const name##_& rhs){\
	return name##Proxy<T>(lhs);\
}\
return_type operator>(const name##Proxy<return_type>& lhs,const return_type& rhs){\
	return name##Proxy<return_type>::_ ##name## _(lhs.t_,rhs);\
}\
template<typename T>inline return_type name##Proxy<T>::_ ##name## _(const right)*/