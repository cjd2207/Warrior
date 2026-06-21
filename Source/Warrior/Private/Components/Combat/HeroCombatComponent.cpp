// Christopher Davis All Rights reserved


#include "Components/Combat/HeroCombatComponent.h"
#include "Items/Weapons/WarriorHeroWeapon.h"

#include "WarriorDebugHelper.h"

AWarriorHeroWeapon* UHeroCombatComponent::GetHeroCarriedWeaponByTag(FGameplayTag InWeaponTag) const
{
    return Cast<AWarriorHeroWeapon>(GetCharacterCarriedWeaponByTag(InWeaponTag));
}

void UHeroCombatComponent::OnHitTargetActor(AActor* HitActor)
{
    Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT(" hit ") + HitActor->GetName(), FColor::Green);
}

void UHeroCombatComponent::OnWeaponPulledFromActor(AActor* InteractedActor)
{
    Debug::Print(GetOwningPawn()->GetActorNameOrLabel() + TEXT(" weapon pulled from target ") + InteractedActor->GetName(), FColor::Red);

}
