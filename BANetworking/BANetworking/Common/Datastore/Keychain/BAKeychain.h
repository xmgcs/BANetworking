//
//  BAKeychain.h
//  BAbelKit
//
//  Created by Abel on 10/06/14.
//  Copyright (c) 2014 Abel, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BAKeychain : NSObject

@property (nonatomic, copy, readonly) NSString *service;
@property (nonatomic, copy, readonly) NSString *accessGroup;

- (instancetype)initWithService:(NSString *)service accessGroup:(NSString *)accessGroup;

+ (instancetype)keychainForService:(NSString *)service accessGroup:(NSString *)accessGroup;

- (id)objectForKey:(id)key;

- (BOOL)setObject:(id<NSCoding>)object ForKey:(id)key;

- (BOOL)removeObjectForKey:(id)key;

@end
