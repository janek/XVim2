//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface IDECompressedStackFrameIndicatorView : NSView
{
    NSColor *_color;
    double _minXMargin;
    double _maxXMargin;
    double _offsetY;
}

@property double offsetY; // @synthesize offsetY=_offsetY;
@property double maxXMargin; // @synthesize maxXMargin=_maxXMargin;
@property double minXMargin; // @synthesize minXMargin=_minXMargin;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_dvt_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

