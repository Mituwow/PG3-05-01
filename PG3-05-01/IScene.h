#pragma once

enum SCENE { TITLE, STAGE, CLEAR };

class IScene {

protected:
	static int sceneNo;

public:
	virtual ~IScene();
	virtual void Init() = 0;
	virtual void Update(char* keys, char* preKeys) = 0;
	virtual void Draw() = 0;

	int GetSceneNo_();

};