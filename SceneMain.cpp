#include "SceneMain.h"
#include "DxLib.h"
#include "Pad.h"

namespace {
	const char* const kPlayerFilename = "data/player.png";
	
}

void SceneMain::init()
{

	LoadDivGraph(kPlayerFilename, Player::kGraphicDivNum, Player::kGraphicDivX, Player::kGraphicDivY, Player::kGraphicSizeX, Player::kGraphicSizeY, m_hPlayerGraphic);

	for (int i = 0; i < Player::kGraphicDivNum; i++) {
		m_player.setHanlde(i,m_hPlayerGraphic[i]);
	}

	m_textPosX = 0;
	m_textVecX = 4;

	m_player.init();

	m_isEnd = false;
}

void SceneMain::end() {

	for (auto& handle : m_hPlayerGraphic) {
		DeleteGraph(handle);
	}
}

int SceneMain::update()
{
	m_player.update();
	if (Pad::isPress(PAD_INPUT_7)) {
		m_isEnd = true;
		return 1;
	}
	return 0;
}

void SceneMain::draw()
{
	
	DrawString(m_textPosX, 0, "ƒƒCƒ“‰æ–Ê", GetColor(255, 255, 255));
	m_player.draw();

}