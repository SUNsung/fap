
        
        codez = Array.new
    
          unless leaf.respond_to?(:empty?) && !leaf.empty?
        raise CaskError, 'Cannot create metadata subdir for empty leaf.'
      end
    
          it 'reports that 32-bit Intel machines can't run x86_64 executables' do
        allow(Hardware::CPU).to receive(:type).and_return :intel
        allow(Hardware::CPU).to receive(:bits).and_return 32
        expect(Hardware::CPU.can_run?(:x86_64)).to be false
      end
    
        # See \{#modifier}.
    # @return [String]
    def resolved_modifier
      # modifier should contain only a single string
      modifier.first || ''
    end