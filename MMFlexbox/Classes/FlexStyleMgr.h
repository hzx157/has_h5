/**
 * Copyright (c) 2020-present, huangzhenxiang, Inc.
 * email: 317804760@qq.com
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */



#import <UIKit/UIKit.h>

@interface FlexAttr : NSObject<NSCoding>
@property(nonatomic,strong) NSString* name ;
@property(nonatomic,strong) NSString* value ;

-(BOOL)isValid;

@end

@interface FlexStyleMgr : NSObject

-(NSArray<FlexAttr*>*)getStyle:(NSString*)fileName
                     StyleName:(NSString*)styleName;

-(NSArray<FlexAttr*>*)getStyleByRefPath:(NSString*)ref;

+(instancetype)instance;

@end
