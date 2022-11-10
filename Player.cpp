#include "Player.h"
#include "DxLib.h"
#include "game.h"

namespace {
	//�L�����N�^�[�A�j���[�V����1�R�}������̃t���[����
	constexpr int kAnimeChangeFrame = 8;
}

Player::Player() :
	m_animeNo(0),
	m_animeFrame(0),
	m_animeDirections(0),
	m_pos()
{
	for (auto& handle : m_handle) {
		handle = -1;
	}
}

Player::~Player() {
	
}

void Player::init() {

}

void Player::end() {
	
}

void Player::update() {
	// �p�b�h(�������̓L�[�{�[�h)����̓��͂��擾����
	int padState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	bool isKey = false;
	if (padState & PAD_INPUT_UP)
	{
		//��@73�`96
		m_pos.y -= 2;
		m_animeDirections = 3;
		isKey = true;
	}
	if (padState & PAD_INPUT_DOWN)
	{
		//���@1�`24
		m_pos.y += 2;
		m_animeDirections = 0;
		isKey = true;
	}
	if (padState & PAD_INPUT_LEFT)
	{
		//���@25�`48
		m_pos.x -= 2;
		m_animeDirections = 1;
		isKey = true;
	}
	if (padState & PAD_INPUT_RIGHT)
	{
		//�E�@49�`72
		m_pos.x += 2;
		m_animeDirections = 2;
		isKey = true;
	}

	//�L�����N�^�[�̃A�j���[�V����
	if (isKey) m_animeFrame++;

	if (m_animeFrame >= kGraphicDivX * kAnimeChangeFrame) {
		m_animeFrame = 1;
	}

	int tempAnimeNo = m_animeFrame / kAnimeChangeFrame;
	m_animeNo = m_animeDirections * kGraphicDivX + tempAnimeNo;
}

void Player::draw() {
	DrawBox(m_pos.x, m_pos.y, m_pos.x + 32, m_pos.y + 32, GetColor(255, 0, 0), false);
	DrawGraph(m_pos.x, m_pos.y, m_handle[m_animeNo], true);
}