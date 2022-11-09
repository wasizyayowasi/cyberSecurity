#include "ScenePose.h"
#include "DxLib.h"
#include "Pad.h"

void ScenePose::init()
{
	m_isEnd = false;
}

void ScenePose::end() {
	
}

int ScenePose::update()
{
	DrawString(0, 30, "2", GetColor(255, 255, 255));
	if (Pad::isPress(PAD_INPUT_8)) {
		m_isEnd = true;
		return 1;
	}
	return 0;
}

void ScenePose::draw()
{
	DrawString(0, 0, "É|Å[ÉYâÊñ ", GetColor(255, 255, 255));
}