#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "ScenePause.h"

class SceneMain 
{
public:
	
public:
	SceneMain()
	{
		m_textPosX = 0;
		m_textVecX = 0;
		m_isEnd = false;

		for (auto& handle : m_hPlayerGraphic) {
			handle = -1;
		}

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

	//グラフィック
	int m_hPlayerGraphic[Player::kGraphicDivNum];

	//キャラクターのアニメーション
	int m_animeNo;			//表示する番号
	int m_animeFrame;
	int m_animeDirections;	//表示する方向


	Player m_player;

	ScenePause m_scenePose;
};