#pragma once

namespace DesignPattern
{
	/*
	 *������Ϊ�ӿ�
	 */
	class FlyBehavior
	{
	public:
		FlyBehavior(){}
		virtual ~FlyBehavior(){}

	public:
		virtual void fly() = 0;
	};
}