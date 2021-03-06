/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.5

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "SliderComponent.h"
#include "ChoiceComponent.h"
#include "CheckBoxComponent.h"
class Magical8bitPlug2AudioProcessorEditor;
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class BasicParamsComponent  : public Component,
    public ComboBox::Listener,
    public Button::Listener,
    public Slider::Listener
{
public:
    //==============================================================================
    BasicParamsComponent (Magical8bitPlug2AudioProcessor& p, Magical8bitPlug2AudioProcessorEditor& e);
    ~BasicParamsComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    Magical8bitPlug2AudioProcessor& processor;
    Magical8bitPlug2AudioProcessorEditor& editor;

    std::unique_ptr<SliderAttachment> attc;
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Label> polyLabel;
    std::unique_ptr<SliderComponent> gainSlider;
    std::unique_ptr<ChoiceComponent> oscChoice;
    std::unique_ptr<Slider> polyNumberInput;
    std::unique_ptr<CheckBoxComponent> advancedSwitch;
    std::unique_ptr<ChoiceComponent> colorSchemeChoice;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicParamsComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

