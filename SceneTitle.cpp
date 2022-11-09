#include "SceneTitle.h"
#include "DxLib.h"

void SceneTitle::init()
{

	m_isEnd = false;

	m_menu.init();
	//CreateFontToHandle(char* FontName, int Size, int Thick, int FontType);
	m_menu.addItem("�N��");
	m_menu.addItem("�ݒ�");
	m_menu.addItem("�I��");
	//m_menu.addItem("�f�o�b�O");

	m_menu.setPos(800, 500);

	m_menu.setUpCursor();
}

void SceneTitle::end() {
	m_menu.end();
}

int SceneTitle::update()
{
	m_num = m_menu.update();

	if (Pad::isPress(PAD_INPUT_1)) {
		switch (m_num) {
		case 0:
			m_isEnd = true;
			return 1;
		case 1:
			m_isEnd = true;
			return 2;
		case 2:
			m_isEnd = true;
			return 3;
		default:
			return 0;
		}
	}
	return 0;
}

void SceneTitle::draw()
{
	m_menu.draw();
}