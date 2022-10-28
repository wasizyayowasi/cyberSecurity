#pragma once
#include "FieldBase.h"

class BottomRightOfField : public FieldBase {
public:
	BottomRightOfField();
	~BottomRightOfField();

	void init();
	void end();
	void update();
	void draw();

private:

};