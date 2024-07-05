#include <Novice.h>
#include <GameManager.h>

const char kWindowTitle[] = "GC1B_12_ハラサワミツタカ";
const int kWindowWidth = 1280;
const int kWindowHeight = 720;

	// Windowsアプリでのエントリーポイント(main関数)
	int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

		// ライブラリの初期化
		Novice::Initialize(kWindowTitle, kWindowWidth, kWindowHeight);

		GameManager* gameManager = new GameManager();

		gameManager->Run();

		// ライブラリの終了
		Novice::Finalize();
		return 0;
	}


