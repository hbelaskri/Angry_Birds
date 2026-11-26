#ifndef SIEGELAB_LIBRARY_STARTSTATE_H_
#define SIEGELAB_LIBRARY_STARTSTATE_H_

#include "IGameState.h"

namespace FSM
{

	class StartState : public IGameState
	{
	public:
		void OnEnter() override;
		void OnExit() override;
	};

}  

#endif