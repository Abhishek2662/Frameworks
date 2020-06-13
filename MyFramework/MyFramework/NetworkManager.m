//
//  NetworkManager.m
//  MyFramework
//
//  Created by Abhishek Rai on 6/11/20.
//  Copyright © 2020 Abhishek Rai. All rights reserved.
//

#import "NetworkManager.h"
#import "TestPrivate.h"
@implementation NetworkManager

-(void)testmethod {
    
    NSLog(@"abc");
    TestPrivate *test = [[TestPrivate alloc] init];
    [test testmethod];
}
@end
