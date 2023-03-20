# Course-Design-GroundStation-for-STM32F401CCU6-
使用软件：Qt Creator 4.10.1、qwt、quc自定义控件。使用语言：C++  

基于无名创新飞控开源地面站——NGroundStation进行修改，感谢大佬开源。  

**——截止至3.20——**  
**完成了主界面、配置界面、串口收发界面、飞控状态、飞控设置界面。**  
1. 完成串口基本收发。包括16进制转换，以及定时发送等功能。使用sscom测试通过
2. 完成飞控状态中，pitch、roll、yaw、高度（vbat）、状态的数据实时收发。使用sscom结合虚拟串口，发送对应数据格式通过。
3. 完成飞控设置中，PID1、2、3的三个角度（roll、yaw、pitch）对应的PID读取与写入。使用sscom结合虚拟串口，发送对应数据格式通过。
