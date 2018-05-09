
        
          def all_projects(current_user)
    projects = []
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-style: inset; ' +
                'border-right-style: none; ' +
                'border-left-style: double;'
      bad_rule = 'border-bottom-style: null;'
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'margin: 2px 3px'
    
          expect('.prefix').to have_ruleset(rule)
    end
  end