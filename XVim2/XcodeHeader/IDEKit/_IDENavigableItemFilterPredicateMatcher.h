//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/_IDENavigableItemFilterMatcher.h>

@class NSPredicate;

@interface _IDENavigableItemFilterPredicateMatcher : _IDENavigableItemFilterMatcher
{
    BOOL _evaluatesRepresentedObject;
    NSPredicate *_predicate;
}

@property(readonly, nonatomic) BOOL evaluatesRepresentedObject; // @synthesize evaluatesRepresentedObject=_evaluatesRepresentedObject;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)_matchesRepresentedObject:(id)arg1;
- (BOOL)_matchesNavigableItem:(id)arg1;
- (id)_initWithPredicate:(id)arg1 evaluatesRepresentedObject:(BOOL)arg2;

@end
