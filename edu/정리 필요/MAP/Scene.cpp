#include<iostream>
#include<map>

class Scene {
private:
	std::string desc;
public:
	Scene()
		:desc("") {}
	Scene(const std::string& desc)
		:desc(desc){}

	std::string GetDesc()const {
		return desc;
	}
};
class SceneManager {
private:
	std::map<std::string, Scene*>scenes;
	Scene* currentScene;
	std::string currentSceneName;
public:
	SceneManager():currentScene(nullptr),currentSceneName(""){}
	~SceneManager() {
		for (auto& pair : scenes) {
			delete pair.second;
		}
	}
public:
	void AddScene(const std::string& name, Scene* scene) {
		scenes[name] = scene;
	}
	void RemoveScene(const std::string& name) {
		auto it = scenes.find(name); //씬이름으로 map에서 찾고
		if (it != scenes.end()) { //있으면
			delete it->second; //동적할당된 씬 객체 메모리 해제
			scenes.erase(it); //맵에서 씬 삭제
		}
	}
	void SetCurrentScene(const std::string& name) {
		auto it = scenes.find(name); //씬이름으로 map에서 찾고
		if (it != scenes.end()) { //있으면
			currentScene = it->second; //현재씬 설장혹
			currentSceneName = name; //현재씬 이름설정
		}
		else {
			//
			std::cout << "해당 씬을 찾을 수 없다" << std::endl;
		}
	}
	void ShowCurrentScene()const {
		if (currentSceneName.empty()) {
			std::cout << "현재 씬이 설정되어 있지 않음" << std::endl;
			return;
		}
		std::cout << "현재 씬 : " << currentSceneName << std::endl;
		std::cout << "씬 설명 : " << currentScene->GetDesc() << std::endl;
	}

};

int main() {
	SceneManager* sceneManager = new SceneManager();

	sceneManager->AddScene("MainMenu", new Scene("메인 메뉴 : 게임시작, 옵션, 종료"));
	sceneManager->AddScene("BattleLevel1", new Scene("레벨 1, 첫번째 전투 시작"));

	sceneManager->SetCurrentScene("MainMenu");
	sceneManager->ShowCurrentScene();

	std::cout << "씬을 전환한다" << std::endl;
	sceneManager->SetCurrentScene("BattleLevel1");
	sceneManager->ShowCurrentScene();

	sceneManager->RemoveScene("BattelLevel1");

	delete sceneManager;
	sceneManager = nullptr;
}