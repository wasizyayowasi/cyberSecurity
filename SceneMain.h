#pragma once
#include "SceneBase.h"
#include "Player.h"
#include "ScenePause.h"

class SceneMain 
{
public:
	
public:
	SceneMain()
	{
		m_textPosX = 0;
		m_textVecX = 0;
		m_isEnd = false;

		for (auto& handle : m_hPlayerGraphic) {
			handle = -1;
		}

	}
	virtual ~SceneMain() {}


	void init();
	void end();

	int update();
	void draw();

	virtual bool isEnd() { return m_isEnd; }
private:
	// �e�L�X�g�\���ʒu�ύX
	int m_textPosX;
	int m_textVecX;

	bool m_isEnd;

	//�O���t�B�b�N
	int m_hPlayerGraphic[Player::kGraphicDivNum];

	//�L�����N�^�[�̃A�j���[�V����
	int m_animeNo;			//�\������ԍ�
	int m_animeFrame;
	int m_animeDirections;	//�\���������


	Player m_player;

	ScenePause m_scenePose;
};