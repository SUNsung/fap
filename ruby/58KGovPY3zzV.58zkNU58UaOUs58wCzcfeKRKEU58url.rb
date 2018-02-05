
        
        puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
          expect('.border-style-false-third').to have_ruleset(ruleset)
      expect('.border-style-false-third').to_not have_rule(bad_rule)
    end
  end
end

    
      context 'called with one color' do
    it 'applies same width to all sides' do
      rule = 'border-width: 1px'
    
      context 'called with arguments (1, $value: 2em)' do
    it 'outputs double the first value from the default scale' do
      expect('.one-base-two').to have_rule('font-size: 2.5em')
    end
  end
    
      context 'called with no prefixes' do
    it 'outputs the spec' do
      rule = 'appearance: none;'
    
          expect('.size-both').to have_ruleset(rule)
    end
  end