#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[27] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0 } /* 0x06000005 System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0 } /* 0x06000008 System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 0, 0 } /* 0x0600000A System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 0, 0 } /* 0x06000014 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 0, 0 } /* 0x06000016 UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[125] = 
{
	{ 48614, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 48614, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 48614, 1, 343, 343, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 48614, 1, 344, 344, 13, 53, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 48614, 1, 344, 344, 0, 0, 10, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 48614, 1, 345, 345, 17, 63, 13, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 48614, 1, 345, 345, 17, 63, 19, kSequencePointKind_StepOut, 0, 6 } /* seqPointIndex: 6 */,
	{ 48614, 1, 346, 346, 9, 10, 25, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 48615, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 48615, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 48615, 1, 350, 350, 16, 51, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 48615, 1, 350, 350, 16, 51, 11, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 48616, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 48616, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 48616, 1, 354, 354, 16, 48, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 48616, 1, 354, 354, 16, 48, 11, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 48621, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 48621, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 48621, 1, 379, 379, 17, 21, 0, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 48622, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 48622, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 48622, 1, 380, 380, 17, 29, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 48623, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 48623, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 48623, 1, 387, 387, 17, 18, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 48623, 1, 388, 388, 21, 51, 1, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 48623, 1, 389, 389, 17, 18, 9, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 48624, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 48624, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 48624, 1, 412, 412, 13, 14, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 48624, 1, 413, 413, 17, 39, 1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 48624, 1, 413, 413, 17, 39, 2, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 48624, 1, 413, 413, 0, 0, 13, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 48624, 1, 414, 414, 17, 18, 16, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 48624, 1, 415, 415, 21, 38, 17, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 48624, 1, 415, 415, 21, 38, 18, kSequencePointKind_StepOut, 0, 35 } /* seqPointIndex: 35 */,
	{ 48624, 1, 416, 416, 21, 47, 24, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 48624, 1, 416, 416, 21, 47, 24, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 48624, 1, 416, 416, 0, 0, 30, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 48624, 1, 417, 417, 21, 22, 33, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 48624, 1, 418, 418, 25, 39, 34, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 48624, 1, 418, 418, 25, 39, 34, kSequencePointKind_StepOut, 0, 41 } /* seqPointIndex: 41 */,
	{ 48624, 1, 418, 418, 0, 0, 40, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 48624, 1, 419, 419, 29, 47, 43, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 48624, 1, 419, 419, 29, 47, 43, kSequencePointKind_StepOut, 0, 44 } /* seqPointIndex: 44 */,
	{ 48624, 1, 419, 419, 0, 0, 49, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 48624, 1, 421, 421, 29, 48, 51, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 48624, 1, 421, 421, 29, 48, 51, kSequencePointKind_StepOut, 0, 47 } /* seqPointIndex: 47 */,
	{ 48624, 1, 422, 422, 21, 22, 57, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 48624, 1, 423, 423, 21, 52, 58, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 48624, 1, 423, 423, 0, 0, 67, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 48624, 1, 424, 424, 25, 50, 70, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 48624, 1, 424, 424, 25, 50, 76, kSequencePointKind_StepOut, 0, 52 } /* seqPointIndex: 52 */,
	{ 48624, 1, 425, 425, 17, 18, 82, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 48624, 1, 426, 426, 13, 14, 83, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 48625, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 48625, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 48625, 1, 429, 429, 13, 14, 0, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 48625, 1, 430, 430, 17, 50, 1, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 48625, 1, 430, 430, 17, 50, 1, kSequencePointKind_StepOut, 0, 59 } /* seqPointIndex: 59 */,
	{ 48625, 1, 431, 431, 13, 14, 7, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 48626, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 48626, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 48626, 1, 434, 434, 13, 14, 0, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 48626, 1, 435, 435, 17, 49, 1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 48626, 1, 435, 435, 17, 49, 1, kSequencePointKind_StepOut, 0, 65 } /* seqPointIndex: 65 */,
	{ 48626, 1, 436, 436, 13, 14, 7, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 48627, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 48627, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 48627, 1, 626, 626, 9, 10, 0, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 48627, 1, 627, 627, 13, 45, 1, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 48627, 1, 627, 627, 0, 0, 11, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 48627, 1, 628, 628, 17, 43, 14, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 48627, 1, 628, 628, 17, 43, 21, kSequencePointKind_StepOut, 0, 73 } /* seqPointIndex: 73 */,
	{ 48627, 1, 629, 629, 9, 10, 27, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 48628, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 48628, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 48628, 1, 633, 633, 9, 10, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 48628, 1, 634, 634, 13, 50, 1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 48628, 1, 634, 634, 0, 0, 11, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 48628, 1, 635, 635, 17, 52, 14, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 48628, 1, 635, 635, 17, 52, 21, kSequencePointKind_StepOut, 0, 81 } /* seqPointIndex: 81 */,
	{ 48628, 1, 636, 636, 9, 10, 27, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 48633, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 48633, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 48633, 2, 49, 49, 9, 10, 0, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 48633, 2, 50, 50, 13, 29, 1, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 48633, 2, 51, 51, 9, 10, 10, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 48634, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 48634, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 48634, 2, 64, 64, 9, 10, 0, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 48634, 2, 65, 65, 13, 53, 1, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 48634, 2, 65, 65, 13, 53, 2, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 48634, 2, 65, 65, 13, 53, 9, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 48634, 2, 65, 65, 13, 53, 14, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 48634, 2, 66, 66, 9, 10, 22, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 48635, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 48635, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 48635, 3, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 48635, 3, 48, 48, 13, 29, 1, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 48635, 3, 49, 49, 9, 10, 10, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 48636, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 48636, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 48636, 3, 62, 62, 9, 10, 0, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 48636, 3, 63, 63, 13, 53, 1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 48636, 3, 63, 63, 13, 53, 2, kSequencePointKind_StepOut, 0, 105 } /* seqPointIndex: 105 */,
	{ 48636, 3, 63, 63, 13, 53, 9, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 48636, 3, 63, 63, 13, 53, 14, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 48636, 3, 64, 64, 9, 10, 22, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 48637, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 48637, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 48637, 4, 177, 177, 9, 10, 0, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 48637, 4, 178, 178, 13, 47, 1, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 48637, 4, 178, 178, 0, 0, 11, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 48637, 4, 180, 180, 17, 69, 14, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 48637, 4, 180, 180, 17, 69, 22, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 48637, 4, 181, 181, 9, 10, 28, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 48638, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 48638, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 48638, 4, 185, 185, 9, 10, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 48638, 4, 186, 186, 13, 46, 1, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 48638, 4, 186, 186, 0, 0, 11, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 48638, 4, 187, 187, 17, 75, 14, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 48638, 4, 187, 187, 17, 75, 22, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 48638, 4, 188, 188, 9, 10, 28, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_AudioModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\Audio.bindings.cs", { 167, 2, 22, 70, 58, 2, 209, 216, 91, 16, 131, 31, 57, 29, 102, 133} }, //1 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioClipPlayable.bindings.cs", { 136, 110, 11, 239, 4, 37, 180, 165, 136, 112, 116, 151, 134, 78, 48, 235} }, //2 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioMixerPlayable.bindings.cs", { 61, 101, 161, 191, 246, 243, 230, 247, 173, 244, 46, 184, 65, 58, 4, 90} }, //3 
{ "\\Users\\bokken\\buildslave\\unity\\build\\Modules\\Audio\\Public\\ScriptBindings\\AudioSampleProvider.bindings.cs", { 47, 120, 50, 45, 60, 26, 245, 52, 137, 63, 13, 94, 178, 230, 94, 160} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[6] = 
{
	{ 6642, 1 },
	{ 6641, 1 },
	{ 6645, 1 },
	{ 6648, 2 },
	{ 6649, 3 },
	{ 6652, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 26 },
	{ 0, 11 },
	{ 0, 84 },
	{ 0, 28 },
	{ 0, 28 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 12 },
	{ 0, 24 },
	{ 0, 29 },
	{ 0, 29 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[27] = 
{
	{ 26, 0, 1 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings::StopAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean) */,
	{ 0, 0, 0 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean) */,
	{ 11, 1, 1 } /* System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute() */,
	{ 84, 2, 1 } /* System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput() */,
	{ 28, 3, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[]) */,
	{ 28, 4, 1 } /* System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32) */,
	{ 12, 5, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle() */,
	{ 24, 6, 1 } /* System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable) */,
	{ 12, 7, 1 } /* UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle() */,
	{ 24, 8, 1 } /* System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable) */,
	{ 29, 9, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32) */,
	{ 29, 10, 1 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AudioModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	125,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_AudioModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	6,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
