#pragma once

#include "SceneBase.h"
#include "SceneTitle.h"
#include "SceneMain.h"
#include "SceneSetting.h"
#include "SceneEnd.h"

class SceneManager {
public:
	typedef enum SceneKind {
		kSceneKindTitle,
		kSceneKindMain,

		kSceneKindSetting,
		kSceneKindEnd,

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

	SceneKind m_kind;

	SceneBase* m_pScene;

	SceneTitle	m_title;

	SceneMain m_main;

	SceneSetting m_setting;

	SceneEnd m_end;

};