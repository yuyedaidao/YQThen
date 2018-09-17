//
//  YQThen.m
//  YQThen
//
//  Created by WYQ on 2018/9/17.
//  Copyright © 2018 WYQ. All rights reserved.
//

#import "YQThen.h"

@interface YQThen()
@property (weak, nonatomic) id base;
@end
@implementation YQThen
- (instancetype)initWith:(id)base {
    if (self = [super init]) {
        _base = base;
    }
    return self;
}
- (instancetype)then:(YQThenBlock)block {
    !block ? : block(_base);
    return self;
}
- (id)done:(YQThenBlock)block {
    !block ? : block(_base);
    return _base;
}
@end

