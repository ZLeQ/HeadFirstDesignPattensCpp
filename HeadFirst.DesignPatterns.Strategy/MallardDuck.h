#pragma once

#include "Duck.h"

namespace DesignPattern
{
	/*
	 *ѱ��ҰѼ
	 **/
	class MallardDuck : public Duck
	{
	public:
		MallardDuck();
		virtual ~MallardDuck();

	public:
		void display();
	};
}
