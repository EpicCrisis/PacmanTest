// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PACMAN_TEST_PacmanPlayer_generated_h
#error "PacmanPlayer.generated.h already included, missing '#pragma once' in PacmanPlayer.h"
#endif
#define PACMAN_TEST_PacmanPlayer_generated_h

#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovement(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUp(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateMovement) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMovement(Z_Param_DeltaTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveLeft) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveLeft(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveDown) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveDown(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveUp(); \
		P_NATIVE_END; \
	}


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPacmanPlayer(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacmanPlayer(); \
public: \
	DECLARE_CLASS(APacmanPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacmanPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPacmanPlayer(); \
	friend PACMAN_TEST_API class UClass* Z_Construct_UClass_APacmanPlayer(); \
public: \
	DECLARE_CLASS(APacmanPlayer, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Pacman_Test"), NO_API) \
	DECLARE_SERIALIZER(APacmanPlayer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APacmanPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APacmanPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPlayer(APacmanPlayer&&); \
	NO_API APacmanPlayer(const APacmanPlayer&); \
public:


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APacmanPlayer(APacmanPlayer&&); \
	NO_API APacmanPlayer(const APacmanPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APacmanPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APacmanPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APacmanPlayer)


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_PRIVATE_PROPERTY_OFFSET
#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_10_PROLOG
#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_RPC_WRAPPERS \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_INCLASS \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_PRIVATE_PROPERTY_OFFSET \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_INCLASS_NO_PURE_DECLS \
	Pacman_Test_Source_Pacman_Test_PacmanPlayer_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Pacman_Test_Source_Pacman_Test_PacmanPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
