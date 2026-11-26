#include "GameStateMachine.h"
#include "IGameState.h"

void FSM::GameStateMachine::ChangeState(IGameState* _state)
{
	m_current_state = _state;
}

FSM::IGameState* FSM::GameStateMachine::GetCurrentState() const
{
	return m_current_state;
}
