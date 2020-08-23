//
//  ZNTableViewCellProtocol.h
//  ZNTableViewKit
//
//  Created by zhengnannan on 2020/8/18.
//  Copyright © 2020 apple. All rights reserved.
//

#ifndef ZNTableViewCellProtocol_h
#define ZNTableViewCellProtocol_h

#import <UIKit/UIKit.h>
#import "ZNTableViewActionProtocol.h"

@protocol ZNBaseViewProtocol <NSObject>

- (void)setSubViewAction:(id<ZNTableViewActionProtocol>) action;

@end

@protocol ZNBaseTableViewCellProtocol <ZNBaseViewProtocol>

- (void)loadModel:(id) model
    withIndexPath:(NSIndexPath *) indexPath;

@end

#endif /* ZNTableViewCellProtocol_h */
