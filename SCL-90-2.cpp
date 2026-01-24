#define ll long long
#include<bits/stdc++.h>
using namespace std;

// 修复后的输入校验函数：严格校验纯整数，杜绝小数/字母
int getValidInput(const string& question) {
    string inputStr; // 先读取为字符串，方便全量校验
    int inputNum;
    while (true) {
        cout << question << endl;
        // 第一步：读取整行输入（避免缓冲区残留问题）
        cin >> inputStr;

        // 第二步：校验是否为纯整数（无小数点、无字母、无符号）
        bool isPureInt = true;
        for (char c : inputStr) {
            if (!isdigit(c)) { // 只要有一个字符不是数字，就不是纯整数
                isPureInt = false;
                break;
            }
        }
        if (!isPureInt) {
            cout << "输入错误！请输入1-5之间的整数（1=从无、2=很轻、3=中等、4=偏重、5=严重）" << endl;
            continue;
        }

        // 第三步：转换为整数并检查范围
        inputNum = stoi(inputStr); // 字符串转整数
        if (inputNum >= 1 && inputNum <= 5) {
            return inputNum; // 完全合法，返回值
        } else {
            cout << "数值错误！请输入1-5之间的整数（1=从无、2=很轻、3=中等、4=偏重、5=严重）" << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);

    int count_ge2 = 0;

    cout<<"症状自评量表SCL-90\n以下表格中列出了有些人可能有的症状或问题，请仔细阅读每一条，然后根据该句话与您自己的实际情况相符合的程度（最近一个星期或现在），选择一个适当的数字并按回车\n1--从无、2--很轻、3--中等、4--偏重、5--严重\n按回车以开始测评"<<endl;
    cin.ignore();

    int a1,a2,a3,a4,a5,a6,a7,a8,a9,
        b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,
        c0,c1,c2,c3,c4,c5,c6,c7,c8,c9,
        d0,d1,d2,d3,d4,d5,d6,d7,d8,d9,
        e0,e1,e2,e3,e4,e5,e6,e7,e8,e9,
        f0,f1,f2,f3,f4,f5,f6,f7,f8,f9,
        g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,
        h0,h1,h2,h3,h4,h5,h6,h7,h8,h9,
        i0,i1,i2,i3,i4,i5,i6,i7,i8,i9,
		j0;

    // 逐题获取输入并统计≥2的题目数
    a1 = getValidInput("1.头痛");
    count_ge2 += (a1 >= 2) ? 1 : 0;

    a2 = getValidInput("2.精神过敏，心中不踏实");
    count_ge2 += (a2 >= 2) ? 1 : 0;

    a3 = getValidInput("3.头脑中有不必要的想法或字句盘旋");
    count_ge2 += (a3 >= 2) ? 1 : 0;

    a4 = getValidInput("4.头晕或晕倒");
    count_ge2 += (a4 >= 2) ? 1 : 0;

    a5 = getValidInput("5.对异性的兴趣减退");
    count_ge2 += (a5 >= 2) ? 1 : 0;

    a6 = getValidInput("6.对旁人责备求全");
    count_ge2 += (a6 >= 2) ? 1 : 0;

    a7 = getValidInput("7.感到别人能控制您的思想");
    count_ge2 += (a7 >= 2) ? 1 : 0;

    a8 = getValidInput("8.责怪别人制造麻烦");
    count_ge2 += (a8 >= 2) ? 1 : 0;

    a9 = getValidInput("9.忘性大");
    count_ge2 += (a9 >= 2) ? 1 : 0;

    b0 = getValidInput("10.担心自己的衣饰整齐及仪态的端正");
    count_ge2 += (b0 >= 2) ? 1 : 0;

    b1 = getValidInput("11.容易烦恼和激动");
    count_ge2 += (b1 >= 2) ? 1 : 0;

    b2 = getValidInput("12.胸痛");
    count_ge2 += (b2 >= 2) ? 1 : 0;

    b3 = getValidInput("13.害怕空旷的场所或街道");
    count_ge2 += (b3 >= 2) ? 1 : 0;

    b4 = getValidInput("14.感到自己的精力下降，活动减慢");
    count_ge2 += (b4 >= 2) ? 1 : 0;

    b5 = getValidInput("15.想结束自己的生命");
    count_ge2 += (b5 >= 2) ? 1 : 0;

    b6 = getValidInput("16.听到旁人听不到的声音");
    count_ge2 += (b6 >= 2) ? 1 : 0;

    b7 = getValidInput("17.发抖");
    count_ge2 += (b7 >= 2) ? 1 : 0;

    b8 = getValidInput("18.感到大多数人都不可信任");
    count_ge2 += (b8 >= 2) ? 1 : 0;

    b9 = getValidInput("19.胃口不好");
    count_ge2 += (b9 >= 2) ? 1 : 0;

    c0 = getValidInput("20.容易哭泣");
    count_ge2 += (c0 >= 2) ? 1 : 0;

    c1 = getValidInput("21.同异性相处时感到害羞不自在");
    count_ge2 += (c1 >= 2) ? 1 : 0;

    c2 = getValidInput("22.感到受骗，中了圈套或有人想抓住您");
    count_ge2 += (c2 >= 2) ? 1 : 0;

    c3 = getValidInput("23.无缘无故地突然感到害怕");
    count_ge2 += (c3 >= 2) ? 1 : 0;

    c4 = getValidInput("24.自己不能控制地大发脾气");
    count_ge2 += (c4 >= 2) ? 1 : 0;

    c5 = getValidInput("25.怕单独出门");
    count_ge2 += (c5 >= 2) ? 1 : 0;

    c6 = getValidInput("26.经常责怪自己");
    count_ge2 += (c6 >= 2) ? 1 : 0;

    c7 = getValidInput("27.腰痛");
    count_ge2 += (c7 >= 2) ? 1 : 0;

    c8 = getValidInput("28.感到难以完成任务");
    count_ge2 += (c8 >= 2) ? 1 : 0;

    c9 = getValidInput("29.感到孤独");
    count_ge2 += (c9 >= 2) ? 1 : 0;

    d0 = getValidInput("30.感到苦闷");
    count_ge2 += (d0 >= 2) ? 1 : 0;

    d1 = getValidInput("31.过分担忧");
    count_ge2 += (d1 >= 2) ? 1 : 0;

    d2 = getValidInput("32.对事物不感兴趣");
    count_ge2 += (d2 >= 2) ? 1 : 0;

    d3 = getValidInput("33.感到害怕");
    count_ge2 += (d3 >= 2) ? 1 : 0;

    d4 = getValidInput("34.您的感情容易受到伤害");
    count_ge2 += (d4 >= 2) ? 1 : 0;

    d5 = getValidInput("35.旁人能知道您的私下想法");
    count_ge2 += (d5 >= 2) ? 1 : 0;

    d6 = getValidInput("36.感到别人不理解您、不同情您");
    count_ge2 += (d6 >= 2) ? 1 : 0;

    d7 = getValidInput("37.感到人们对您不友好，不喜欢您");
    count_ge2 += (d7 >= 2) ? 1 : 0;

    d8 = getValidInput("38.做事必须做得很慢以保证做得正确");
    count_ge2 += (d8 >= 2) ? 1 : 0;

    d9 = getValidInput("39.心跳得很厉害");
    count_ge2 += (d9 >= 2) ? 1 : 0;

    e0 = getValidInput("40.恶心或胃部不舒服");
    count_ge2 += (e0 >= 2) ? 1 : 0;

    e1 = getValidInput("41.感到比不上他人");
    count_ge2 += (e1 >= 2) ? 1 : 0;

    e2 = getValidInput("42.肌肉酸痛");
    count_ge2 += (e2 >= 2) ? 1 : 0;

    e3 = getValidInput("43.感到有人在监视您、谈论您");
    count_ge2 += (e3 >= 2) ? 1 : 0;

    e4 = getValidInput("44.难以入睡");
    count_ge2 += (e4 >= 2) ? 1 : 0;

    e5 = getValidInput("45.做事必须反复检查");
    count_ge2 += (e5 >= 2) ? 1 : 0;

    e6 = getValidInput("46.难以做出决定");
    count_ge2 += (e6 >= 2) ? 1 : 0;

    e7 = getValidInput("47.怕乘电车、公共汽车、地铁或火车");
    count_ge2 += (e7 >= 2) ? 1 : 0;

    e8 = getValidInput("48.呼吸有困难");
    count_ge2 += (e8 >= 2) ? 1 : 0;

    e9 = getValidInput("49.一阵阵发冷或发热");
    count_ge2 += (e9 >= 2) ? 1 : 0;

    f0 = getValidInput("50.因为感到害怕而避开某些东西、场合或活动");
    count_ge2 += (f0 >= 2) ? 1 : 0;

    f1 = getValidInput("51.脑子变空了");
    count_ge2 += (f1 >= 2) ? 1 : 0;

    f2 = getValidInput("52.身体发麻或刺痛");
    count_ge2 += (f2 >= 2) ? 1 : 0;

    f3 = getValidInput("53.喉咙有梗塞感");
    count_ge2 += (f3 >= 2) ? 1 : 0;

    f4 = getValidInput("54.感到前途没有希望");
    count_ge2 += (f4 >= 2) ? 1 : 0;

    f5 = getValidInput("55.不能集中注意力");
    count_ge2 += (f5 >= 2) ? 1 : 0;

    f6 = getValidInput("56.感到身体的某一部分软弱无力");
    count_ge2 += (f6 >= 2) ? 1 : 0;

    f7 = getValidInput("57.感到紧张或容易紧张");
    count_ge2 += (f7 >= 2) ? 1 : 0;

    f8 = getValidInput("58.感到手或脚发重");
    count_ge2 += (f8 >= 2) ? 1 : 0;

    f9 = getValidInput("59.想到死亡的事");
    count_ge2 += (f9 >= 2) ? 1 : 0;

    g0 = getValidInput("60.吃得太多");
    count_ge2 += (g0 >= 2) ? 1 : 0;

    g1 = getValidInput("61.当别人看着您或谈论您时感到不自在");
    count_ge2 += (g1 >= 2) ? 1 : 0;

    g2 = getValidInput("62.有一些不属于您自己的想法");
    count_ge2 += (g2 >= 2) ? 1 : 0;

    g3 = getValidInput("63.有想打人或伤害他人的冲动");
    count_ge2 += (g3 >= 2) ? 1 : 0;

    g4 = getValidInput("64.醒得太早");
    count_ge2 += (g4 >= 2) ? 1 : 0;

    g5 = getValidInput("65.必须反复洗手、点数");
    count_ge2 += (g5 >= 2) ? 1 : 0;

    g6 = getValidInput("66.睡得不稳不深");
    count_ge2 += (g6 >= 2) ? 1 : 0;

    g7 = getValidInput("67.有想摔坏或破坏东西的想法");
    count_ge2 += (g7 >= 2) ? 1 : 0;

    g8 = getValidInput("68.有一些别人没有的想法");
    count_ge2 += (g8 >= 2) ? 1 : 0;

    g9 = getValidInput("69.感到对别人神经过敏");
    count_ge2 += (g9 >= 2) ? 1 : 0;

    h0 = getValidInput("70.在商店或电影院等人多的地方感到不自在");
    count_ge2 += (h0 >= 2) ? 1 : 0;

    h1 = getValidInput("71.感到任何事情都很困难");
    count_ge2 += (h1 >= 2) ? 1 : 0;

    h2 = getValidInput("72.一阵阵恐惧或惊恐");
    count_ge2 += (h2 >= 2) ? 1 : 0;

    h3 = getValidInput("73.感到公共场合吃东西很不舒服");
    count_ge2 += (h3 >= 2) ? 1 : 0;

    h4 = getValidInput("74.经常与人争论");
    count_ge2 += (h4 >= 2) ? 1 : 0;

    h5 = getValidInput("75.单独一人时神经很紧张");
    count_ge2 += (h5 >= 2) ? 1 : 0;

    h6 = getValidInput("76.别人对您的成绩没有做出恰当的评价");
    count_ge2 += (h6 >= 2) ? 1 : 0;

    h7 = getValidInput("77.即使和别人在一起也感到孤单");
    count_ge2 += (h7 >= 2) ? 1 : 0;

    h8 = getValidInput("78.感到坐立不安心神不定");
    count_ge2 += (h8 >= 2) ? 1 : 0;

    h9 = getValidInput("79.感到自己没有什么价值");
    count_ge2 += (h9 >= 2) ? 1 : 0;

    i0 = getValidInput("80.感到熟悉的东西变成陌生或不像是真的");
    count_ge2 += (i0 >= 2) ? 1 : 0;

    i1 = getValidInput("81.大叫或摔东西");
    count_ge2 += (i1 >= 2) ? 1 : 0;

    i2 = getValidInput("82.害怕会在公共场合晕倒");
    count_ge2 += (i2 >= 2) ? 1 : 0;

    i3 = getValidInput("83.感到别人想占您的便宜");
    count_ge2 += (i3 >= 2) ? 1 : 0;

    i4 = getValidInput("84.为一些有关性的想法而很苦恼");
    count_ge2 += (i4 >= 2) ? 1 : 0;

    i5 = getValidInput("85.您认为应该因为自己的过错而受到惩罚");
    count_ge2 += (i5 >= 2) ? 1 : 0;

    i6 = getValidInput("86.感到要很快把事情做完");
    count_ge2 += (i6 >= 2) ? 1 : 0;

    i7 = getValidInput("87.感到自己的身体有严重问题");
    count_ge2 += (i7 >= 2) ? 1 : 0;

    i8 = getValidInput("88.从未感到和其他人很亲近");
    count_ge2 += (i8 >= 2) ? 1 : 0;

    i9 = getValidInput("89.感到自己有罪");
    count_ge2 += (i9 >= 2) ? 1 : 0;

    j0 = getValidInput("90.感到自己的脑子有毛病");
    count_ge2 += (j0 >= 2) ? 1 : 0;

    cout << "\n------------------------测评结果------------------------\n";
    // 计算总分和各维度得分（修改为浮点数计算）
    int Sall = a1+a2+a3+a4+a5+a6+a7+a8+a9+b0+b1+b2+b3+b4+b5+b6+b7+b8+b9+c0+c1+c2+c3+c4+c5+c6+c7+c8+c9+d0+d1+d2+d3+d4+d5+d6+d7+d8+d9+e0+e1+e2+e3+e4+e5+e6+e7+e8+e9+f0+f1+f2+f3+f4+f5+f6+f7+f8+f9+g0+g1+g2+g3+g4+g5+g6+g7+g8+g9+h0+h1+h2+h3+h4+h5+h6+h7+h8+h9+i0+i1+i2+i3+i4+i5+i6+i7+i8+i9+j0;
    double Szzzzs = (double)Sall / 90.0; // 总症状指数（改为浮点数除法）

    int Sbod = a1+a4+b2+c7+e0+e2+e8+e9+f2+f3+f6+f8;
    double Sbody = (double)Sbod / 12.0;  // 改为double类型，浮点数除法
    int Sqian = a3+a9+b0+c8+d8+e5+e6+f1+f5+g5;
    double Sqiang = (double)Sqian / 10.0;
    int Sre = a6+c1+d4+d6+d7+e1+g1+g9+h3;
    double Sren = (double)Sre / 9.0;
    int Sy = a5+b4+b5+c0+c2+c6+c7+d0+d1+d2+f4+h1+h9;
    double Syi = (double)Sy / 13.0;
    int Sjia = a2+b7+c3+d3+d9+f7+h2+h8+i0+i6;
    double Sjiao = (double)Sjia / 10.0;
    int Sd = b1+c4+g3+g7+h4+i1;
    double Sdi = (double)Sd / 6.0;
    int Skon = b3+c5+e7+f0+h0+h5+i2;
    double Skong = (double)Skon / 7.0;
    int Spia = a8+b8+e3+g8+h6+i3;
    double Spian = (double)Spia / 6.0;
    int Sjin = a7+b6+d5+g2+h7+i4+i5+i7+i8+j0;
    double Sjing = (double)Sjin / 10.0;
    int Sq = b9+e4+f9+g0+g4+g6+i9;
    double Sqi = (double)Sq / 7.0;

    // 输出所有结果（保留6位小数）
    cout<<"总分是："<<Sall<<endl;
    cout << fixed << setprecision(6); // 设置输出格式：固定小数位，保留6位
    cout<<"总症状指数："<<Szzzzs<<endl;
    cout<<"阳性项目数："<<count_ge2<<endl;
    cout<<"--------------------------------------------------------\n";
    cout<<"躯体化得分："<<Sbody<<endl;
    cout<<"强迫症状得分："<<Sqiang<<endl;
    cout<<"人际关系敏感得分："<<Sren<<endl;
    cout<<"抑郁得分："<<Syi<<endl;
    cout<<"焦虑得分："<<Sjiao<<endl;
    cout<<"敌对得分："<<Sdi<<endl;
    cout<<"恐怖得分："<<Skong<<endl;
    cout<<"偏执得分："<<Spian<<endl;
    cout<<"精神病性得分："<<Sjing<<endl;
    cout<<"其他项得分："<<Sqi<<endl;

    // 等待用户查看结果后退出
    cout << "\n按任意键退出...";
    cin.ignore();
    cin.get();

    return 0;
}