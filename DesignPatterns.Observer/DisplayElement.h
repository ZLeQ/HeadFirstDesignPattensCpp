#pragma once

namespace DesignPatterns_Observer
{
	/*
	 *�������ʾ�ӿ�
	 */
	class IDisplayElement
	{
	public:
		IDisplayElement(){}
		virtual ~IDisplayElement(){}

	public:
		virtual void display() = 0;
	};
}