//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMutableDictionary;

@interface DVTBlockDispatchingWindow : NSWindow
{
    NSMutableDictionary *_blocks;
    long long _nextBlockID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)sendEvent:(id)arg1;

@end

