// Christopher Davis All Rights reserved


#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Characters/WarriorHeroCharacter.h"
#include "Controllers/WarriorHeroController.h"

AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
    if (!CachedAWarriorHeroCharacter.IsValid())
    {
        CachedAWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
    }

    return CachedAWarriorHeroCharacter.IsValid() ? CachedAWarriorHeroCharacter.Get() : nullptr;
}

AWarriorHeroController* UWarriorHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
    if (!CachedAWarriorHeroController.IsValid())
    {
        CachedAWarriorHeroController = Cast<AWarriorHeroController>(CurrentActorInfo->PlayerController);
    }

    return CachedAWarriorHeroController.IsValid() ? CachedAWarriorHeroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
    return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}
