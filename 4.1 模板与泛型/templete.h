//#pragma once

#ifndef __TEMPLETE__
#define __TEMPLETE__



template<int a, int b>
int funcaddv2()
{
	return a + b;
}

template<typename T, int b>
int funcaddv3(T a)
{
	return (int)a + b;
}

#endif // __TEMPLETE__