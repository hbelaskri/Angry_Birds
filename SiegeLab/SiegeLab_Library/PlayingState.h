#pragma once

#ifndef SIEGELAB_LIBRARY_PLAYINGSTATE_H_
#define SIEGELAB_LIBRARY_PLAYINGSTATE_H_

#include "IGameState.h"

namespace FSM
{
	class PlayingState : public IGameState
	{
	public:
		void OnEnter()override;
		void OnExit()override;
	};

}

#endif