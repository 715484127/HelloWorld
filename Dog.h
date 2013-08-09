//
//  Dog.h
//  HelloWorld
//
//  Created by wang yuepeng on 13-6-12.
//  Copyright (c) 2013年 wang yuepeng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Dog : NSObject
{
    
@protected
    int ID;
    
@public
    int age;
    
@private
    float price;
    
}

//函数名为init,不带参数
-(id)init;
//函数名为initWithID:,带一个int类型的参数
-(id)initWithID:(int)newID;
//函数名为initWithID:andAge:,带两个参数
-(id)initWithID:(int)newID andAge:(int)newAge;
-(id)initWithID:(int)newID andAge:(int)newAge andPrice:(int)newPrice;

-(void)setID:(int)nweID;
-(int)getID;

-(void)setAge:(int)newAge;
-(int)getAge;

-(void)setPrice:(int)newPrice;
-(int)getPrice;

-(void)setID:(int)nweID andAge:(int)newAge;
-(void)setID:(int)nweID andAge:(int)newAge andPrice:(float)newPrice;
@end
