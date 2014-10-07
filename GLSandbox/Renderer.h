#pragma once

class Engine;

class Renderer
{
public:

private:
	Engine *engine = nullptr;

public:
	Renderer(Engine engine);
	~Renderer();

	void initOpenGl();
};

