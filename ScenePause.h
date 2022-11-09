#pragma once

class ScenePause
{
public:
	ScenePause()
	{
		m_isEnd = false;
	}
	virtual ~ScenePause() {}


	virtual void init();
	virtual void end();

	int update();
	virtual void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	
	int m_num;

	bool m_isEnd;
};