#pragma once

#include "Duck.h"

namespace DesignPattern
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
