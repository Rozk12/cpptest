cmake_minimum_required(VERSION 3.10)

# プロジェクト名を設定
project(CustomMathLibrary LANGUAGES CXX)

# ヘッダーファイルのパスを指定
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# ソースファイルをセットアップ
set(SOURCES
    src/custom_math.cpp
)
set(PUBLIC_HEADERS
    include/custom_math.hpp
)

# 共有ライブラリを作成
add_library(custom_math SHARED ${SOURCES})

# 公開ヘッダーのディレクトリを設定
target_include_directories(custom_math PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# インストールターゲットを設定
# default DESTINATION is /usr/local -> library will be installed in /usr/local/lib and headers in /usr/local/include
install(TARGETS custom_math
    LIBRARY DESTINATION lib/custom_math
    PUBLIC_HEADER DESTINATION include/custom_math
)
install(FILES ${PUBLIC_HEADERS} DESTINATION include/custom_math)
# # ビルドディレクトリを作成
# mkdir build
# cd build

# # CMakeを実行してMakefileを生成
# cmake ..

# # ビルド
# make

# # インストール（デフォルトでは /usr/local にインストールされます）
# sudo make install