#pragma once
#include "../../Header/Gameplay/Paddle.h"
#include "../../Header/Gameplay/Ball/Ball.h"

namespace Gameplay
{
	class GameplayManager
	{
	private:
		void initialize();
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;
		
	public:
		GameplayManager();
		void update();
		void render(RenderWindow* game_window);

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

	};
}