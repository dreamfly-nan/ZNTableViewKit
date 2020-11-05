//
//  TestTableViewCell.m
//  ZNTableViewKit
//
//  Created by zhengnannan on 2020/8/20.
//  Copyright © 2020 apple. All rights reserved.
//
#import "ZNTableViewActionProtocol.h"
#import "TestTableViewCell.h"

@interface TestTableViewCell()

@property(nonatomic , strong) UIButton * btn;

@property(nonatomic , weak) id<ZNTableViewActionProtocol> action;

@end

@implementation TestTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self.contentView addSubview:self.btn];
        self.btn.frame = CGRectMake(100, 0, 50, 30);
    }
    return self;
}

- (void)loadModel:(id)model withIndexPath:(NSIndexPath *)indexPath{
    self.textLabel.text = model;
}

- (void)setSubViewAction:(id<ZNTableViewActionProtocol>) action{
    self.action = action;
}

- (void)test{
    [self.action cellSubViewActionWithCode:@"1" cell:self model:@"123456"];
}

#pragma mark - get

- (UIButton *)btn{
    if (!_btn) {
        _btn = [UIButton new];
        [_btn setTitle:@"测试" forState:UIControlStateNormal];
        [_btn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
        [_btn addTarget:self action:@selector(test) forControlEvents:UIControlEventTouchUpInside];
    }
    return _btn;
}

@end
