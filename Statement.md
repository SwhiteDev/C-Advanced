# 分析C语言的声明
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
在典型的情况下，并不会频繁给整个数组赋值操作，但如果需要这样，可以通过把它放到结构体中实现<br/>
