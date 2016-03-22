
#include "Observer.h"
#include "Subject.h"

DesignPatterns_Observer::ISubject::ISubject()
{
}

DesignPatterns_Observer::ISubject::~ISubject()
{
	//������ʱ���ͷ����й۲��ߵ��ڴ�
	for (auto var = Observers.begin(); var != Observers.end(); ++var)
	{
		if ((*var) != nullptr)
		{
			delete (*var);
		}
	}
}

void DesignPatterns_Observer::ISubject::removeObserver(IObserver* o)
{
	if (o != nullptr)
	{
		//�۲��ߵ�ָ���ɿɹ۲������ά�����Ƴ��۲���ʱ�ͻ����ڴ档
		Observers.remove(o);
		if (o != nullptr)
		{
			delete o;
		}
	}
}

void DesignPatterns_Observer::ISubject::notifyObservers()
{
	for (auto var = Observers.begin(); var != Observers.end(); ++var)
	{
		(*var)->update(this);
	}
}

void DesignPatterns_Observer::ISubject::registerObserver(IObserver* o)
{
	Observers.push_back(o);
}