#include "SceneSetting.h"
#include "DxLib.h"
#include "Pad.h"

void SceneSetting::init()
{
	m_textPosX = 0;
	m_textVecX = 4;

	m_isEnd = false;
}

void SceneSetting::update()
{
	// 文字の移動
	m_textPosX += m_textVecX;
	if (m_textPosX < 0)
	{
		m_textPosX = 0;
		m_textVecX = 4;
	}
	if (m_textPosX > 300)
	{
		m_textPosX = 300;
		m_textVecX = -4;
	}

	if (Pad::isTrigger(PAD_INPUT_1))
	{
		m_isEnd = true;
	}
}

void SceneSetting::draw()
{
	DrawString(m_textPosX, 0, "設定画面", GetColor(255, 255, 255));
}