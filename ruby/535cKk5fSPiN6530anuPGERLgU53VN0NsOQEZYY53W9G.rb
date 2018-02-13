
        
            # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end
    
        context 'with a default' do
      context 'when the variables is defined' do
        it 'returns the variable' do
          expect(dsl.fetch(:scm, :svn)).to eq :git
        end
      end
    
      context 'called with one color' do
    it 'applies same width to all sides' do
      rule = 'border-width: 1px'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end