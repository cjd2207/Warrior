// Christopher Davis All Rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "WarriorHeroGameplayAbility.generated.h"

class AWarriorHeroCharacter;
class AWarriorHeroController;
class UHeroCombatComponent;

/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorHeroGameplayAbility : public UWarriorGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "WarriorAbility")
	AWarriorHeroCharacter* GetHeroCharacterFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "WarriorAbility")
	AWarriorHeroController* GetHeroControllerFromActorInfo();

	UFUNCTION(BlueprintPure, Category = "WarriorAbility")
	UHeroCombatComponent* GetHeroCombatComponentFromActorInfo();
	
private:
	TWeakObjectPtr<AWarriorHeroCharacter> CachedAWarriorHeroCharacter;
	TWeakObjectPtr<AWarriorHeroController> CachedAWarriorHeroController;
};
