#pragma once

#include "FlyBehavior.h"

namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ�ӿ�
	 *���ƣ��ó�����
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