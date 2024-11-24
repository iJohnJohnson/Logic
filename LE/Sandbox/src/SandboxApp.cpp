#include "Logic.h"

class Sandbox : public Logic::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

void main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete sandbox;
}