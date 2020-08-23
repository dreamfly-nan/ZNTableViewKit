//
//  ZNViewController.m
//  ZNTableViewKit
//
//  Created by 1553482253@qq.com on 08/23/2020.
//  Copyright (c) 2020 1553482253@qq.com. All rights reserved.
//

#import "ZNViewController.h"
#import <ZNTableViewKit/ZNTableViewKit.h>

@interface ZNViewController ()

@property (nonatomic , strong) UITableView * tableView;

@property (nonatomic , strong) ZNTableViewKit * tableViewKit;

@end

@implementation ZNViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

#pragma mark - get

- (UITableView *)tableView{
    if (!_tableView) {
        _tableView = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStyleGrouped];
    }
    return _tableView;
}

@end
