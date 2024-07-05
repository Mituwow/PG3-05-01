#include "StageScene.h"
#include "Novice.h"

void StageScene::Init()
{
}

void StageScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}

void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLUE, kFillModeSolid);
	Novice::ScreenPrintf(620, 360, "STAGE SCENE");
}
