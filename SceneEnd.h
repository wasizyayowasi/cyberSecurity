#pragma once
#include "SceneBase.h"

class SceneEnd : public SceneBase
{
public:
	SceneEnd()
	{
		m_textPosX = 0;
		m_textVecX = 0;
		m_isEnd = false;
	}
	virtual ~SceneEnd() {}


	virtual void init();
	virtual void end() {}

	virtual void update();
	virtual void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	// �e�L�X�g�\���ʒu�ύX
	int m_textPosX;
	int m_textVecX;

	bool m_isEnd;
};