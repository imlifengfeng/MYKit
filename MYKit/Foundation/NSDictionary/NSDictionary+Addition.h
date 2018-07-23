//
//  NSDictionary+Addition.h
//  MYKitDemo
//
//  Created by sunjinshuai on 2017/9/8.
//  Copyright © 2017年 com.51fanxing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (Addition)

/**
 NSDictionary转换成JSON字符串
 
 @return  JSON字符串
 */
- (NSString *)JSONString;

- (NSArray<NSString *> *)arrayStringAscending;

@end
