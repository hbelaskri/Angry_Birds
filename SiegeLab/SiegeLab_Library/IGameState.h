#pragma once

#ifndef SIEGELAB_LIBRARY_IGAMESTATE_H_
#define SIEGELAB_LIBRARY_IGAMESTATE_H_

namespace FSM
{

	class IGameState
	{
		public:
			virtual ~IGameState() = default;
			virtual void onEnter();
			virtual void onExit();
	};
}

#endif 