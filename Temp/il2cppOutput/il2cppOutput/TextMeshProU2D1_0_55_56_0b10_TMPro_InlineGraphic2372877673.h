#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"

// UnityEngine.Texture
struct Texture_t2243626319;
// TMPro.InlineGraphicManager
struct InlineGraphicManager_t2038767860;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.InlineGraphic
struct  InlineGraphic_t2372877673  : public MaskableGraphic_t540192618
{
public:
	// UnityEngine.Texture TMPro.InlineGraphic::texture
	Texture_t2243626319 * ___texture_28;
	// TMPro.InlineGraphicManager TMPro.InlineGraphic::m_manager
	InlineGraphicManager_t2038767860 * ___m_manager_29;
	// UnityEngine.RectTransform TMPro.InlineGraphic::m_RectTransform
	RectTransform_t3349966182 * ___m_RectTransform_30;
	// UnityEngine.RectTransform TMPro.InlineGraphic::m_ParentRectTransform
	RectTransform_t3349966182 * ___m_ParentRectTransform_31;

public:
	inline static int32_t get_offset_of_texture_28() { return static_cast<int32_t>(offsetof(InlineGraphic_t2372877673, ___texture_28)); }
	inline Texture_t2243626319 * get_texture_28() const { return ___texture_28; }
	inline Texture_t2243626319 ** get_address_of_texture_28() { return &___texture_28; }
	inline void set_texture_28(Texture_t2243626319 * value)
	{
		___texture_28 = value;
		Il2CppCodeGenWriteBarrier(&___texture_28, value);
	}

	inline static int32_t get_offset_of_m_manager_29() { return static_cast<int32_t>(offsetof(InlineGraphic_t2372877673, ___m_manager_29)); }
	inline InlineGraphicManager_t2038767860 * get_m_manager_29() const { return ___m_manager_29; }
	inline InlineGraphicManager_t2038767860 ** get_address_of_m_manager_29() { return &___m_manager_29; }
	inline void set_m_manager_29(InlineGraphicManager_t2038767860 * value)
	{
		___m_manager_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_manager_29, value);
	}

	inline static int32_t get_offset_of_m_RectTransform_30() { return static_cast<int32_t>(offsetof(InlineGraphic_t2372877673, ___m_RectTransform_30)); }
	inline RectTransform_t3349966182 * get_m_RectTransform_30() const { return ___m_RectTransform_30; }
	inline RectTransform_t3349966182 ** get_address_of_m_RectTransform_30() { return &___m_RectTransform_30; }
	inline void set_m_RectTransform_30(RectTransform_t3349966182 * value)
	{
		___m_RectTransform_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_RectTransform_30, value);
	}

	inline static int32_t get_offset_of_m_ParentRectTransform_31() { return static_cast<int32_t>(offsetof(InlineGraphic_t2372877673, ___m_ParentRectTransform_31)); }
	inline RectTransform_t3349966182 * get_m_ParentRectTransform_31() const { return ___m_ParentRectTransform_31; }
	inline RectTransform_t3349966182 ** get_address_of_m_ParentRectTransform_31() { return &___m_ParentRectTransform_31; }
	inline void set_m_ParentRectTransform_31(RectTransform_t3349966182 * value)
	{
		___m_ParentRectTransform_31 = value;
		Il2CppCodeGenWriteBarrier(&___m_ParentRectTransform_31, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
