# Torch

- [Torch](https://pytorch.org/get-started/locally/) 構成を選択してダウンロード

## Python
- コマンドライン起動
	- コマンドライン(cmd)から $python で起動
	    ~~~
	    # 以下のようにすると一行ずつ実行される
	    >>>print("HelloWorld")
	    # 終了するには以下のようにする
	    >>>exit()
	    ~~~
- ファイルを実行
    ~~~
    $pyhton Hello.py
    ~~~

- VSCode
	- File - Preferences - Extensions - Python で検索 - IntelliSence, Linting, ... - Install でインストール
	- ソースコードを開き、右上にある ▶ を押すと実行される
	- Shit + Enter で「現在の行」や「選択範囲」を実行可能
		- これを使用した後はターミナル右上の 「ごみ箱」 ボタンを押してクリアしないと ▶ 使用時にエラーになるので注意	

## C++
- [CUDA 11.8](https://developer.nvidia.com/cuda-11-8-0-download-archive?target_os=Windows&target_arch=x86_64&target_version=11&target_type=exe_network) をインストール
	- バージョンを Torch に合わせたものをインストールしておく
	- インストールパスは以下のようになり、環境変数  CUDA_PATH が定義される
	    ~~~
	    C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA
	    ~~~
- [CuDNN](https://developer.nvidia.com/cudnn) をインストール
	- 解凍して CUDA_PATH 以下へコピーしておく
- [VS2022プロジェクトテンプレート](https://marketplace.visualstudio.com/items?itemName=YiZhang.libtorch2022)
	- 新規プロジェクトを作成時に LibTorch テンプレートから作成 - Debug、Release へそれぞれのビルド構成の LibTorch ライブラリパスを指定
	- Windows SDK のバージョンで怒られる場合は、プロパティ - Windows SDK Version をインストールされているものに合わせる

<!--
- 自前でやる場合
	- 追加のインクルードディレクトリ
	~~~
	libtorch\include
	libtorch\include\torch\csrc\api\include
	~~~
	- 追加のライブラリディレクトリ
	~~~
	libtorch\lib
	~~~
	- 入力
	~~~
	c10.lib
	caffe2_module_test_dynamic.lib	
	torch.lib
	~~~
-->
