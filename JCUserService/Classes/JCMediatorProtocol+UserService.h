//
//  JCMediatorProtocol+JCUserService.h
//  JCUserService
//
//  Created by Jam Jia on 12/30/19.
//

#import <UIKit/UIKit.h>
#import <JCToolKit/JCMediatorProtocol.h>


NS_ASSUME_NONNULL_BEGIN

@protocol UserService <NSObject>

- (UIViewController *)loginViewController;

@end

@interface JCMediatorProtocol (UserService)

- (id<UserService>)provideUserService;

@end

NS_ASSUME_NONNULL_END
