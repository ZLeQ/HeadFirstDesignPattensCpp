#pragma once

namespace DesignPattern
{
	/*
	*��������Ϊ�ӿ�
	**/
	class QuackBehavior
	{
	public:
		QuackBehavior(){	}
		virtual ~QuackBehavior(){}

	public:
		virtual void quack() = 0;
	};
}
