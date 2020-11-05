//
//  ActionTest.h
//  ZNTableViewKit
//
//  Created by zhengnannan on 2020/8/20.
//  Copyright © 2020 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZNTableViewActionProtocol.h"
#import "ZNTableViewKit.h"

NS_ASSUME_NONNULL_BEGIN

@interface ActionTest : NSObject <ZNTableViewActionProtocol>

@property(nonatomic , weak) ZNTableViewKit * tableViewKit;

@end

NS_ASSUME_NONNULL_END
