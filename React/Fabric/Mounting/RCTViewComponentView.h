/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <React/RCTComponentViewProtocol.h>
#import <React/UIView+ComponentViewProtocol.h>
#import <fabric/core/LayoutMetrics.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * UIView class for <View> component.
 */
@interface RCTViewComponentView : UIView <RCTComponentViewProtocol> {
@protected
  facebook::react::LayoutMetrics _layoutMetrics;
}

@end

NS_ASSUME_NONNULL_END