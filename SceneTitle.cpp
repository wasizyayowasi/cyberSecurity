#include "SceneTitle.h"
#include "DxLib.h"

void SceneTitle::init()
{

	m_isEnd = false;

	m_menu.init();
	m_menu.addItem("起動");
	m_menu.addItem("設定");
	m_menu.addItem("終了");
	m_menu.addItem("デバッグ");

	m_menu.setPos(800, 500);

	m_menu.setUpCursor();
}

void SceneTitle::end() {
	m_menu.end();
}

void SceneTitle::update()
{

	m_menu.update();

	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	if (padState & PAD_INPUT_1)
	{
		m_isEnd = true;
	}
}

void SceneTitle::draw()
{
	m_menu.draw();
}