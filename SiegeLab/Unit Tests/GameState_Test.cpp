#include "pch.h"
#include "GameStateMachine.h"
#include "IGameState.h"
#include "StartState.h"

TEST(GameState, InitialStateIsNull)
{
	FSM::GameStateMachine machine;

	EXPECT_EQ(machine.GetCurrentState(), nullptr);
}

TEST(GameState, ChangeStateSetsCurrentState)
{
	FSM::StartState state;
	FSM::GameStateMachine machine;

	machine.ChangeState(&state);

	EXPECT_EQ(machine.GetCurrentState(), &state);
}