#pragma once

class ScenePose
{
public:
	ScenePose()
	{
		m_isEnd = false;
	}
	virtual ~ScenePose() {}


	virtual void init();
	virtual void end();

	int update();
	virtual void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	
	int m_num;

	bool m_isEnd;
};