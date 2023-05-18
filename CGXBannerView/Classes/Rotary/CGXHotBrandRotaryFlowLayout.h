//
//  CGXHotBrandRotaryFlowLayout.h
//  CGXHotBrandView-OC
//
//  Created by CGX on 2020/12/12.
//  Copyright © 2020 CGX. All rights reserved.
//

#import "CGXHotBrandBaseFlowLayout.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CGXHotBrandRotaryFlowLayoutDelegate <UICollectionViewDelegateFlowLayout>

@optional

/*
 当前放大的item
 */
- (void)gx_hotBrandAtCurrentInter:(NSInteger)currentInter;

@end


@interface CGXHotBrandRotaryFlowLayout : CGXHotBrandBaseFlowLayout

@property (nonatomic , weak) id<CGXHotBrandRotaryFlowLayoutDelegate>carouselDelegate;

@property (nonatomic) NSInteger visibleCount;

// 滚动时cell的缩放放大比例
- (CGFloat)cellOffsetAtIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
