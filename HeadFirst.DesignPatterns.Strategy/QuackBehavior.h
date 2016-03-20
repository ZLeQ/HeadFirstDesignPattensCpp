#pragma once

namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ�ӿ�
	 *���ƣ���������Ϊ�ӿ�
	 **/
	class IQuackBehavior
	{
	public:
		IQuackBehavior(){}
		virtual ~IQuackBehavior(){}

	public:
		virtual void quack() = 0;
	};
}
