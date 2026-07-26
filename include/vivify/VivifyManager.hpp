#pragma once

#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"

namespace vivify {
    class VivifyManager {
    public:
        static void Initialize();
        static void LoadVisuals();
        static void UnloadVisuals();
    };
}
