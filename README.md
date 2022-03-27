# Co-Design2022_EX1
110.2 EEE5009_軟硬體共同設計：implement EXOR gate with four NAND gates （SystemC）

# Install systemC 

1. To setting systemC on Linux： [Install](https://blog.csdn.net/weixin_44381276/article/details/121641494?spm=1001.2101.3001.6650.9&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-9.pc_relevant_default&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7EBlogCommendFromBaidu%7ERate-9.pc_relevant_default&utm_relevant_index=11)

2. Download the ```test.cc``` 
3. Compile ```test.cc``` using ```g++```(compile with ```.vscode/task.json``` -> args)
4. Run ```test.out```

!!!     

    Don't forget to add ```{where you unzip systemC}/systemc-2.3.3/lib-linux64``` to ```~/.profile```.

    By using the line below and add to the end of ```~/.profile```：
    - ```export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:{where you unzip systemC}/systemc-2.3.0/lib-linux64```