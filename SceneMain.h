#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "ScenePause.h"

class SceneMain 
{
public:
	SceneMain()
	{
		m_textPosX = 0;
		m_textVecX = 0;
		m_isEnd = false;
	}
	virtual ~SceneMain() {}


	void init();
	void end();

	int update();
	void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	// テキスト表示位置変更
	int m_textPosX;
	int m_textVecX;

	bool m_isEnd;

	Player m_player;

	ScenePause m_scenePose;
};