#pragma once

#include "QuackBehavior.h"

namespace DesignPattern
{
	/*
	 *���ࣺ��
	 *���ƣ���������Ϊ
	 **/
	class CQuack :public IQuackBehavior
	{
	public:
		CQuack();
		virtual ~CQuack();
		
	public :
		void quack();
	};
}