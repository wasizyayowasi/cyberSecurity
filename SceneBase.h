#pragma once
// ゲームシーン基底クラス
class SceneBase
{
public:
	SceneBase() {}
	virtual ~SceneBase() {}


	virtual void init() {}
	virtual void end() {}

	virtual void update() {}
	virtual void draw() {}
};