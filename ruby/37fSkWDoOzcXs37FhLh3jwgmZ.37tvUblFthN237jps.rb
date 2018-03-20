
        
          def as_boolean(string)
    return true   if string == true   || string =~ (/(true|t|yes|y|1)$/i)
    return false  if string == false  || string.blank? || string =~ (/(false|f|no|n|0)$/i)
    raise ArgumentError.new('invalid value for Boolean: \'#{string}\'')
  end
    
      config_name 'codec'
    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
      context 'expands focus buttons' do
    it 'finds selectors' do
      list = @buttons_list.map { |input| '#{input}:focus' }
      list = list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with arguments (1, $value: 4em 6em)' do
    it 'outputs quadruple the first value from the default scale' do
      expect('.one-double-value').to have_rule('font-size: 1.024em')
    end
  end
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'