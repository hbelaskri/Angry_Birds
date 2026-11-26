#pragma once

#ifndef SIEGELAB_LIBRARY_GAMESTATEMACHINE_H_
#define SIEGELAB_LIBRARY_GAMESTATEMACHINE_H_

#include "IGameState.h"

namespace FSM
{ 
	class GameStateMachine
	{
	public:
		void ChangeState(IGameState* _state);
		IGameState* GetCurrentState() const;

	private:
		IGameState* m_current_state = nullptr;
		bool m_is_transitioning = false;

	};

}

#endif 