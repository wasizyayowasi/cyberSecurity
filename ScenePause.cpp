#include "ScenePause.h"
#include "DxLib.h"
#include "Pad.h"

void ScenePause::init()
{
	m_isEnd = false;
}

void ScenePause::end() {
	
}

int ScenePause::update()
{
	DrawString(0, 30, "2", GetColor(255, 255, 255));
	if (Pad::isPress(PAD_INPUT_8)) {
		m_isEnd = true;
		return 1;
	}
	return 0;
}

void ScenePause::draw()
{
	DrawString(0, 0, "�|�[�Y���", GetColor(255, 255, 255));
}