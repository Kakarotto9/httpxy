# httpxy
## 实现一款轻量型的http服务器。（主要参考tinyhttpd）

### 项目描述  
c++语言实现    
linux操作系统支持    
使用tcp/ip传输协议    
支持GET，POST请求  
支持获取动态脚本


### 目录结构：
```
|---- tests         案例测试  
|---- code          存放主要代码  
|---- file          html,py文件存放位置   
|---- example       Http示例
|-----makefile      
 ```
### Code部分文件结构
```
|--  code   
    |-- Cdebug{h,cpp}        
    |-- ThreadPOOl{h,cpp}    线程池
    |-- HttpServer{.h,.cpp}  Http代码
```

## 代码部分都有详细的注释，方便阅读代码。  
## 代码阅读顺序： 按照example下的http.cpp的运行流程分析即可
