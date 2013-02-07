//
//  Vegetable.h
//  FruitCart
//
//  Created by Lion User on 2/5/13.
//  Copyright (c) 2013 DavidEvans. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Vegetable : NSObject

@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * shape;
@property (nonatomic, strong) NSString * color;

-initWithName:(NSString *) inName andColor:(NSString *) inColor andShape:(NSString *) inShape;

-(NSString *) description;

@end
