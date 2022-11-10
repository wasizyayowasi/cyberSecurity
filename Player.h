#pragma once
#include "Vec2.h"

class Player {
public:
	
	//�v���C���[�O���t�B�b�N�̕�����
	static constexpr int kGraphicDivX = 3;
	static constexpr int kGraphicDivY = 4;
	static constexpr int kGraphicDivNum = kGraphicDivX * kGraphicDivY;

	//�v���C���[�O���t�B�b�N�T�C�Y
	static constexpr int kGraphicSizeX = 48;
	static constexpr int kGraphicSizeY = 48;

public:



	Player();
	~Player();

	void setHanlde(int index,int handle) { m_handle[index] = handle; }

	void init();
	void end();

	void update();
	void draw();

private:

	//�O���t�B�b�N
	int m_handle[kGraphicDivNum];

	// �\���ʒu
	Vec2 m_pos;
	// �ړ�
	Vec2 m_vec;

	//�L�����N�^�[�̃A�j���[�V����
	int m_animeNo;			//�\������ԍ�
	int m_animeFrame;
	int m_animeDirections;	//�\���������

};