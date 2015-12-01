//
//  TestObject2.h
//  RBQFetchedResultsControllerExample
//
//  Created by Tony Dam on 12/1/15.
//  Copyright © 2015 Roobiq. All rights reserved.
//

#import <Realm/Realm.h>
#import "RLMObject.h"

@interface TestObject2 : RLMObject

@property NSString *title;

+ (instancetype)testObjectWithTitle:(NSString *)title;

@end

RLM_ARRAY_TYPE(TestObject2) // define RLMArray<Dog>
