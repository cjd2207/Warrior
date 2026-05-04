// Christopher Davis All Rights reserved


#include "WarriorGameplayTags.h"

namespace WarriorGameplayTags
{
	/** Input Tags **/
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_EquippedAxe, "InputTag.EquippedAxe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_UnequippedAxe, "InputTag.UnequippedAxe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack_Axe, "InputTag.LightAttack.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack_Axe, "InputTag.HeavyAttack.Axe");

	/**/
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Ability_UnEquip_Axe, "Player.Ability.UnEquip.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "Player.Ability.Attack.Light.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "Player.Ability.Attack.Heavy.Axe");

	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe");

	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equip_Axe, "Player.Event.Equip.Axe");
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Event_Unequip_Axe, "Player.Event.Unequip.Axe");

	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Player_Status_JumpToFinish, "Player.Status.JumpToFinish");

	/** Enemy Tags **/
	WARRIOR_API UE_DEFINE_GAMEPLAY_TAG(Enemy_Weapon, "Enemy.Weapon");

}