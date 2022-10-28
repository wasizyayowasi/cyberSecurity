#pragma once
#include "FieldBase.h"

class BottomLeftOfField : public FieldBase {
public:
	BottomLeftOfField();
	~BottomLeftOfField();

	void init();
	void end();
	void update();
	void draw();

private:

};