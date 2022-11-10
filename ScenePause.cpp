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
	
	if (Pad::isPress(PAD_INPUT_2)) {
		m_isEnd = true;
		return 1;
	}
	return 0;
}

void ScenePause::draw()
{
	DrawString(0, 0, "É|Å[ÉYâÊñ ", GetColor(255, 255, 255));
}