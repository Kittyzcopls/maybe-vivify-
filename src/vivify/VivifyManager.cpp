#include "vivify/VivifyManager.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"

static ModInfo modInfo {"vivify", "1.0", "kittycopls"};

// Logger
static Logger& getLogger() {
    static auto logger = new Logger(modInfo);
    return *logger;
}

void vivify::VivifyManager::Initialize() {
    getLogger().info("Initializing Vivify!");
    getLogger().info("Map visuals system loaded - Quest compatible shaders only");
}

void vivify::VivifyManager::LoadVisuals() {
    getLogger().info("Loading map visuals...");
}

void vivify::VivifyManager::UnloadVisuals() {
    getLogger().info("Unloading map visuals...");
}

extern "C" void setup(ModInfo& info) {
    info = modInfo;
}

extern "C" void load() {
    getLogger().info("Loading Vivify mod!");
    vivify::VivifyManager::Initialize();
    vivify::VivifyManager::LoadVisuals();
}
