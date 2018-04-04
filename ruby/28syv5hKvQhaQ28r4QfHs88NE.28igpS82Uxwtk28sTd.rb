
        
        FORWARD_SLASH = '/'.freeze
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    def fixture_site(overrides = {})
  Jekyll::Site.new(site_configuration(overrides))
end
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
          respond_to do |format|
        if new_credentials.map(&:save).all?
          format.html { redirect_to user_credentials_path, notice: 'The file was successfully uploaded.'}
        else
          format.html { redirect_to user_credentials_path, notice: 'One or more of the uploaded credentials was not imported due to an error. Perhaps an existing credential had the same name?'}
        end
      end
    else
      redirect_to user_credentials_path, notice: 'No file was chosen to be uploaded.' 
    end
  end
    
        def empty?
      @entries.empty?
    end
    
        def name=(value)
      @name = value.try :strip
    end
    
        def join(*args)
      self.class.join self, *args
    end
    
            css('.toplang', '#quickview', '.top').remove
    
            css('.bs-docs-sidenav > li').each do |node|
          link = node.at_css('a')
          name = link.content
          next if IGNORE_ENTRIES.include?(name)
    
            css('.method-name', '.property-name').each do |node|
          source = node.at_css('a')
          source.before(%(<span class='name'>#{source.content}</span>))
          source.content = 'source'
          source['class'] = 'source'
        end
    
      def test_callcc_reenter
    bug9105 = '[ruby-dev:47803] [Bug #9105]'
    assert_nothing_raised(RuntimeError, bug9105) do
      h = @cls[1=>2,3=>4]
      c = nil
      f = false
      h.each { |i|
        callcc {|c2| c = c2 } unless c
        h.delete(1) if f
      }
      unless f
        f = true
        c.call
      end
    end
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
      it 'ignores spaces between directives' do
    '\x01\x02'.unpack('U U').should == [1, 2]
  end
end

    
          sleep
      after_sleep1 = true
    
    module RuboCop
  module Cop
    module Layout
      # Checks for unnecessary additional spaces inside array percent literals
      # (i.e. %i/%w).
      #
      # @example
      #
      #   # bad
      #   %w(foo  bar  baz)
      #   # good
      #   %i(foo bar baz)
      class SpaceInsideArrayPercentLiteral < Cop
        include MatchRange
        include PercentLiteral
    
                previous.push(when_node.conditions)
          end
        end
    
            def immutable_literal?(node)
          return true if node.immutable_literal?
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'border-top-width: 11px; ' +
                'border-right-width: 12px; ' +
                'border-left-width: 13px;'
      bad_rule = 'border-bottom-width: null;'
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'margin: 2px 3px'
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'
    
      context 'expands invalid text inputs' do
    it 'finds selectors' do
      list = @inputs_list.map { |input| '#{input}:invalid' }
      list = list.join(', ')
      ruleset = 'content: #{list};'