#pragma once
#include "Duck.h"
#include "iostream"
namespace DesignPatterns_Strategy
{
	/*
	 *���ࣺ��
	 *���ƣ�ģ��Ѽ��
	 **/
	class CModelDuck : public CDuck
	{
	public:
		CModelDuck();
		virtual ~CModelDuck();

	public:
		void display();
	};
}