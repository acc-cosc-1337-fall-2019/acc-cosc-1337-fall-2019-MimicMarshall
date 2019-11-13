//line.h
#ifndef LINE_H
#define  LINE_H
#include"../07_module/shape.h"

namespace mod7ex
{
	class Line : public Shape
	{
	public:
		void draw() override;
	};
}

#endif // !LINE_H