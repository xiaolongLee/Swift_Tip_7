//
//  ViewController.swift
//  Swift5.1 获取版本号等信息
//
//  Created by 李小龙 on 2020/4/9.
//  Copyright © 2020 李小龙. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let infoDictionary = Bundle.main.infoDictionary!
        let appDisplayName = infoDictionary["CFBundleName"] as! String
        let majorVersion = infoDictionary["CFBundleShortVersionString"]
        let minorVersion = infoDictionary["CFBundleVersion"]
        print("程序名称：\(appDisplayName)")
        print("主程序版本号：\(majorVersion as! String)")
        print("构建版本号：" ,minorVersion as! String)

       
    }


}

