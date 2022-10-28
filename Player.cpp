#include "Player.h"
#include "DxLib.h"
#include "game.h"

namespace {
	const char* const kPlayerFilename = "data/player.png";
	//キャラクターアニメーション1コマ当たりのフレーム数
	constexpr int kAnimeChangeFrame = 8;
}

Player::Player() :
	m_animeNo(0),
	m_animeFrame(0),
	m_animeDirections(0)
{
	for (auto& handle : m_handle) {
		handle = -1;
	}
	for (auto& graphicHandle : m_graphicHandle) {
		graphicHandle = -1;
	}
}

Player::~Player() {

}

void Player::init() {

	LoadDivGraph(kPlayerFilename, kGraphicDivNum, kGraphicDivX, kGraphicDivY, kGraphicSizeX, kGraphicSizeY, m_graphicHandle);

	for (int i = 0; i < kGraphicDivNum; i++) {
		m_handle[i] = m_graphicHandle[i];
	}
	
	m_pos.x = 0;
	m_pos.y = 0;
}
void Player::end() {
	for (auto& handle : m_handle) {
		DeleteGraph(handle);
	}
}
void Player::update() {
	// パッド(もしくはキーボード)からの入力を取得する
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	bool isKey = false;
	if (padState & PAD_INPUT_UP)
	{
		//上　73～96
		m_pos.y -= 2;
		m_animeDirections = 3;
		isKey = true;
	}
	if (padState & PAD_INPUT_DOWN)
	{
		//下　1～24
		m_pos.y += 2;
		m_animeDirections = 0;
		isKey = true;
	}
	if (padState & PAD_INPUT_LEFT)
	{
		//左　25～48
		m_pos.x -= 2;
		m_animeDirections = 1;
		isKey = true;
	}
	if (padState & PAD_INPUT_RIGHT)
	{
		//右　49～72
		m_pos.x += 2;
		m_animeDirections = 2;
		isKey = true;
	}

	//キャラクターのアニメーション
	if (isKey) m_animeFrame++;

	if (m_animeFrame >= kGraphicDivX * kAnimeChangeFrame) {
		m_animeFrame = 1;
	}

	int tempAnimeNo = m_animeFrame / kAnimeChangeFrame;
	m_animeNo = m_animeDirections * kGraphicDivX + tempAnimeNo;
}
void Player::draw() {
	DrawGraph(m_pos.x, m_pos.y, m_handle[m_animeNo], true);
}