#pragma once
#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ��
	 *���ƣ����ܷ���
	 **/
	class CFlyNoWay :public IFlyBehavior
	{
	public:
		CFlyNoWay();
		virtual ~CFlyNoWay();

	public :
		void fly();
	};
}