#pragma once

#include "Duck.h"

namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ��
	 *���ƣ�ѱ��ҰѼ��
	 **/
	class CMallardDuck : public CDuck
	{
	public:
		CMallardDuck();
		virtual ~CMallardDuck();

	public:
		void display();
	};
}
