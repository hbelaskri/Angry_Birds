#pragma once

#ifndef SIEGELAB_LIBRARY_GAMEOVERSTATE_H_
#define SIEGELAB_LIBRARY_GAMEOVERSTATE_H_

#include "IGameState.h"

namespace FSM
{
	class GameOverState : public IGameState
	{
	public:
		void OnEnter()override;
		void OnExit()override;

	};
}


#endif
