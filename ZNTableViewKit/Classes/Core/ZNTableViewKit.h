//
//  ZNTableViewKit.h
//  ZNTableViewKit
//  
//  Created by apple on 2020/7/24.
//  Copyright © 2020 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "ZNTableViewActionProtocol.h"
#import "ZNTableViewStrategyProtocol.h"
#import "ZNTableViewKitProtocol.h"
#import "ZNTableViewCellProtocol.h"
#import "ZNTableViewDataLoader.h"
#import "ZNRegisterModel.h"
#import "ZNTableViewManage.h"

NS_ASSUME_NONNULL_BEGIN


@protocol ZNTableViewKitDelegate <NSObject>

@optional
/// 网络请求数据加载完成
- (void)loadDataFinish;

@end

@interface ZNTableViewKit : NSObject <ZNTableViewKitProtocol>

@property(nonatomic , weak) id<ZNTableViewKitDelegate> bbsDelegate;

/// 只传入数据源与tableView
/// @param tableView <#tableView description#>
/// @param dataSource <#dataSource description#>
- (instancetype)initWithSingleGroupTableView:(UITableView *) tableView
                                  dataSource:(NSArray *) dataSource;

/// 只传入数据源与tableView
/// @param tableView <#tableView description#>
/// @param dataSource <#dataSource description#>
- (instancetype)initWithMoreGroupTableView:(UITableView *) tableView
                                dataSource:(NSArray *) dataSource;

/// 不用传manager对象的实例化方法
/// @param viewHelper <#viewHelper description#>
/// @param dataLoader <#dataLoader description#>
/// @param tableView <#tableView description#>
- (instancetype)initWithViewHelper:(id<BBSTableViewLayoutProtocol,
                                    BBSTableViewLunchProtocol> ) viewHelper
                        dataLoader:(id<BBSTableViewDataSourceProtocol>) dataLoader
                         tableView:(UITableView *) tableView;

/// 当前tableview的处理对象
/// @param tableView 主tableview
/// @param manager 管理对象
- (instancetype)initWithTableView:(UITableView *) tableView
                          manager:(BBSTableViewManage *) manager;

/// 注册对应的cell
/// @param model <#model description#>
- (void)addRegisterModel:(BBSRegisterModel *) model;

/// 注册对应的cell
/// @param models <#models description#>
- (void)addRegisterModels:(NSArray<BBSRegisterModel *> *) models;

/// 添加策略
/// @param strategyClass <#strategyClass description#>
- (void)addRegisterStrategyWithClass:(id<BBSTableViewStrategyProtocol>) strategyClass;

/// 添加事件
/// @param action <#action description#>
- (void)addAction:(id<BBSTableViewActionProtocol>) action;

/// 空视图接入
/// @param emptyView <#emptyView description#>=
- (void)setEmptyView:(UIView*) emptyView;

/// 错误视图接入
/// @param errorView <#errorView description#>
- (void)setErrorView:(UIView *) errorView;

/// 加载图接入
/// @param loadView <#loadView description#>
- (void)setLoadView:(UIView *) loadView;

/// 注册头部
/// @param header <#header description#>
- (void)registerRefreshHead:(MJRefreshHeader *) header;

/// 注册尾部
/// @param footer <#footer description#>
- (void)registerRefreshFoot:(MJRefreshFooter *) footer;

- (void)loadData:(BOOL) isReSetData;
@end

NS_ASSUME_NONNULL_END
