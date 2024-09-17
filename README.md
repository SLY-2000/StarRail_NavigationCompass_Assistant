# Navigation Compass
崩坏星穹铁道大世界引航罗盘小助手

## 免责声明
本软件是一个外部工具旨在自动化崩坏星轨的游戏玩法。它被设计成仅通过现有用户界面与游戏交互,并遵守相关法律法规。该软件包旨在提供简化和用户通过功能与游戏交互,并且它不打算以任何方式破坏游戏平衡或提供任何不公平的优势。该软件包不会以任何方式修改任何游戏文件或游戏代码。

This software is open source, free of charge and for learning and exchange purposes only. The developer team has the final right to interpret this project. All problems arising from the use of this software are not related to this project and the developer team. If you encounter a merchant using this software to practice on your behalf and charging for it, it may be the cost of equipment and time, etc. The problems and consequences arising from this software have nothing to do with it.

本软件开源、免费，仅供学习交流使用。开发者团队拥有本项目的最终解释权。使用本软件产生的所有问题与本项目与开发者团队无关。若您遇到商家使用本软件进行代练并收费，可能是设备与时间等费用，产生的问题及后果与本软件无关。


请注意，根据MiHoYo的 [崩坏:星穹铁道的公平游戏宣言]([https://hsr.hoyoverse.com/en-us/news/111244](https://sr.mihoyo.com/news/111246?nav=news&type=notice)):

    "严禁使用外挂、加速器、脚本或其他破坏游戏公平性的第三方工具。"
    "一经发现，米哈游（下亦称“我们”）将视违规严重程度及违规次数，采取扣除违规收益、冻结游戏账号、永久封禁游戏账号等措施。"

## 使用方法：
双击Navigation Compass.exe
输入
a:轮盘1和终点距离格子数
b:轮盘2和终点距离格子数
c:轮盘3和终点距离格子数
代码会用暴力穷举法计算出罗盘解法：
输出
x:轮盘1和轮盘2联动旋转次数
y:轮盘1和轮盘3联动旋转次数
z:轮盘2和轮盘3联动旋转次数

### 注意：
轮盘1：每次转动一格的轮盘
轮盘2：每次转动两格的轮盘
轮盘3：每次转动四格的轮盘

## 使用示例：
仙舟引航罗盘
![罗盘示例](https://github.com/SLY-2000/StarRail_NavigationCompass_Assistant/blob/master/Compass_Example.png)

图中的罗盘均为逆时针旋转，因此离终点距离格子数均为2
![使用示例](https://github.com/SLY-2000/StarRail_NavigationCompass_Assistant/blob/master/Executable_Example.png)
输入离终点格子数2后，得到旋转次数，按照结果旋转罗盘即可。

