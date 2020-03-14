#ifndef _GAME_OBJECT_BALL_H_
#define _GAME_OBJECT_BALL_H_

#include "SceneObjects/GeometryObject.h"
using namespace DirectX;

class Ball : public GeometryObject {
private:
	static constexpr float DEFAULT_SPEED_X = 15.0f;
	static constexpr float DEFAULT_SPEED_Y = 3.0f;

public:
					Ball(const std::string& name, XMFLOAT3 position);
					Ball(const std::string& name);

	int				GetSize();
	float			GetSpeedX();
	float			GetSpeedY();
	BoundingBox		GetBoundingBox() { return m_bb; }

	void			SetSize(int value);
	void			SetSpeedX(float value);
	void			SetSpeedY(float value);
	void			InverseSpeedX();
	void			InverseSpeedY();

	void			Update(float dt)override;
	void			Reset();

private:
	void			UpdateBB();

private:
	BoundingBox		m_bb;
	int				m_size;
	float			m_speedX;
	float			m_speedY;

};

#endif //_GAME_OBJECT_BALL_H_
