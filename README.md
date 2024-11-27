ライブラリを作成し、別パッケージからライブラリを読み込む練習  
Linuxを想定（windowsの人はwsl使って）。
1. ライブラリを作成。

        cd sample_library
        mkdir build
        cd build
        cmake ..
        make
        sudo make install # /usr/local/lib, /usr/local/includeにそれぞれ`.lib`と`.hpp`ファイルができる。

2. 実行ファイルをビルド

        cd calculator
        mkdir build
        cd build
        cmake ..
        make
        ./calculator