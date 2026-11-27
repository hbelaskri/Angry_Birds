#include "pch.h"
#include "GameStateMachine.h"
#include "IGameState.h"
#include "StartState.h"
#include <string>
#include <vector>
#include "PlayingState.h"
#include "GameOverState.h"
#include "GameController.h"

TEST(GameState, GS07_EnterExitCalledExactlyOnceInOrder)
{
	FSM::StartState start;
	FSM::PlayingState playing;
	FSM::GameOverState gameover;
	FSM::GameStateMachine machine;

    const std::vector<std::string> expected =
    {
      "Start.enter",
      "Start.exit",
      "Playing.enter",
      "Playing.exit",
      "GameOver.enter",
      "GameOver.exit",
      "Start.enter"
    };

    machine.ChangeState(&start);
    machine.ChangeState(&playing);
    machine.ChangeState(&gameover);
    machine.ChangeState(&start);
}

//pas finis dont forget !!

TEST(GameState, GS01_StartToPlaying)
{
    FSM::GameController controller;
    controller.Start();

    FSM::IGameState* initial_state = controller.GetCurrentState();

    ASSERT_NE(initial_state, nullptr);

    controller.HandleEnter();

    EXPECT_NE(controller.GetCurrentState(), initial_state);
}