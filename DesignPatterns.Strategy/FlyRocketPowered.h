#pragma once
#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
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