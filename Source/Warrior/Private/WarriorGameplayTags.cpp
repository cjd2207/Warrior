// Christopher Davis All Rights reserved


#include "WarriorGameplayTags.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_EquippedAxe, "InputTag.EquippedAxe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequippedAxe, "InputTag.UnequippedAxe");

	/**/
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe");

	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Axe, "Player.Event.Equip.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Axe, "Player.Event.Unequip.Axe");
}