#pragma once

#include "QuackBehavior.h"

namespace DesignPatterns_Strategy
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