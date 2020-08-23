//
//  ActionTest.m
//  ZNTableViewKit
//
//  Created by zhengnannan on 2020/8/20.
//  Copyright © 2020 apple. All rights reserved.
//

#import "ActionTest.h"

@implementation ActionTest

- (void)didSelectItemWithCell:(UITableViewCell *)cell model:(id)model indexPath:(NSIndexPath *)indexPath{
    cell.textLabel.text = @"我被点击了";
}

/// cell的子控件的事件触发
/// @param code 事件编号
/// @param model cell的数据模型
/// @param cell cell本身视图
- (void)cellSubViewActionWithCode:(NSString *) code
                             cell:(UITableViewCell *) cell
                            model:(id) model{
    cell.textLabel.text = model;
    cell.textLabel.textColor = [UIColor redColor];
}

@end
