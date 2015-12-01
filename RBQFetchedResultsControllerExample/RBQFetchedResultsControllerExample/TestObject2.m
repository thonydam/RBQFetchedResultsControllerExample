//
//  TestObject2.m
//  RBQFetchedResultsControllerExample
//
//  Created by Tony Dam on 12/1/15.
//  Copyright © 2015 Roobiq. All rights reserved.
//

#import "TestObject2.h"

@implementation TestObject2

+ (instancetype)testObjectWithTitle:(NSString *)title {
    TestObject2 *object = [[TestObject2 alloc] init];
    object.title = title;
    
    return object;
}

@end
