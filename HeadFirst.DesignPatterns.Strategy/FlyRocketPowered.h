#pragma once
#include "FlyBehavior.h"

namespace DesignPattern
{
	/*
	 *���ࣺ��
	 *���ƣ��������
	 **/
	class CFlyRocketPowered : public IFlyBehavior
	{
	public:
		CFlyRocketPowered();
		virtual ~CFlyRocketPowered();
		
	public :
		void fly();
	};
}