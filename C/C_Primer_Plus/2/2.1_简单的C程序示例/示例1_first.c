#include <stdio.h>              /*#include是预处理指令*/
int main(void)                  /*一个简单的C程序*/
{/*函数定义开始*/                /*main函数是第一个被调用的函数，即C程序的入口函数*/
    int num;                    /*定义一个名为num的变量（声明）*/
    num = 1;                    /*为num赋一个值*/
    printf("I am a simple ");   /*使用printf()函数*/
    printf("computer.\n");
    printf("My favorite number is %d becuse it it first.\n", num);

    return 0;
}/*函数定义结束*/
/*C程序运行总是从main函数开始执行我们的代码，main函数是主函数main函数，
它是程序的入口，大括号里面的东西是语句*/
/*#include <stdio.h>表明包含另一个文件，include是包含的意思。
其中，stdio表示standard input output的英文缩写，即标准的输入输出
h表示header头文件
该行告诉编译器把stdio.h的内容包含在当前程序中。stdio.h是C编译器软件包
的标准部分（标准库），它提供键盘输入和屏幕输出的支持。*/
/*printf是一个标准的输出函数，print是打印的意思，f是function，函数的简写*/
/*C程序包括一个或者多个函数，它们是C程序的基本模块。该程序中有一个名为
main()的函数。圆括号表明main()是一个函数名。int表明main()函数返回一个
整数，void表明main()不带任何参数。需要记住int和void是标准ANSI C定义
main()的一部分*/
/*C写程序大多数都是通过函数来进行模块的组装，一个函数代表一个业务。
int是intger的简写，表明整数。void是空的意思，表明不带参数，无需传值*/
/*{左花括号表示函数定义开始，}右花括号表示函数定义结束*/
/*int num;为声明，该声明表明，将使用一个名为num的变量，而且num是int（整数）类型*/
/*num = 1;赋值表达式语句，把值1赋给名为num的变量*/
/*变量的命名要具有可读性*/
/*printf()是标准的C库函数。在程序中使用函数叫做调用函数，光标会停在同一行
加上\n(换行符)告诉计算机另起一行，即把光标移动到下一行。
最后调用的printf()把num的值内嵌在用双引号括起来的内容中一并打印。
%d（占位符）告诉计算机以何种形式输出num的值，打印在何处。d表示它打印的是整型int型*/
/*return 0;C函数可以给调用方提供（或返回）一个数。目前，可以暂时把该行
看作是结束main()函数的要求。
一般以分号结束的认为它是一条语句。*/
//程序细节
//1.#include指令和头文件
/*#include <stdio.h>是程序的第一行，作用相当于把stdio.h文件中的所有内容
都输入该行所在的位置。实际上，这是一种“拷贝-粘贴”的操作。
stdio是C语言的库，通过对stdio的调用，从而在随后的main函数中，可以使用库中
的函数功能。当编译完成后，链接器生成启动代码和取得库代码，填充进我们书写的
源代码中，取代其中写下的那些调用了库函数的位置，从而变成一个完整的可执行文件。
include文件提供了一种方便的途径来共享许多程序共有的信息。
标准的输入输出头文件(stdio.h)包含许多函数。从而使用C语言时引用函数只需要
调用头文件即可，无需自己再次手动实现函数。
#include这行代码是一条C预处理器指令(preprocessor directive)。通常，C编译器
在编译前会对源代码做一些准备工作，即预处理(preprocessing)。
所有的C编译器软件包都提供stdio.h文件。该文件中包含了供编译器使用的输入和输出函数
(如printf())信息。该文件名的含义是标准输入/输出头文件。通常，在C程序顶部的信息
集合被称为头文件(header)。
在大多数情况下，头文件包含了编译器创建最终可执行程序要用到的信息。例如，头文件
中可以定义一些常量，或者指明函数名以及如何使用它们。但是，函数的实际代码在一个
预编译代码的库文件中。简而言之，头文件帮助编译器把你的程序正确地组合在一起。
ANSI/ISO C规定了C编译器必须提供哪些头文件。有些程序要包含stdio.h，而有些不用。
特定C实现的文档中应该包含对C库函数的说明。这些说明确定了使用哪些函数需要包含哪些
头文件。例如，要使用printf()函数，必须包含stdio.h头文件。省略必要的头文件可能
不会影响某一特定程序，但是最好不要这样做。每次使用库函数，都应该用#include指令
包含ANSI/ISO标准指定的头文件。
不在语言中内置输入输出的原因：
并非所有的程序都会用到I/O(输入/输出)包。轻装上阵表现了C语言的哲学。正是这种经济
使用资源的原则，使得C语言成为流行的嵌入式编程语言（例如，编写控制汽车自动燃油系统
或蓝光播放机芯片的代码）。#include中的#表明，C预处理器会在编译器接手之前处理这条
指令。*/
//2.main()函数
/*int main(void);       函数声明为int，返回为空。
first.c程序中的第二行表明该函数名为main。的确，main是一个极其普通的名称，但是这是
唯一的选择。C程序一定从main()函数开始执行(目前不考虑例外的情况)。除了main()函数，
你可以任意命名其他函数，而且main()函数必须是开始的函数。圆括号的功能是识别main()是
一个函数。函数是C程序的基本模块。
int是main()函数的返回类型。这表明main()函数返回的值是整数。返回到哪里？--返回给
操作系统。原则上，任何程序退出时都应有一个exitCode(或称errorCode)，表明当前程序
是否执行正确。一般0表示??，非0表示?，具体非0代表什么意思，由程序员按照设计文档
实现。
通常，函数名后面的圆括号中包含一些传入函数的信息。该例中没有传递任何信息，因此，圆
括号内是单词void。
void是C语言中的一个关键字，其含义为空。C语言中，单独的void有两种用途，分别是对函数
返回的限定和对函数参数的限定。*/
//3.注释
//4.花括号、函数体和块
/*
{
    ...
}
此例中，花括号把main()函数括起来。一般而言，所有的C函数都是用花括号标记函数体的
开始和结束。这是规定，不能省略。只有花括号才能起这种作用，圆括号和方括号都不行。
花括号还可用于把函数中的多条语句合并为一个单元或块。*/
//5.声明
/*int num;
此例中，这行代码叫做声明(declaration)。未声明的无法使用。声明是C语言最重要的
特性之一。在该例中，声明完成了两件事。其一，在函数中有一个名为num的变量(variable)
其二，int表明num是一个整数(即，没有小数点或小数部分的数)。int是一种数据类型。
编译器使用这些信息为num变量在内存中分配存储空间。分号在C语言中是大部分语句和声明
的一部分。声明给了变量内存中的一个地址，其大小和类型有关，如有赋值，则该值会存到
分配到的地址中。可以通过变量名找到其对应的存储空间，并且将其被赋的值放在这个内存
空间中。
int是C语言的一个关键字(keyword)，表示一种基本的C语言数据类型。关键字是语言定义
的单词，不能做其他用途。例如，不能用int作为函数名和变量名。
示例中的num是一个标识符(identifier)，也就是一个变量、函数或其他实体的名称。
因此，声明把特定标识符与计算机内存中的特定位置联系起来，同时也确定了储存在某位置
的信息类型或数据类型。
在C语言中，所有的变量都必须先声明然后才能使用。这意味着必须列出程序中用到的所有
变量名及其类型。*/
//命名
/*给变量命名时要使用有意义的变量名或标识符（如，程序中需要一个变量数羊，该变量名
应该是sheep_count而不是x3）。如果变量名无法清楚地表达自身的用途，可在注释中进一步
说明（这是一种良好的编程习惯和编程技巧）。
可以用小写字母、大写字母、数字和下划线_来命名。而且，名称的第一个字符必须时字母或
下划线，不能是数字。
操作系统和C库经常使用以一个或两个下划线字符开始的标识符（如，_kcab），因此最好避免
在自己的程序中使用这种名称。标准标签都以一个或两个下划线字符开始，如库标识符。这样
的标识符都是保留的。这意味着，虽然使用它们没有语法错误，但是会导致名称冲突。
C的名称区分大小写，即把一个字母的大写和小写视为两个不同的字符。
为了让C语言更加国际化，C99和C11根据通用字符名（UCN）机制添加了扩展字符集。其中
包含了除了英文字母以外的部分字符。*/
/*声明变量的四个理由：
1.都存放在一起，方便读者查找和理解程序的用途（通过变量名和注释）
2.声明变量会促使你在编写之前做一些计划：
要获取哪些信息？希望如何输入？数据如何表示？
3.有助于发现程序中的小错误，例如变量名的拼写错误。
4.未事先声明，无法通过编译。*/
//6.赋值
/*num = 1;
该例中这行代码是赋值表达式语句。赋值时C语言的基本操作之一。该行代码的意思是“把值
1赋给变量num”。在执行int num;声明时，编译器在计算机内存中为变量num预留了空间，然
后在执行这行赋值表达式语句时，把值存储在之前预留的位置。可以给num赋不同的值，这就
是num之所以被称为变量(variable)的原因。注意，该赋值表达式语句从右侧把值赋到左侧。
另外，该语句以分号结尾。*/
//7.printf()函数
/*圆括号表明printf是一个函数名。圆括号中的内容是从main()函数传递给printf()函数的
信息。例如，printf("hello world");是把hello world传递给printf()函数。该信息
被称为参数，或者更确切地说，是函数的实际参数(actual argument)，在C语言中，实际参数
（简称实参）是传递给函数的特定值，形式参数（简称形参）是函数中用于存储值的变量。
printf()函数获取参数用来查看双引号中的内容，并将其打印在屏幕上。
printf()展示了在C语言中如何调用函数。只需输入函数名，把所需的参数填入圆括号即可。
当程序运行到这一行时，控制权被转给已命名的函数(该例中为printf())。函数执行结束后，
控制权被返回至主调函数(calling function)，该例中是main()。
%d:相当于是一个占位符，其作用是指明输出num值的位置。%提醒程序，要在该处打印一个
变量，d表明把变量作为十进制整数打印。printf()函数名中的f提醒用户，这是一种格式化
打印函数。printf()函数有多种打印变量的格式，包括小数和十六进制整数。*/
//8.return语句
/*return 0;
return语句是程序的最后一条语句。int main(void)中毒的int表明main()函数应返回一个
整数。C标准要求main()这样做。有返回值的C函数要有return语句。该语句以return关键字
开始，后面是待返回的值，并以分号结尾。如果遗漏main()函数中的return语句，程序在运行
至最外面的右花括号}时会返回0。因此，可以省略main()函数末尾的return语句。但是，不要
在其他有返回值的函数中漏掉它。因此，强烈建议读者养成在main()函数中保留return语句
的好习惯。在这种情况下，可将其看作是统一代码风格。对于某些操作系统(Linux\UNIX)，
return语句有实际的用途。*/
//C程序的基本结构
/*程序由一个或多个函数组成，必须有main()函数。函数由函数头和函数体组成。函数头
包括函数名、传入该函数的信息类型和函数的返回类型。通过函数名后的圆括号可识别出
函数，圆括号里可能为空，可能有参数。函数体被花括号括起来，由一系列语句、声明组成。
本例声明声明了程序使用的变量名和类型。然后是一条赋值表达式语句，变量被赋给一个值。
接下来是3条printf()语句，调用printf()函数3次。最后，main()以return语句结束。*/