#include "SmartPtr.h"

template<class T>
inline SmartPtr<T>::SmartPtr(T* ptr) : _ptr(ptr)
{
	cout << "Constructor:\t" << typeid(this).name() << "\t" << endl;
}

template<class T>
inline SmartPtr<T>::~SmartPtr()
{
	if (_ptr != nullptr)
	{
		delete _ptr;
		cout << "Destructor:\t" << typeid(this).name() << "\t" << endl;
	}
}

template<class T>
inline T& SmartPtr<T>::operator*()
{
	return *_ptr;
}

template<class T>
inline T* SmartPtr<T>::operator->()
{
	return _ptr;
}
