# Qt Java Wrapper

我一直想要找到一个能够在Java使用的，高版本的Qt的Wrapper，我尝试过
了JavaCpp的Wrapper，以及更老一些的QtJambi，他们似乎不能适应版本较新的
Java语法，尤其是JPMS。

JavaCPP的版本缺少了很多requires语句，而且操作比较繁琐，所以相比那个，
我更喜欢类似JavaFX这种更具有Java风格的框架，因此我决定自己着手编写一个基于JNI
的Qt的JNIWrapper。

本Wrapper已经被证明可以在Windows较为良好的运行，但是由于大部分代码
都是纯手写的，所以工程量很大。