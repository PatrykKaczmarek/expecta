// Expecta - FakeTestCase.h
// Copyright (c) 2011 Peter Jihoon Kim
// Licensed under the MIT License.

#import "TestHelper.h"

@interface FakeTestCase : NSObject

- (void)failWithException:(NSException *)exception;

@end
