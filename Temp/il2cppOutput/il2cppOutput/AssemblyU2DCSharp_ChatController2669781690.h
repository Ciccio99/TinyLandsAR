#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TMPro.TMP_InputField
struct TMP_InputField_t1778301588;
// TMPro.TMP_Text
struct TMP_Text_t1920000777;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t3248359358;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatController
struct  ChatController_t2669781690  : public MonoBehaviour_t1158329972
{
public:
	// TMPro.TMP_InputField ChatController::TMP_ChatInput
	TMP_InputField_t1778301588 * ___TMP_ChatInput_2;
	// TMPro.TMP_Text ChatController::TMP_ChatOutput
	TMP_Text_t1920000777 * ___TMP_ChatOutput_3;
	// UnityEngine.UI.Scrollbar ChatController::ChatScrollbar
	Scrollbar_t3248359358 * ___ChatScrollbar_4;

public:
	inline static int32_t get_offset_of_TMP_ChatInput_2() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___TMP_ChatInput_2)); }
	inline TMP_InputField_t1778301588 * get_TMP_ChatInput_2() const { return ___TMP_ChatInput_2; }
	inline TMP_InputField_t1778301588 ** get_address_of_TMP_ChatInput_2() { return &___TMP_ChatInput_2; }
	inline void set_TMP_ChatInput_2(TMP_InputField_t1778301588 * value)
	{
		___TMP_ChatInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___TMP_ChatInput_2, value);
	}

	inline static int32_t get_offset_of_TMP_ChatOutput_3() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___TMP_ChatOutput_3)); }
	inline TMP_Text_t1920000777 * get_TMP_ChatOutput_3() const { return ___TMP_ChatOutput_3; }
	inline TMP_Text_t1920000777 ** get_address_of_TMP_ChatOutput_3() { return &___TMP_ChatOutput_3; }
	inline void set_TMP_ChatOutput_3(TMP_Text_t1920000777 * value)
	{
		___TMP_ChatOutput_3 = value;
		Il2CppCodeGenWriteBarrier(&___TMP_ChatOutput_3, value);
	}

	inline static int32_t get_offset_of_ChatScrollbar_4() { return static_cast<int32_t>(offsetof(ChatController_t2669781690, ___ChatScrollbar_4)); }
	inline Scrollbar_t3248359358 * get_ChatScrollbar_4() const { return ___ChatScrollbar_4; }
	inline Scrollbar_t3248359358 ** get_address_of_ChatScrollbar_4() { return &___ChatScrollbar_4; }
	inline void set_ChatScrollbar_4(Scrollbar_t3248359358 * value)
	{
		___ChatScrollbar_4 = value;
		Il2CppCodeGenWriteBarrier(&___ChatScrollbar_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
