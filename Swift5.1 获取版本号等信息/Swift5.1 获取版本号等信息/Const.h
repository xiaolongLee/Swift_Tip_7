//
//  Const.h
//  Swift5.1 获取版本号等信息
//
//  Created by 李小龙 on 2020/4/9.
//  Copyright © 2020 李小龙. All rights reserved.
//

#ifndef Const_h
#define Const_h
//屏幕宽高宏定义
#define kScreen_height  [[UIScreen mainScreen] bounds].size.height
#define kScreen_width   [[UIScreen mainScreen] bounds].size.width

//通知宏定义
#define NOTIF_ADD(n, f)         [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(f) name:n object:nil]
#define NOTIF_POST(n, o)        [[NSNotificationCenter defaultCenter] postNotificationName:n object:o]
#define NOTIF_POSTU(n, o, u)    [[NSNotificationCenter defaultCenter] postNotificationName:n object:o userInfo:(u)];
#define NOTIF_REMVN(n)          [[NSNotificationCenter defaultCenter] removeObserver:self name:n object:nil];
#define NOTIF_REMV()            [[NSNotificationCenter defaultCenter] removeObserver:self]

//判断是否是iPhoneX
#define kDevice_Is_iPhoneX ((int)((([[UIScreen mainScreen] bounds].size.height)/([[UIScreen mainScreen] bounds].size.width))*100) == 216)?YES:NO

//事件定义
#define ButtonClickEvent(button, method) [button addTarget:self action:@selector(method) forControlEvents:UIControlEventTouchUpInside];

//颜色定义
#define RGB_C(rgb) [UIColor colorWithRed:rgb/255.0 green:rgb/255.0 blue:rgb/255.0 alpha:1.0]
#define RGB_CA(rgb,a) [UIColor colorWithRed:rgb/255.0 green:rgb/255.0 blue:rgb/255.0 alpha:a]
#define RGB_Color(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#define RGB_ColorA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

//加载图片
#define kImage(img) [UIImage imageNamed:img]
//还有很多…… 

#endif /* Const_h */
