#!/bin/bash

# Vivify Build Script for QPM

set -e

echo "Building Vivify mod..."

# Create build directory
mkdir -p build
cd build

# Configure with CMake for Android ARM64
cmake .. \
    -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK/build/cmake/android.toolchain.cmake \
    -DANDROID_ABI=arm64-v8a \
    -DANDROID_PLATFORM=android-28 \
    -DCMAKE_BUILD_TYPE=Release

# Compile
cmake --build . --config Release

# Output location
echo "Build complete!"
echo "Output: build/libVivify.so"
