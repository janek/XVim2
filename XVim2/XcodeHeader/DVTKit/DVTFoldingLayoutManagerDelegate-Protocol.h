//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSLayoutManagerDelegate-Protocol.h>

@class DVTFoldingLayoutManager, NSArray;
@protocol DVTObjectLiteralMediaResourceProvider;

@protocol DVTFoldingLayoutManagerDelegate <NSLayoutManagerDelegate>
- (NSArray *)foldingTokenTypesForLayoutManager:(DVTFoldingLayoutManager *)arg1;

@optional
- (id <DVTObjectLiteralMediaResourceProvider>)mediaResourceProviderForLiteralInLayoutManager:(DVTFoldingLayoutManager *)arg1;
- (NSArray *)directoriesForLiteralInLayoutManager:(DVTFoldingLayoutManager *)arg1;
- (void)layoutManager:(DVTFoldingLayoutManager *)arg1 didUnfoldRange:(struct _NSRange)arg2;
- (void)layoutManager:(DVTFoldingLayoutManager *)arg1 didFoldRange:(struct _NSRange)arg2;
@end

