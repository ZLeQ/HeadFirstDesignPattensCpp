#pragma once

namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ�ӿ�
	 *���ƣ�������Ϊ�ӿ�
	 */
	class IFlyBehavior
	{
	public:
		IFlyBehavior(){}
		virtual ~IFlyBehavior(){}

	public:
		virtual void fly() = 0;
	};
}