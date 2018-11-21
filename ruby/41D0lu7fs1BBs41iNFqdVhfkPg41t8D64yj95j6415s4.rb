
        
          if rss_url.nil?
    puts '#{name}: GETTING'
    rss_check_url = 'http://ajax.googleapis.com/ajax/services/feed/lookup?v=1.0&q=#{web_url}'
    uri = URI.parse(rss_check_url)
    response = JSON.parse(Net::HTTP.get(uri))
    rss_url = response['responseData']['url'] if response['responseData'] && response['responseData'].has_key?('url')
    
          name = line.text[0...scanner.pos]
      could_be_property =
        if name.start_with?('--')
          (scanned = scanner.scan(/\s*:/))
        else
          (scanned = scanner.scan(/\s*:(?:\s+|$)/))
        end
    
        # Returns a string representation of the Sass backtrace.
    #
    # @param default_filename [String] The filename to use for unknown files
    # @see #sass_backtrace
    # @return [String]
    def sass_backtrace_str(default_filename = 'an unknown file')
      lines = message.split('\n')
      msg = lines[0] + lines[1..-1].
        map {|l| '\n' + (' ' * 'Error: '.size) + l}.join
      'Error: #{msg}' +
        sass_backtrace.each_with_index.map do |entry, i|
          '\n        #{i == 0 ? 'on' : 'from'} line #{entry[:line]}' +
            ' of #{entry[:filename] || default_filename}' +
            (entry[:mixin] ? ', in `#{entry[:mixin]}'' : '')
        end.join
    end
    
        # Parses the command-line arguments and runs the executable.
    # Calls `Kernel#exit` at the end, so it never returns.
    #
    # @see #parse
    def parse!
      # rubocop:disable RescueException
      begin
        parse
      rescue Exception => e
        # Exit code 65 indicates invalid data per
        # http://www.freebsd.org/cgi/man.cgi?query=sysexits. Setting it via
        # at_exit is a bit of a hack, but it allows us to rethrow when --trace
        # is active and get both the built-in exception formatting and the
        # correct exit code.
        at_exit {exit Sass::Util.windows? ? 13 : 65} if e.is_a?(Sass::SyntaxError)
    
          def previous_link
        label = '&laquo; Previous'
        if @page_num == 1
          %(<span class='disabled'>#{label}</span>)
        else
          link = url('/history/#{@page.name}?page=#{@page_num-1}')
          %(<a href='#{link}' hotkey='h'>#{label}</a>)
        end
      end
    
          def page_dir
        @page_dir
      end
    
    # Make sure we're in the test dir, the tests expect that to be the current
# directory.
TEST_DIR  = File.join(File.dirname(__FILE__), *%w[.])
    
    desc 'Update gemspec'
task :gemspec => :validate do
  # read spec file and split out manifest section
  spec = File.read(gemspec_file)
  head, manifest, tail = spec.split('  # = MANIFEST =\n')
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
      include_examples 'multiline literal brace layout method argument' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) { ['[', '1', ']'] }
  end
    
          unless described_class ==
             RuboCop::Cop::Layout::MultilineMethodDefinitionBraceLayout
        context 'with a chained call on the closing brace' do
          let(:suffix) { '.any?' }
          let(:source) { construct(false, true) }
    
            expect(cop.highlights).to eq([close])
        expect(cop.messages)
          .to eq([described_class::SAME_LINE_MESSAGE])
      end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end
