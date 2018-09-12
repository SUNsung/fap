
        
        Given(/config stage file has line '(.*?)'/) do |line|
  TestApp.append_to_deploy_file(line)
end
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
        def servers
      @servers ||= Servers.new
    end
    
          # Runs all validation rules registered for the given key against the
      # user-supplied value for that variable. If no validator raises an
      # exception, the value is assumed to be valid.
      def assert_valid_now(key, value)
        validators[key].each do |validator|
          validator.call(key, value)
        end
      end
    
          def initialize(values={})
        @trusted_keys = []
        @fetched_keys = []
        @locations = {}
        @values = values
        @trusted = true
      end
    
          def check_new_line(node)
        return unless closing_brace_on_same_line?(node)
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
          it 'detects closing brace on different line from last element' do
        src = construct(true, true)
        inspect_source(src)
        expect(cop.offenses.size).to eq(1)
        expect(cop.highlights).to eq([close])
        expect(cop.messages).to eq([described_class::ALWAYS_SAME_LINE_MESSAGE])
      end
    
        it 'registers an offense for each without an item' do
      expect_offense(<<-RUBY.strip_indent)
        def func
          [1, 2, 3].each do
          ^^^^^^^^^^^^^^^^^ Prefer `for` over `each`.
            something
          end
        end
      RUBY
    end
    
          # The body of the method definition.
      #
      # @note this can be either a `begin` node, if the method body contains
      #       multiple expressions, or any other node, if it contains a single
      #       expression.
      #
      # @return [Node] the body of the method definition
      def body
        node_parts[0]
      end
    
          # Returns the branch of the `if` node that gets evaluated when its
      # condition is truthy.
      #
      # @note This is normalized for `unless` nodes.
      #
      # @return [Node] the truthy branch node of the `if` node
      # @return [nil] if the truthy branch is empty
      def if_branch
        node_parts[1]
      end
    
          # Returns the delta between this element's delimiter and the argument's.
      #
      # @note Pairs with different delimiter styles return a delta of 0
      #
      # @return [Integer] the delta between the two delimiters
      def delimiter_delta(other)
        HashElementDelta.new(self, other).delimiter_delta
      end