# 分析C语言的声明
## （类）结构体
    struct s_tag {int a[100]};
    struct s_tag orange,lime,lemon;
    struct s_tag twofold(struct s_tag s)
    {
    int j;
    for(j = 0;j < 100;j++)
    s.a[j] *= 2;
    return s;
    }
    void main()
    {
    int i;
    for(i = 0;i < 100;i++)
    lime.a[i] = 1;
    lemon = twofold(lime);
    orange = lemon;
    }
    在典型的情况下，并不会频繁给整个数组赋值操作，但如果需要这样，可以通过把它放到结构体中实现
    union bits32_tag{
    int whole;       //the whole 32bits
    struct {cahr c0,c1,c2,c3;}byte;    //four 8 bits
    }value;
    该联合允许提取整个32bit值，也可单独提取4个bytes
## 优先级
    A   声明从它名字开始读取
    B   优先级从高到低：
        B.1 声明中被括号括起来的部分
        B.2 后缀操作符（括号表示这是个函数，放括号表示数组）
        B.3 前缀操作符（*表示“指向...的指针”）
    C   如果const或volatile关键字后紧跟类型说明符，那么他做用于类型说明符，其他情况下
        作用于它左边紧邻的指针星号
    例如：char * const *(*next)();
## typedef
    typedef void(*ptr_to_func) (int);
    /*它表示prt_to_func是个函数指针
     *该函数接受一个int参数
     *返回值void
     */
    prt_to_func signal(int, ptr_to_func);
    /*它表示signal是一个函数，它接受两个参数
     *一个是int，一个是prt_to_func
     *返回值是prt_to_func
     */
