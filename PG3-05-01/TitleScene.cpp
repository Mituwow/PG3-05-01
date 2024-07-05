#include "TitleScene.h"
#include "Novice.h"

void TitleScene::Init()
{
}

void TitleScene::Update(char* keys, char* preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}

void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid);
	Novice::ScreenPrintf(620, 360, "TITLE SCENE");
}
