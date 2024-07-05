#include "ClearScene.h"
#include "Novice.h"

void ClearScene::Init()
{
}

void ClearScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}

void ClearScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLACK, kFillModeSolid);
	Novice::ScreenPrintf(620, 360, "CLEAR SCENE");
}
