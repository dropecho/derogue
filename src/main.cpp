#include "Components/PlayerComponent.hpp"
#include "Components/DungeonComponent.hpp"
#include "Components/PathfindingComponent.hpp"
#include "Components/LightingComponent.hpp"
#include "engine.hpp"

using namespace derogue;

int main(){
Engine* engine = new Engine();

engine->RegisterComponent<WorldComponent>();
engine->RegisterComponent<DungeonComponent>();
engine->RegisterComponent<PlayerComponent>();
engine->RegisterComponent<PathfindingComponent>();
engine->RegisterComponent<LightingComponent>();

engine->Init();
engine->Run();

return 0;
}
