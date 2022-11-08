#include "SceneManager.h"
#include "DxLib.h"
#include "Pad.h"
#include <cassert>

SceneManager::SceneManager() :
	m_kind(kSceneKindTitle)
{

}
SceneManager::~SceneManager() {

}

void SceneManager::init(SceneKind kind) {
	m_kind = kind;
	switch (m_kind)
	{
	case SceneManager::kSceneKindTitle:
		m_title.init();
		break;
	case SceneManager::kSceneKindMain:
		m_main.init();
		break;
	case SceneManager::kSceneKindSetting:
		m_setting.init();
		break;
	case SceneManager::kSceneKindEnd:
		m_end.init();
		break;
	case SceneManager::kSceneKindNum:
	default:
		assert(false);
		break;
	}
}
void SceneManager::end() {
	switch (m_kind)
	{
	case SceneManager::kSceneKindTitle:
		m_title.end();
		break;
	case SceneManager::kSceneKindMain:
		m_main.end();
		break;
	case SceneManager::kSceneKindSetting:
		m_setting.end();
		break;
	case SceneManager::kSceneKindEnd:
		m_end.end();
		break;
	default:
		assert(false);
		break;
	}
}
void SceneManager::update() {
	Pad::update();

	bool isEnd = false;
	switch (m_kind)
	{
	case SceneManager::kSceneKindTitle:
		m_sceneNum = m_title.update();
		switch (m_sceneNum) {
			case 0:
				m_kind = SceneManager::kSceneKindTitle;
				break;
			case 1:
				m_kind = SceneManager::kSceneKindMain;
				break;
			case 2:
				m_kind = SceneManager::kSceneKindSetting;
				break;
			case 3:
				m_kind = SceneManager::kSceneKindEnd;
				break;
		}
		isEnd = m_title.isEnd();
		break;
	case SceneManager::kSceneKindMain:
		m_main.update();
		isEnd = m_main.isEnd();
		break;
	case SceneManager::kSceneKindSetting:
		m_setting.update();
		break;
	case SceneManager::kSceneKindEnd:
		m_end.update();
		break;
	default:
		assert(false);
		break;
	}
	if (isEnd)
	{
		switch (m_kind)
		{
		case SceneManager::kSceneKindTitle:
			m_title.end();
			break;
		case SceneManager::kSceneKindMain:
			m_main.end();
			break;
		case SceneManager::kSceneKindSetting:
			m_setting.end();
			break;
		case SceneManager::kSceneKindEnd:
			m_end.end();
			break;
		case SceneManager::kSceneKindNum:
		default:
			assert(false);
			break;
		}
	}
}
void SceneManager::draw() {
	switch (m_kind)
	{
	case SceneManager::kSceneKindTitle:
		m_title.draw();
		break;
	case SceneManager::kSceneKindMain:
		m_main.draw();
		break;
	case SceneManager::kSceneKindSetting:
		m_setting.draw();
		break;
	case SceneManager::kSceneKindEnd:
		m_end.draw();
		break;
	case SceneManager::kSceneKindNum:
	default:
		assert(false);
		break;
	}
}