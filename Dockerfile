FROM ubuntu:22.04

RUN apt-get update && apt-get install -y \
    build-essential cmake git ninja-build clang lcov curl wget unzip \
    libgtest-dev libgmock-dev

WORKDIR /app
COPY . .

RUN cmake -S . -B build -G Ninja \
 && cmake --build build \
 && ctest --test-dir build --output-on-failure
