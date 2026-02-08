// Christopher Davis All Rights reserved


#include "DataAssets/Input/DataAsset_InputConfig.h"

UInputAction* UDataAsset_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InputTag) const
{
	for (const FWarriorInputActionConfig& InputActionConfig : NativeInputActions)
	{
		if (InputActionConfig.InputTag == InputTag && InputActionConfig.InputAction)
		{
			return InputActionConfig.InputAction;
		}
	}

	return nullptr;
}
