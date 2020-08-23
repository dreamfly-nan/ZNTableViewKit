//
//  ViewController.m
//  ZNTableViewKit
//
//  Created by apple on 2020/7/24.
//  Copyright © 2020 apple. All rights reserved.
//

#import "ViewController.h"
#import "ZNTableViewKit.h"
#import "TestTableViewCell.h"
#import "ActionTest.h"
#import "StrategyTest.h"
@interface ViewController ()

@property(nonatomic , strong) UITableView * tableView;

@property(nonatomic , strong) ZNTableViewKit * tableViewKit;

@property(nonatomic , strong) NSArray<NSString *> * dataSource;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.tableView];
    [self.tableViewKit reload];
    // Do any additional setup after loading the view.
}

#pragma mark - get

- (NSArray<NSString *> *)dataSource{
    return @[@"测试1",@"测试2",@"测试3"];
}

- (UITableView *)tableView{
    if (!_tableView) {
        _tableView = [[UITableView alloc] initWithFrame:self.view.bounds];
    }
    return _tableView;
}

- (ZNTableViewKit *)tableViewKit{
    if (!_tableViewKit) {
        _tableViewKit = [[ZNTableViewKit alloc] initWithSingleGroupTableView:self.tableView dataSource:self.dataSource];
        ZNRegisterModel * model = [ZNRegisterModel initWithCellClass:TestTableViewCell.class];
        [_tableViewKit addRegisterModel:model];
        [_tableViewKit addAction:[ActionTest new]];
        [_tableViewKit addRegisterStrategyWithClass:[StrategyTest new]];
    }
    return _tableViewKit;
}

@end
