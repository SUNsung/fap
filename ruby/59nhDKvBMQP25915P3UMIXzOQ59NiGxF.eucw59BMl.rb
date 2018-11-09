
        
              def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
            Check your system for potential problems. Doctor exits with a non-zero status
        if any potential problems are found. Please note that these warnings are just
        used to help the Homebrew maintainers with debugging if you file an issue. If
        everything you use Homebrew for is working fine: please don't worry or file
        an issue; just ignore this.
      EOS
      switch '--list-checks',
        description: 'List all audit methods.'
      switch '-D', '--audit-debug',
        description: 'Enable debugging and profiling of audit methods.'
      switch :verbose
      switch :debug
    end
  end
    
      class Satisfier
    def initialize(options, &block)
      case options
      when Hash
        @options = { build_env: true }
        @options.merge!(options)
      else
        @satisfied = options
      end
      @proc = block
    end
    
          def tag
        if MacOS.version >= :lion
          MacOS.cat
        elsif MacOS.version == :snow_leopard
          Hardware::CPU.is_64_bit? ? :snow_leopard : :snow_leopard_32
        else
          # Return, e.g., :tiger_g3, :leopard_g5_64, :leopard_64 (which is Intel)
          if Hardware::CPU.type == :ppc
            tag = '#{MacOS.cat}_#{Hardware::CPU.family}'.to_sym
          else
            tag = MacOS.cat
          end
          MacOS.prefer_64_bit? ? '#{tag}_64'.to_sym : tag
        end
      end
    end
    
      def to_ary
    @paths.dup.to_ary
  end
  alias to_a to_ary
    
    Then(/^I should not be able to sign up$/) do
  confirm_not_signed_up
end
    
      # fill out the fields on the sign_in page and press submit
  def login_as(user, pass)
    fill_in 'user_username', :with=>user
    fill_in 'user_password', :with=>pass
    click_button 'Sign in'
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
          # Give each option an anchor.
      doc.css('#filecontents li p strong code').each do |c|
        c['id'] = c.inner_text.gsub(/:/, '') + '-option'
      end
    
          # @see Base#\_store
      def _store(key, version, sha, contents)
        compiled_filename = path_to(key)
        FileUtils.mkdir_p(File.dirname(compiled_filename))
        Sass::Util.atomic_create_and_write_file(compiled_filename) do |f|
          f.puts(version)
          f.puts(sha)
          f.write(contents)
        end
      rescue Errno::EACCES
        # pass
      end
    
              def set_global_#{name}(name, value)
            global_env.set_#{name}(name, value)
          end
        RUBY
      end
    end
    
        class << self
      # Returns an error report for an exception in CSS format.
      #
      # @param e [Exception]
      # @param line_offset [Integer] The number of the first line of the Sass template.
      # @return [String] The error report
      # @raise [Exception] `e`, if the
      #   {file:SASS_REFERENCE.md#full_exception-option `:full_exception`} option
      #   is set to false.
      def exception_to_css(e, line_offset = 1)
        header = header_string(e, line_offset)
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
  end
end

    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
          # Returns an array of all the values in the `hash` literal.
      #
      # @return [Array<Node>] an array of values in the `hash` literal
      def values
        each_pair.map(&:value)
      end
    
          # Custom destructuring method. This is used to normalize the branches
      # for `if` and `unless` nodes, to aid comparisons and conversions.
      #
      # @return [Array<Node>] the different parts of the `if` statement
      def node_parts
        if unless?
          condition, false_branch, true_branch = *self
        else
          condition, true_branch, false_branch = *self
        end
    
          def initialize
        @entries = []
        yield self if block_given?
      end
    
        def fire_event(event, options={})
      reverse = options[:reverse]
      reraise = options[:reraise]