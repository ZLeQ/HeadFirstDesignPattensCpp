#pragma once
#include "FlyBehavior.h"

namespace DesignPattern
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