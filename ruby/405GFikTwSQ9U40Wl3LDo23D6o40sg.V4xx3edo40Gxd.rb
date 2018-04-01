
        
        map = {}
dups = []
    
        def to_a
      @filters.dup
    end
    
            entries
      end
    end
  end
end

    
            css('div.attributes').each do |node|
          node.name = 'p'
        end
    
          expect('.border-color-alternate').to have_rule(rule)
    end
  end
    
    describe 'margin' do
  before(:all) do
    ParserSupport.parse_file('library/margin')
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'padding: 1px'