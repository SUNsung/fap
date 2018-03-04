
        
          context 'called with two colors' do
    it 'applies to alternating sides' do
      rule = 'border-color: #0f0 #00f'
    
      context 'called with one prefix' do
    it 'applies the prefix to the property' do
      rule = '-webkit-appearance: none; ' +
             'appearance: none;'
    
          expect('.size-both').to have_ruleset(rule)
    end
  end