
        
          def attributes_match
    expect(@actual).to have_attributes(@expected_attrs)
  end
    
    FactoryBot.find_definitions
    
          it 'returns true' do
        expect(described_class.default?).to be_falsey
      end
    end
  end
    
          it 'returns false' do
        expect(described_class.editor?).to be_falsey
      end
    end
  end
    
          say 'Checking if $SHELL is set ==> '
      yes_no Tmuxinator::Doctor.shell?
    end