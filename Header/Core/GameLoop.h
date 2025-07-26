#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"

// Forward declaration to avoid circular dependency
namespace Gameplay {
	class GameplayManager;
}

using namespace sf;
using namespace Core;
using namespace GameEvent;
using namespace std;

namespace Core
{
	class GameLoop
	{
		private:
			GameWindowManager* game_window_manager;
			EventManager* event_manager;
			Gameplay::GameplayManager* gameplay_manager;

		public:
			void initialize();
			bool isGameRunning();
			void pollEvent();
			void update();
			void render();
	};
}