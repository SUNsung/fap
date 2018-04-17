
        
        describe 'border-style' do
  before(:all) do
    ParserSupport.parse_file('library/border-style')
  end
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'margin: 2px 3px'
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end
    
          expect('.size-implicit').to have_ruleset(rule)
    end
  end