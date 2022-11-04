#pragma once
#include "SceneBase.h"
#include "SelectMenu.h"

class SceneTitle : public SceneBase
{
public:
	SceneTitle()
	{
		m_isEnd = false;
	}
	virtual ~SceneTitle() {}


	virtual void init();
	virtual void end();

	virtual void update();
	virtual void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	// テキスト表示位置変更

	SelectMenu m_menu;

	bool m_isEnd;
};