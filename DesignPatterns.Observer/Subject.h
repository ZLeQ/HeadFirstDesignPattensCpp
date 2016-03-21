#pragma once

#include <list>   
using std::list;

namespace DesignPatterns_Observer
{
	class Observer;
	/*
	 *�ɹ۲����
	 */
	class Subject
	{
	private:
		list<Observer*> Observers;

	public:
		Subject();
		virtual ~Subject();

	public:
		void registerObserver(Observer* o);
		void removeObserver(Observer* o);
		void notifyObservers();
	};
}