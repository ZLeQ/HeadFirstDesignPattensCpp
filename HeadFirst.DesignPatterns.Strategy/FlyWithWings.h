#pragma once

#include "FlyBehavior.h"

namespace DesignPattern
{
	/*
	 *���ࣺ�ӿ�
	 *���ƣ��ó��ķ�����Ϊ
	 **/
	class CFlyWithWings : public IFlyBehavior
	{
	public:
		CFlyWithWings();
		virtual ~CFlyWithWings();

	public :
		void fly();
	};

}