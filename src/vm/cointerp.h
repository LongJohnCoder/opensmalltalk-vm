/* Automatically generated by
	CCodeGeneratorGlobalStructure VMMaker.oscog-eem.2359 uuid: b3273e3e-dd9d-4819-a928-7034e1cf412c
 */


/*** Function Prototypes ***/


#if !PRODUCTION && defined(PlatformNoDbgRegParms)
# define NoDbgRegParms PlatformNoDbgRegParms
#endif

#if !defined(NoDbgRegParms)
# define NoDbgRegParms /*empty*/
#endif



#if !defined(NeverInline)
# define NeverInline /*empty*/
#endif

extern usqInt argumentCountAddress(void);
extern void assertValidMachineCodeFrame(sqInt instrPtr);
extern void callForCogCompiledCodeCompaction(void);
extern void ceActivateFailingPrimitiveMethod(sqInt aPrimitiveMethod);
extern sqInt ceActiveContext(void);
extern sqInt ceBaseFrameReturn(sqInt returnValue);
#if IMMUTABILITY
extern sqInt ceCannotAssignTowithIndexvalueToAssign(sqInt immutableObject, sqInt index, sqInt valueToAssign);
#endif /* IMMUTABILITY */
extern sqInt ceCannotResume(void);
extern void ceCheckForInterrupts(void);
extern void ceCheckProfileTick(void);
extern sqInt ceContextinstVar(sqInt maybeContext, sqInt slotIndex);
extern sqInt ceContextinstVarvalue(sqInt maybeMarriedContext, sqInt slotIndex, sqInt anOop);
extern sqInt ceInterpretMethodFromPICreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceMNUFromPICMNUMethodreceiver(sqInt aMethodObj, sqInt rcvr);
extern sqInt ceNewArraySlotSize(sqInt slotSize);
extern sqInt ceNonLocalReturn(sqInt returnValue);
extern void ceReapAndResetErrorCodeFor(CogMethod *cogMethod);
extern sqInt ceReturnToInterpreter(sqInt anOop);
extern sqInt ceSendAborttonumArgs(sqInt selector, sqInt rcvr, sqInt numArgs);
extern sqInt ceSendFromInLineCacheMiss(CogMethod *cogMethodOrPIC);
extern void ceSendMustBeBooleanTointerpretingAtDelta(sqInt aNonBooleanObject, sqInt jumpSize);
extern sqInt ceSendMustBeBoolean(sqInt anObject);
extern sqInt ceSendsupertonumArgs(sqInt selector, sqInt superNormalBar, sqInt rcvr, sqInt numArgs);
extern void ceStackOverflow(sqInt contextSwitchIfNotNil);
extern void ceTraceBlockActivation(void);
extern void ceTraceLinkedSend(sqInt theReceiver);
extern void ceTraceStoreOfinto(sqInt aValue, sqInt anObject);
extern void checkAssertsEnabledInCoInterpreter(void);
extern void clearTraceLog(void);
extern CogMethod * cogMethodOf(sqInt aMethodOop);
extern void compilationBreakpointFor(sqInt selectorOop);
extern sqInt createClosureNumArgsnumCopiedstartpc(sqInt numArgs, sqInt numCopied, sqInt initialIP);
extern sqInt defaultNativeStackFrameSize(void);
extern void dumpPrimTraceLog(void);
extern void dumpTraceLog(void);
extern void executeCogMethodfromLinkedSendWithReceiver(CogMethod *cogMethod, sqInt rcvr);
extern void executeCogPICfromLinkedSendWithReceiverandCacheTag(CogMethod *cogPIC, sqInt rcvr, sqInt cacheTag);
extern void flushExternalPrimitiveOf(sqInt methodObj);
extern usqInt framePointerAddress(void);
extern void (*functionPointerForCompiledMethodprimitiveIndex(sqInt methodObj, sqInt primIndex))(void) ;
extern sqInt getCheckAllocFiller(void);
extern void ifValidWriteBackStackPointersSaveTo(void *theCFP, void *theCSP, char **savedFPP, char **savedSPP);
extern usqInt instructionPointerAddress(void);
extern usqInt interpretAddress(void);
extern sqInt isCogMethodReference(sqInt methodHeader);
extern sqInt lookupMNUreceiver(sqInt selector, sqInt rcvr);
extern sqInt lookupOrdinaryreceiver(sqInt selector, sqInt rcvr);
extern void markActiveMethodsAndReferents(void);
extern sqInt marryFrameCopiesTemps(void);
extern sqInt maxLookupNoMNUErrorCode(void);
extern sqInt mcprimFunctionForPrimitiveIndex(sqInt primIndex);
extern void * methodCacheAddress(void);
extern sqInt methodHasCogMethod(sqInt aMethodOop);
extern sqInt methodNeedsLargeContext(sqInt methodObj);
extern sqInt methodShouldBeCogged(sqInt aMethodObj);
extern CogMethod * mframeHomeMethodExport(void);
extern CogMethod * mframeHomeMethod(char *theFP);
extern sqInt mMethodClass(void);
extern void mnuCompilationBreakpointFor(sqInt selectorOop);
extern usqInt newMethodAddress(void);
extern usqInt nextProfileTickAddress(void);
extern sqInt noAssertHeaderOf(sqInt methodPointer);
extern sqInt positive32BitIntegerFor(unsigned int integerValue);
extern unsigned int positive32BitValueOf(sqInt oop);
extern sqInt positive64BitIntegerFor(usqLong integerValue);
extern usqLong positive64BitValueOf(sqInt oop);
extern sqInt primErrTable(void);
extern usqInt primFailCodeAddress(void);
extern usqInt primitiveFailAddress(void);
extern sqInt primitivePropertyFlags(sqInt primIndex);
extern void * primTraceLogAddress(void);
extern usqInt primTraceLogIndexAddress(void);
extern void printCogMethod(CogMethod *cogMethod);
extern sqInt printFrameWithSP(char *theFP, char *theSP);
extern void printMethodCacheFor(sqInt thing);
extern sqInt quickPrimitiveConstantFor(sqInt aQuickPrimitiveIndex);
extern sqInt (*quickPrimitiveGeneratorFor(sqInt aQuickPrimitiveIndex))(void) ;
extern sqInt quickPrimitiveInstVarIndexFor(sqInt primIndex);
extern sqInt rawHeaderOf(sqInt methodPointer);
extern void rawHeaderOfput(sqInt methodOop, sqInt cogMethodOrMethodHeader);
extern void reportMinimumUnusedHeadroom(void);
extern sqInt signed32BitIntegerFor(sqInt integerValue);
extern int signed32BitValueOf(sqInt oop);
extern sqInt signed64BitIntegerFor(sqLong integerValue);
extern sqLong signed64BitValueOf(sqInt oop);
extern sqInt specialSelectorNumArgs(sqInt index);
extern usqInt stackLimitAddress(void);
extern usqInt stackPointerAddress(void);
extern sqInt startPCOfMethodHeader(sqInt aCompiledMethodHeader);
extern sqInt startPCOrNilOfLiteralin(sqInt lit, sqInt aMethodObj);
extern void updateStackZoneReferencesToCompiledCodePreCompaction(void);
extern usqInt varBaseAddress(void);
extern char * whereIs(sqInt anOop);
extern sqInt mcprimHashMultiply(sqInt receiverArg);
extern usqInt primitiveFunctionPointerAddress(void);
extern char * cStringOrNullFor(sqInt oop);
extern sqInt failed(void);
extern void primitiveClosureValueNoContextSwitch(void);
extern sqInt primitiveFail(void);
extern sqInt primitiveFailForOSError(sqLong osError);
extern sqInt primitiveFailFor(sqInt reasonCode);
extern sqInt primitiveFailureCode(void);
extern sqInt signalNoResume(sqInt aSemaphore);
extern usqInt sizeOfAlienData(sqInt oop);
extern void * startOfAlienData(sqInt oop);
extern sqInt ceStoreCheck(sqInt anOop);
extern usqInt freeStartAddress(void);
extern sqInt isReallyYoungObject(sqInt obj);
extern sqInt methodHeaderOf(sqInt methodObj);
extern sqInt noShiftCompactClassIndexOf(sqInt oop);
extern sqInt nullHeaderForMachineCodeMethod(void);
extern sqInt receiverTagBitsForMethod(sqInt aMethodObj);
extern usqInt scavengeThresholdAddress(void);
extern sqInt smallIntegerTag(void);
extern sqInt withoutForwardingOnandwithsendToCogit(sqInt obj1, sqInt obj2, sqInt aBool, sqInt (*selector)(sqInt,sqInt,sqInt));
extern usqInt youngStartAddress(void);
extern sqInt addressCouldBeObj(sqInt address);
extern sqInt characterValueOf(sqInt oop);
extern sqInt checkOkayOop(usqInt oop);
extern sqInt eeInstantiateClassIndexformatnumSlots(sqInt compactClassIndex, sqInt objFormat, sqInt numSlots);
extern sqInt eeInstantiateClassindexableSize(sqInt classPointer, sqInt size);
extern void findStringBeginningWith(char *aCString);
extern void findString(char *aCString);
extern sqInt isYoungObject(sqInt obj);
extern sqInt lastPointerOf(sqInt objOop);
extern sqInt leakCheckBecome(void);
extern sqInt leakCheckFullGC(void);
extern sqInt leakCheckNewSpaceGC(void);
extern sqInt literalCountOfMethodHeader(sqInt methodHeader);
extern void longPrintReferencesTo(sqInt anOop);
extern sqInt objectAfter(sqInt oop);
extern sqInt pinObject(sqInt objOop);
extern void printActivationsOf(sqInt aMethodObj);
extern void printContextReferencesTo(sqInt anOop);
extern void printObjectsFromto(sqInt startAddress, sqInt endAddress);
extern void printReferencesTo(sqInt anOop);
extern void printWronglySizedContexts(sqInt printContexts);
extern sqInt shortentoIndexableSize(sqInt obj, sqInt nSlots);
extern void unpinObject(sqInt objOop);
extern sqInt addressCouldBeOop(sqInt address);
extern sqInt arrayFormat(void);
extern void beRootIfOld(sqInt oop);
extern sqInt byteSizeOf(sqInt oop);
extern unsigned int byteSwapped32IfBigEndian(unsigned int w);
extern unsigned long long byteSwapped64IfBigEndian(unsigned long long w);
extern sqInt byteSwapped(sqInt w);
extern sqInt characterObjectOf(sqInt characterCode);
extern sqInt characterTable(void);
extern sqInt checkedLongAt(sqInt byteAddress);
extern sqInt checkOopHasOkayClass(usqInt obj);
extern sqInt classArray(void);
extern sqInt classFloat(void);
extern sqInt classHeader(sqInt oop);
extern sqInt classSmallInteger(void);
extern sqInt compactClassAt(sqInt ccIndex);
extern sqInt compactClassIndexOfClass(sqInt classObj);
extern sqInt compactClassIndexOfHeader(sqInt header);
extern sqInt compactClassIndexOf(sqInt oop);
extern sqInt falseObject(void);
extern sqInt fetchByteofObject(sqInt byteIndex, sqInt oop);
extern sqInt fetchPointerofObject(sqInt fieldIndex, sqInt oop);
extern sqInt formatOfClass(sqInt classPointer);
extern sqInt headerIndicatesAlternateBytecodeSet(sqInt methodHeader);
extern sqInt instanceSizeOf(sqInt classObj);
extern sqInt instantiateClassindexableSize(sqInt classPointer, sqInt size);
extern sqInt isArrayNonImm(sqInt oop);
extern sqInt isCharacterValue(sqInt anInteger);
extern sqInt isCompiledMethod(sqInt oop);
extern sqInt isImmediate(sqInt anOop);
extern sqInt isIntegerValue(sqInt intValue);
extern sqInt isMarked(sqInt oop);
extern sqInt isNonIntegerObject(sqInt objectPointer);
extern sqInt isOopCompiledMethod(sqInt oop);
extern sqInt isOopImmutable(sqInt anOop);
extern sqInt isOopMutable(sqInt anOop);
extern sqInt isPinned(sqInt objOop);
extern sqInt isYoung(sqInt oop);
extern sqInt lengthOf(sqInt oop);
extern sqInt literalCountOf(sqInt methodPointer);
extern void longPrintInstancesOf(sqInt aClassOop);
extern sqInt markAndTrace(sqInt oop);
extern sqInt maybeSplObj(sqInt index);
extern sqInt minSlotsForShortening(void);
extern sqInt nilObject(void);
extern sqInt noShiftCompactClassIndexOfHeader(sqInt header);
extern sqInt numBytesOfBytes(sqInt objOop);
extern sqInt numBytesOf(sqInt objOop);
extern sqInt numSlotsOf(sqInt obj);
extern sqInt objectBefore(sqInt address);
extern sqInt objectExactlyBefore(sqInt oop);
extern sqInt popRemappableOop(void);
extern sqInt primitiveErrorTable(void);
extern void printInstancesOf(sqInt aClassOop);
extern void printMethodImplementorsOf(sqInt anOop);
extern void printMethodReferencesTo(sqInt anOop);
extern void pushRemappableOop(sqInt oop);
extern sqInt remap(sqInt oop);
extern sqInt shouldRemapObj(sqInt oop);
extern sqInt shouldRemapOop(sqInt oop);
extern sqInt splObj(sqInt index);
extern sqInt storePointerUncheckedofObjectwithValue(sqInt fieldIndex, sqInt oop, sqInt valuePointer);
extern sqInt stringForCString(const char *aCString);
extern void tenuringIncrementalGC(void);
extern sqInt topRemappableOop(void);
extern sqInt trueObject(void);
extern sqInt activeProcess(void);
extern void addIdleUsecs(sqInt idleUsecs);
extern sqInt argumentCountOfClosure(sqInt closurePointer);
extern sqInt argumentCountOfMethodHeader(sqInt header);
extern sqInt argumentCountOf(sqInt methodPointer);
extern sqInt canContextSwitchIfActivatingheader(sqInt theMethod, sqInt methodHeader);
extern sqInt checkAllAccessibleObjectsOkay(void);
extern sqInt checkOkayInterpreterObjects(sqInt writeBack);
extern sqInt copiedValueCountOfClosure(sqInt closurePointer);
extern sqInt copiedValueCountOfFullClosure(sqInt closurePointer);
extern sqInt disownVM(sqInt flags);
extern sqInt doSignalSemaphoreWithIndex(sqInt index);
extern void (*functionPointerForinClass(sqInt primIdx,sqInt theClass))(void) ;
extern usqLong getNextWakeupUsecs(void);
extern sqInt * getStackPointer(void);
extern sqInt highBit(usqInt anUnsignedValue);
extern sqInt isFloatObject(sqInt oop);
extern sqInt isKindOfInteger(sqInt oop);
extern sqInt isLargeIntegerObject(sqInt oop);
extern sqInt isLargeNegativeIntegerObject(sqInt oop);
extern sqInt isLargePositiveIntegerObject(sqInt oop);
extern sqInt isQuickPrimitiveIndex(sqInt anInteger);
extern sqInt isReadMediatedContextInstVarIndex(sqInt index);
extern sqInt isWriteMediatedContextInstVarIndex(sqInt index);
extern sqInt isKindOfClass(sqInt oop, sqInt aClass);
extern sqInt literalofMethod(sqInt offset, sqInt methodPointer);
extern void longPrintOop(sqInt oop);
extern sqInt longStoreBytecodeForHeader(sqInt methodHeader);
extern sqInt lookupSelectorinClass(sqInt selector, sqInt class);
extern sqInt maybeSelectorOfMethod(sqInt methodObj);
extern sqInt methodClassAssociationOf(sqInt methodPointer);
extern sqInt methodClassOf(sqInt methodPointer);
extern sqInt methodPrimitiveIndex(void);
extern sqInt methodUsesAlternateBytecodeSet(sqInt aMethodObj);
extern sqInt objCouldBeClassObj(sqInt objOop);
extern sqInt ownVM(sqInt threadIndexAndFlags);
extern sqInt penultimateLiteralOf(sqInt aMethodOop);
extern sqInt popStack(void);
extern sqInt primitiveIndexOfMethodheader(sqInt theMethod, sqInt methodHeader);
extern sqInt primitiveIndexOf(sqInt methodPointer);
extern void printAllStacks(void);
extern sqInt printCallStackOf(sqInt aContextOrProcessOrFrame);
extern void printChar(sqInt aByte);
extern void printHexnp(sqInt n);
extern void printHex(sqInt n);
extern void printLikelyImplementorsOfSelector(sqInt selector);
extern void printMethodCache(void);
extern void printMethodDictionaryOf(sqInt behavior);
extern void printMethodDictionary(sqInt dictionary);
extern void printProcessStack(sqInt aProcess);
extern sqInt printProcsOnList(sqInt procList);
extern sqInt printStackCallStackOf(sqInt aContextOrProcessOrFrame);
extern void printStackReferencesTo(sqInt oop);
extern void print(char *s);
extern void setBreakMNUSelector(char *aString);
extern void setBreakSelector(char *aString);
extern void setNextWakeupUsecs(usqLong value);
extern void shortPrintFrameAndNCallers(char *theFP, sqInt n);
extern sqInt sizeOfCallPrimitiveBytecode(sqInt methodHeader);
extern sqInt sizeOfLongStoreTempBytecode(sqInt methodHeader);
extern sqInt specialSelector(sqInt index);
extern usqIntptr_t stackPositiveMachineIntegerValue(sqInt offset);
extern sqIntptr_t stackSignedMachineIntegerValue(sqInt offset);
extern sqInt stackTop(void);
extern sqInt stackValue(sqInt offset);
extern sqInt startPCOfMethod(sqInt aCompiledMethod);
extern sqInt tempCountOf(sqInt methodPointer);
extern sqInt temporaryCountOfMethodHeader(sqInt header);
extern sqInt ultimateLiteralOf(sqInt aMethodOop);


/*** Global Variables ***/
VM_EXPORT sqInt breakLookupClassTag;
VM_EXPORT char * breakSelector;
VM_EXPORT sqInt breakSelectorLength ;
VM_EXPORT sqInt checkAllocFiller;
VM_EXPORT sqInt checkedPluginName;
VM_EXPORT sqInt checkForLeaks;
VM_EXPORT sqInt debugCallbackInvokes;
VM_EXPORT sqInt debugCallbackPath;
VM_EXPORT sqInt debugCallbackReturns;
VM_EXPORT sqInt deferDisplayUpdates;
VM_EXPORT sqInt desiredCogCodeSize;
VM_EXPORT sqInt desiredEdenBytes;
VM_EXPORT sqInt desiredNumStackPages;
VM_EXPORT void * displayBits;
VM_EXPORT int displayDepth;
VM_EXPORT int displayHeight;
VM_EXPORT int displayWidth;
VM_EXPORT sqInt extraVMMemory;
VM_EXPORT usqInt heapBase;
VM_EXPORT sqInt inIOProcessEvents;
VM_EXPORT struct VirtualMachine* interpreterProxy;
VM_EXPORT sqInt maxLiteralCountForCompile ;
VM_EXPORT sqInt minBackwardJumpCountForCompile ;
VM_EXPORT volatile int sendTrace;
VM_EXPORT int (*showSurfaceFn)(sqIntptr_t, int, int, int, int);
VM_EXPORT sqInt suppressHeartbeatFlag;


/*** Macros ***/
#define compilationBreakpointisMNUCase(sel, len, isMNU) do { \
	if ((len) == (isMNU ? -breakSelectorLength : breakSelectorLength) \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, (isMNU ? -breakSelectorLength : breakSelectorLength))) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define mnuCompilationBreakpoint(sel, len) do { \
	if ((len) == -breakSelectorLength \
	 && !strncmp((char *)((sel) + BaseHeaderSize), breakSelector, -breakSelectorLength)) { \
		suppressHeartbeatFlag = 1; \
		compilationBreakpointFor(sel); \
	} \
} while (0)
#define primNumberExternalCall() 117
#define classFieldOffset() (0 - BaseHeaderSize)
#define compactClassFieldWidth() 5
#define instFormatFieldLSB() 8
#define instFormatFieldWidth() 4
#define compactClassFieldLSB() 12
#define firstByteFormat() 8
#define firstCompiledMethodFormat() 12
#define firstLongFormat() 6
#define indexablePointersFormat() 3
#define isForwarded(oop) false
#define shiftForWord() 2
#define weakArrayFormat() 4
#define alternateHeaderNumLiteralsMask() 0x7FFF
#define flush() fflush(stdout)
#define remoteIsInstVarAccess() 128

