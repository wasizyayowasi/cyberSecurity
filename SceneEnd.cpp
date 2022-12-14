#include "SceneEnd.h"
#include "DxLib.h"
#include "Pad.h"

void SceneEnd::init()
{
	m_textPosX = 0;
	m_textVecX = 4;

	m_isEnd = false;
}

void SceneEnd::update()
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

void SceneEnd::draw()
{
	DrawString(m_textPosX, 0, "終了画面", GetColor(255, 255, 255));
}