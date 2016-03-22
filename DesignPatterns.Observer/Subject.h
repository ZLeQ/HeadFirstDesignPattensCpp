#pragma once

#include <list>   
using std::list;

namespace DesignPatterns_Observer
{
	class IObserver;
	/*
	 *�ɹ۲����
	 */
	class ISubject
	{
	private:
		//�洢�۲��߶���ָ��
		list<IObserver*> Observers;

	public:
		ISubject();
		virtual ~ISubject();

	public:
		void registerObserver(IObserver* o);
		void removeObserver(IObserver* o);
		void notifyObservers();
	};
}