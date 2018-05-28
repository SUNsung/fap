
        
            # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
            p environment.var(name)
      else
        p Script::Parser.parse(text, @line, 0).perform(environment)
      end
    rescue Sass::SyntaxError => e
      puts 'SyntaxError: #{e.message}'
      if @options[:trace]
        e.backtrace.each do |line|
          puts '\tfrom #{line}'
        end
      end
    end
  end
end

    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
      # Many RSpec users commonly either run the entire suite or an individual
  # file, and it's useful to allow more verbose output when running an
  # individual spec file.
  if config.files_to_run.one?
    # Use the documentation formatter for detailed output,
    # unless a formatter has already been configured
    # (e.g. via a command-line flag).
    config.default_formatter = 'doc'
  end
    
            def operator_assignment_node
          return nil unless node.parent
          return nil unless OPERATOR_ASSIGNMENT_TYPES.include?(node.parent.type)
          return nil unless node.sibling_index.zero?
          node.parent
        end
    
    module RuboCop
  module RSpec
    # Mixin for `expect_offense` and `expect_no_offenses`
    #
    # This mixin makes it easier to specify strict offense expectations
    # and a declarative and visual fashion. Just type out the code that
    # should generate a offense, annotate code by writing '^'s
    # underneath each character that should be highlighted, and follow
    # the carets with a string (separated by a space) that is the
    # message of the offense. You can include multiple offenses in
    # one code snippet.
    #
    # @example Usage
    #
    #     expect_offense(<<-RUBY.strip_indent)
    #       a do
    #         b
    #       end.c
    #       ^^^^^ Avoid chaining a method call on a do...end block.
    #     RUBY
    #
    # @example Equivalent assertion without `expect_offense`
    #
    #     inspect_source(<<-RUBY.strip_indent)
    #       a do
    #         b
    #       end.c
    #     RUBY
    #
    #     expect(cop.offenses.size).to be(1)
    #
    #     offense = cop.offenses.first
    #     expect(offense.line).to be(3)
    #     expect(offense.column_range).to be(0...5)
    #     expect(offense.message).to eql(
    #       'Avoid chaining a method call on a do...end block.'
    #     )
    #
    # If you do not want to specify an offense then use the
    # companion method `expect_no_offenses`. This method is a much
    # simpler assertion since it just inspects the source and checks
    # that there were no offenses. The `expect_offenses` method has
    # to do more work by parsing out lines that contain carets.
    module ExpectOffense
      def expect_offense(source, file = nil)
        expected_annotations = AnnotatedSource.parse(source)
    
      let(:source) { ''something'.intern' }
  let(:corrected) { autocorrect_source(source) }