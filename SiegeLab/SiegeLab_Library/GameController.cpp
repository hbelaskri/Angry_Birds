#include "GameController.h"
#include "IGameState.h"
#include "pch.h"

void FSM::GameController::Start()
{
	m_state_machine.ChangeState(&m_start_state);
}

void FSM::GameController::HandleEnter()
{
}

FSM::IGameState* FSM::GameController::GetCurrentState() const 
{
	return m_state_machine.GetCurrentState();
}
