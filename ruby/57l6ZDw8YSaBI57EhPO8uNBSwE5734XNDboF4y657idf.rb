
        
              it 'left-justifies the result if specified with $ argument is negative' do
        format('%1$*2$b', 10, -10).should == '1010      '
        format('%1$*2$B', 10, -10).should == '1010      '
        format('%1$*2$d', 112, -10).should == '112       '
        format('%1$*2$i', 112, -10).should == '112       '
        format('%1$*2$o', 87, -10).should == '127       '
        format('%1$*2$u', 112, -10).should == '112       '
        format('%1$*2$x', 196, -10).should == 'c4        '
        format('%1$*2$X', 196, -10).should == 'C4        '
    
      before :each do
    ENV['TEST_SH_EXPANSION'] = 'foo'
    @shell_var = '$TEST_SH_EXPANSION'
    platform_is :windows do
      @shell_var = '%TEST_SH_EXPANSION%'
    end
  end
    
      it 'creates a public method in script binding' do
    eval @code, script_binding
    Object.should have_method :boom
  end
    
      context 'expands focus buttons' do
    it 'finds selectors' do
      list = @buttons_list.map { |input| '#{input}:focus' }
      list = list.join(', ')
      ruleset = 'content: #{list};'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end
    
    describe 'padding' do
  before(:all) do
    ParserSupport.parse_file('library/padding')
  end