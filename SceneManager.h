#pragma once

#include "SceneBase.h"
#include "SceneTitle.h"
#include "SceneMain.h"

class SceneManager {
public:
	typedef enum SceneKind {
		kSceneKindTitle,
		kSceneKindMain,

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
	SceneKind m_kind;

	SceneBase* m_pScene;

	SceneTitle	m_title;

	SceneMain m_main;
};