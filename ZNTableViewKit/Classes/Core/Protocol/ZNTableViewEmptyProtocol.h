//
//  ZNTableViewEmptyProtocol.h
//  ZNTableViewKit
//
//  Created by zhengnannan on 2020/9/2.
//  Copyright © 2020 apple. All rights reserved.
//

#ifndef ZNTableViewEmptyProtocol_h
#define ZNTableViewEmptyProtocol_h

#import "ZNTableViewKitProtocol.h"

@protocol ZNTableViewEmptyProtocol <NSObject>

/// 便于操作刷新
@property(nonatomic , weak) id<ZNTableViewKitProtocol> tableViewKit;

@end

#endif /* ZNTableViewEmptyProtocol_h */
