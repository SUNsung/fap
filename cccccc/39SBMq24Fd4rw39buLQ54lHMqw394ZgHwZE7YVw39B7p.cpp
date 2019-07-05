
        
        #pragma once
    
    unordered_map<wstring, wstring> CCalcEngine::s_engineStrings;
    
    using namespace CalculatorApp::Common::Automation;
using namespace Windows::UI::Xaml::Automation;
using namespace Windows::UI::Xaml::Automation::Peers;
using namespace Windows::UI::Xaml::Controls;
    
    namespace CalculatorApp::Common::Automation
{
    // These enum types are copied from the types available in
    // Windows::UI::Xaml::Automation::Peers in the RS3 SDK.
    // When this app switches to min version RS3, these custom
    // enums should be removed and the Windows types should be used
    // instead.
    // TODO - MSFT 12735088
public
    enum class AutomationNotificationKind
    {
        ItemAdded = 0,
        ItemRemoved = 1,
        ActionCompleted = 2,
        ActionAborted = 3,
        Other = 4
    };
    }
    
            // Inner state of the underlying reader.
        // Is set in the RestoreFromCheckpoint call and used in the next GetNextMinibatch
        // when the reader state is restored after the first StartEpoch call.
        Internal::Optional<Dictionary> m_state;
    
            state.Save(tempCheckpointFile);
    
    template <typename TVector>
inline void RandomShuffleMT(TVector& v, std::mt19937_64& rng)
{
    foreach_index(currentLocation, v)
    {
        // Pick a random location and swap with current one
        const size_t randomLocation = RandMT(0, v.size(), rng);
        std::swap(v[currentLocation], v[randomLocation]);
    }
}
    
        bool UnitTest()
    {
        try
        {
            size_t nInput = 2;
            size_t nHidden = 3;
            size_t nOutput = 3;
    }
    }
    
    /**
@brief FlipY3D action.
@details This action is used for flipping the target node on the y axis.
*/
class CC_DLL FlipY3D : public FlipX3D
{
public:
    /**
    @brief Create the action with duration.
    @param duration Specify the duration of the FlipY3D action. It's a value in seconds.
    @return If the creation success, return a pointer of FlipY3D action; otherwise, return nil.
    */
    static FlipY3D* create(float duration);
    }
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
NS_CC_END

    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    NS_CC_END