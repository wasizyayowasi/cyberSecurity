#include "SceneMain.h"
#include "DxLib.h"
#include "Pad.h"

void SceneMain::init()
{
	m_textPosX = 0;
	m_textVecX = 4;

	//m_player.init();

	m_isEnd = false;
}

void SceneMain::end() {
	//m_player.end();
}

int SceneMain::update()
{
	//m_player.update();
	if (Pad::isPress(PAD_INPUT_7)) {
		m_isEnd = true;
		return 1;
	}
	return 0;
}

void SceneMain::draw()
{
	DrawString(m_textPosX, 0, "ƒƒCƒ“‰æ–Ê", GetColor(255, 255, 255));
	//m_player.draw();

}