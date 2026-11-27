#ifndef SIEGELAB_LIBRARY_GAMECONTROLLER_H_
#define SIEGELAB_LIBRARY_GAMECONTROLLER_H_

#include "IGameState.h"
#include "GameStateMachine.h"
#include "StartState.h"
#include "PlayingState.h"
#include "GameOverState.h"

namespace FSM
{

	class GameController
	{
		public:
			void Start();
			void HandleEnter();
			IGameState* GetCurrentState() const;

		private:
			StartState       m_start_state;
			PlayingState     m_playing_state;
			GameOverState    m_game_over_state;
			GameStateMachine m_state_machine;
	};

}

#endif