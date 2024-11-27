cmake_minimum_required(VERSION 3.10)

# プロジェクト名
project(Calculator LANGUAGES CXX)

# 実行ファイルを作成
add_executable(calculator src/calculator.cpp)

# custom_math ライブラリを検索
find_library(CUSTOM_MATH_LIB custom_math PATHS /usr/local/lib/custom_math)

# ライブラリが見つからない場合のエラー
if(NOT CUSTOM_MATH_LIB)
    message(FATAL_ERROR "custom_math library not found!")
endif()

# インクルードディレクトリを指定
include_directories(/usr/local/include/custom_math)

# ライブラリをリンク
target_link_libraries(calculator ${CUSTOM_MATH_LIB})

# cd build
# cmake ..
# make
# ./calculator