[![Github All Releases](https://img.shields.io/github/downloads/secsome/FA2sp/total.svg)](https://github.com/secsome/FA2sp/releases)
[![Workflow](https://img.shields.io/github/workflow/status/secsome/FA2sp/Nightly%20Build.svg)](https://github.com/secsome/FA2sp/actions)
[![license](https://img.shields.io/github/license/secsome/FA2sp.svg)](https://www.gnu.org/licenses/agpl-3.0.en.html)

# FA2sp
...is an engine extension project launched by secsome and aimed at providing a set of new features and fixes for FinalAlert2 based on [FA2pp](https://github.com/secsome/FA2pp) and [Syringe](https://github.com/Ares-Developers/Syringe) to allow injecting code.

While FA2sp is independent of FA2Ext by AlexB, you cannot use FA2sp with using FA2Ext.

Currently, FA2sp uses `Visual Studio 2022 (v143)` with `/std:c++latest` to build the lastest versions.

Downloads
---------

You can choose one of the following:
- [Latest stable branch build](https://github.com/secsome/FA2sp/releases/latest)
- [Latest development branch builds](https://github.com/secsome/FA2sp/releases)
- [Latest development branch nightly](https://nightly.link/secsome/FA2sp/blob/develop/.github/workflows/nightly.yml)
- Individual new feature builds (for testing) can be found in [pull requests](https://github.com/secsome/FA2sp/pulls)

Changelog
---------

You can check the full changelog [here](https://github.com/secsome/FA2sp/blob/master/CHANGELOG.md).

Document
---------

You can check the document [here](https://github.com/secsome/FA2sp/blob/master/DOCUMENT.md).

[Unexplored](https://github.com/secsome/FA2sp/blob/master/UNEXPLORED.md)
---------

Modification
---------

由TG代发 FA2sp-HT负责人:RA210086
基于FA2sp进行和开发了一些易用性修改

FA2Data:
增添了ExtConfig各条目的注释
在代码层禁用了"FastSave(Just save by .map)”于公版之后更新中被取代
复刻了FA2Copy中对地形的分类添加条目与"地形管理器"二选—
给"部分字符串的颜色"预留了接口
增添了"Ctrl+S时取消热键冲突带来的Ctrl多选地形块的误用"的条目
给"光照设置"预留了接口并预留了常见的光照模板供麻婆选择(复刻曾经的脚本
)给"在线网站"预留了接口并附加了鸿图对战平台相关的Url
对建筑物和单位阵营进行了易用性分类
补全了"Phobos对地编的拓展"的相关内容
修复了ScriptsRA2的部分错误于公版之后更新中被取代部分小修小改

FALanguage:
增添了单位状态的翻译和相关条目增添了TX地形的译名
地图测试相关条目
对—些地方进行了补充说明部分小修小改

地编本体及类库:
保存地图时开头附加的内容补充了更多信息
在拥有FinalAlert.ini的Exe=但找不到资源时
增添了重新获取游戏位置的窗口
增添了"光照设置"中的模板选择
增添了"地图测试"功能

---------
