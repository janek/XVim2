//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEExtension.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface IDESourceEditorExtension : IDEExtension
{
    NSMutableDictionary *_outstandingCommandInvocations;
    NSArray *_commands;
    NSDictionary *_commandsByIdentifier;
}

+ (void)_updateEditorMenu;
+ (void)_keyBindingDidChange:(id)arg1;
+ (BOOL)_updateKeyBinding:(id)arg1 forCommand:(id)arg2;
+ (void)registerMenuKeyBindingsToMenuKeyBindingSet:(id)arg1;
+ (void)_updateKeyBindingsForCommands;
+ (void)verifyTimeoutForExtensionCommand:(id)arg1;
+ (void)startLocatingSourceEditorExtensions;
+ (void)_verifyBuiltInSourceEditorExtensionsFound;
+ (id)knownExtensionMetadata;
+ (id)sourceEditorExtensions;
+ (void)initialize;
@property(readonly, copy) NSDictionary *commandsByIdentifier; // @synthesize commandsByIdentifier=_commandsByIdentifier;
@property(readonly, copy) NSArray *commands; // @synthesize commands=_commands;
- (void).cxx_destruct;
- (void)sendCancelCommandWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPerformCommandRequestWithUUID:(id)arg1 commandIdentifier:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connectionInterrupted;
- (BOOL)finishRestart:(CDUnknownBlockType)arg1;
- (BOOL)finishStop:(CDUnknownBlockType)arg1;
- (void)_instantiateProperCommandDefinitions:(id)arg1;
- (BOOL)finishStart:(CDUnknownBlockType)arg1;
- (id)extensionServiceInterface;
- (id)extensionBootstrapClassName;
- (id)initWithExtension:(id)arg1;

@end

