#pragma once

#include "QuackBehavior.h"

namespace DesignPattern
{
	/*
	 *���ࣺ��
	 *���ƣ���������Ϊ
	 **/
	class Quack :public IQuackBehavior
	{
	public:
		Quack();
		virtual ~Quack();
		
	public :
		void quack();
	};
}