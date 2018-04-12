
        
        IMAGE_WIDTH = 256
IMAGE_HEIGHT = 256
NSUBSAMPLES = 2
NAO_SAMPLES = 8
    
    msfenv_real_pathname = Pathname.new(__FILE__).realpath
root = msfenv_real_pathname.parent.parent
    
    meterp = Rex::Post::Meterpreter::Client.new(sock)
    
      context 'called with four styles' do
    it 'applies different styles to all sides' do
      rule = 'border-style: dotted groove ridge none'
    
      context 'called with arguments (2, $value: 4em 6em)' do
    it 'outputs sextuple the second value from the default scale' do
      expect('.two-double-value').to have_rule('font-size: 3.125em')
    end
  end
end

    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 7px; ' +
                'right: 8px; ' +
                'bottom: 9px; ' +
                'left: 10px;'
    
          expect('.size-implicit').to have_ruleset(rule)
    end
  end
    
          expect('.all-text-inputs-invalid').to have_ruleset(ruleset)
    end
  end
end
