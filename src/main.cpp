#include "PlayerComponent.hpp"
#include "DungeonComponent.hpp"
#include "PathfindingComponent.hpp"
#include "engine.hpp"

using namespace derogue;

int main(){
Engine* engine = new Engine();

engine->RegisterComponent<WorldComponent>();
engine->RegisterComponent<DungeonComponent>();
engine->RegisterComponent<PlayerComponent>();
engine->RegisterComponent<PathfindingComponent>();

engine->Init();
engine->Run();

return 0;
}
