#pragma once
#include "Duck.h"
#include "iostream"
namespace DesignPattern
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