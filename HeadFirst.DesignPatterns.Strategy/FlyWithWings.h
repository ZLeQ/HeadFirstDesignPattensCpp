#pragma once

#include "FlyBehavior.h"

namespace DesignPattern
{
	/*
	 *�ó��ķ�����Ϊ
	 **/
	class FlyWithWings : public FlyBehavior
	{
	public:
		FlyWithWings();
		virtual ~FlyWithWings();

	public:
	public :
		void fly();
	};

}