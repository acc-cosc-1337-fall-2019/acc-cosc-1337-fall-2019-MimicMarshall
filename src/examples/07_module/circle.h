//circle.h
#ifndef  CIRCLE_H
#define  CIRCLE_H

#include"../07_module/shape.h"
namespace mod7ex
{
	class Circle : public Shape
	{
	public:
		void draw() override;
	};
}
#endif // ! CIRCLE_h