#pragma once
#include "Vec2.h"

class Player {
public:
	
	//プレイヤーグラフィックの分割数
	static constexpr int kGraphicDivX = 3;
	static constexpr int kGraphicDivY = 4;
	static constexpr int kGraphicDivNum = kGraphicDivX * kGraphicDivY;

	//プレイヤーグラフィックサイズ
	static constexpr int kGraphicSizeX = 48;
	static constexpr int kGraphicSizeY = 48;

public:



	Player();
	~Player();

	void setHanlde(int index,int handle) { m_handle[index] = handle; }

	void init();
	void end();

	void update();
	void draw();

private:

	//グラフィック
	int m_handle[kGraphicDivNum];

	// 表示位置
	Vec2 m_pos;
	// 移動
	Vec2 m_vec;

	//キャラクターのアニメーション
	int m_animeNo;			//表示する番号
	int m_animeFrame;
	int m_animeDirections;	//表示する方向

};