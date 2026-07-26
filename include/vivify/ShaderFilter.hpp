#pragma once

// Quest-compatible shader system
// Filters out shaders that Quest cannot handle

namespace vivify::shaders {
    // Supported Quest shader types
    enum class ShaderType {
        Standard,
        StandardSpecular,
        Unlit,
        Particles,
        UI
    };

    bool IsQuestCompatibleShader(ShaderType type) {
        // Quest can handle basic lit/unlit shaders
        // Excludes: complex PBR, compute shaders, tessellation
        switch (type) {
            case ShaderType::Standard:
            case ShaderType::StandardSpecular:
            case ShaderType::Unlit:
            case ShaderType::Particles:
            case ShaderType::UI:
                return true;
            default:
                return false;
        }
    }
}
