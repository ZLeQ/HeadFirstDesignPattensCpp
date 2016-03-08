#pragma once

namespace DesignPattern
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
