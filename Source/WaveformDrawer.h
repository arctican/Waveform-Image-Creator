/*
  ==============================================================================

    WaveformDrawer.h
    Created: 26 May 2014 5:16:34pm
    Author:  bex

  ==============================================================================
*/

#ifndef WAVEFORMDRAWER_H_INCLUDED
#define WAVEFORMDRAWER_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class WaveformDrawer    : public Component
{
public:
    WaveformDrawer();
    ~WaveformDrawer();

    void paint (Graphics&);
    void resized();

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WaveformDrawer)
};


#endif  // WAVEFORMDRAWER_H_INCLUDED
