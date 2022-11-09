#pragma once

#include "SceneBase.h"
#include "SceneTitle.h"
#include "SceneMain.h"
#include "SceneSetting.h"
#include "SceneEnd.h"
#include "ScenePause.h"

class SceneManager {
public:
	typedef enum SceneKind {
		kSceneKindTitle,
		kSceneKindMain,

		kSceneKindSetting,
		kSceneKindEnd,

		kSceneKindPose,

		kSceneKindNum
	}SceneKind;

public:
	SceneManager();
	virtual ~SceneManager();

	void init(SceneKind kind = kSceneKindTitle);
	void end();
	void update();
	void draw();
private:

	int m_sceneNum;

	int m_mainNum;

	SceneKind m_kind;

	SceneBase* m_pScene;

	SceneTitle	m_title;

	SceneMain m_main;

	SceneSetting m_setting;

	SceneEnd m_end;

	ScenePause m_scenePose;
};