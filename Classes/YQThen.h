//
//  YQThen.h
//  YQThen
//
//  Created by WYQ on 2018/9/17.
//  Copyright © 2018 WYQ. All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

#ifndef __YQPACK
#define __YQPACK
#define YQPack(x) [[YQThen alloc] initWith:x]
#endif

@class YQThen;
typedef void (^YQThenBlock)(id);

@interface YQThen : NSObject
- (instancetype)initWith:(id)base;
- (YQThen *)then:(YQThenBlock)block;
- (instancetype)done:(YQThenBlock)block;
@end
NS_ASSUME_NONNULL_END
