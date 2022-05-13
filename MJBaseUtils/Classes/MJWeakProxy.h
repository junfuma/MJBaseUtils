//
//  MJWeakProxy.h
//  GoMetaverse
//
//  Created by zegomjf on 2022/1/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJWeakProxy : NSObject
@property (nonatomic, weak, readonly, nullable) id target;

- (nonnull instancetype)initWithTarget:(nonnull id)target;
+ (nonnull instancetype)proxyWithTarget:(nonnull id)target;

@end

NS_ASSUME_NONNULL_END
