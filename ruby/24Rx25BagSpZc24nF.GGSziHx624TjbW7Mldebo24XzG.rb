
        
                def initialize(symbol)
          @symbol = symbol.to_sym
        end
    
              @scrolls.each do |scroll|
            feed.entry(scroll, :url => '/otherstuff/' + scroll.to_param.to_s, :updated => Time.utc(2007, 1, scroll.id)) do |entry|
              entry.title(scroll.title)
              entry.content(scroll.body, :type => 'html')
    
            # Sentinel value denoting that a value has not been set.
        UNSET_VALUE = Object.new
    
            # This is the method called to provision the system. This method
        # is expected to do whatever necessary to provision the system (create files,
        # SSH, etc.)
        def provision!
        end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-color: #0f0; ' +
                'border-right-color: #ff0; ' +
                'border-left-color: #00f;'
      bad_rule = 'border-bottom-color: null;'
    
      context 'called with four widths' do
    it 'applies different widths to all sides' do
      rule = 'border-width: 7px 8px 9px 10px'
    
          expect('.padding-all').to have_rule(rule)
    end
  end