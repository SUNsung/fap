
        
              def self.description
        'This will add an annotated git tag to the current branch'
      end
    
            expect(result).to eq('appledoc --project-name \'Project Name\' --project-company \'Company\' --ignore \'ignored/path\' --exit-threshold \'2\' input/dir')
      end
    
          it 'builds with a single dependency' do
        result = Fastlane::FastFile.new.parse('lane :test do
            carthage(
              command: 'build',
              dependencies: ['TestDependency']
            )
          end').runner.execute(:test)
    
          context 'with valid path to compile_commands.json' do
        context 'with no path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint( compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json' )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && oclint -report-type=html -o=oclint_report.html' }
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
              expect(config[:foo]).to eq(['5', '4', '3', '2', '1'])
        end
    
    HighLine.track_eof = false
    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
          def check
        create_event :payload => {}
      end
    end
    
                scenario_import.merges = {
              '0' => {
                'name' => 'a new name',
                'schedule' => '6pm',
                'keep_events_for' => 2.days.to_i.to_s,
                'disabled' => 'true',
                'options' => weather_agent_options.merge('api_key' => 'foo').to_json
              }
            }
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
    describe Agents::AftershipAgent do
  before do
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
              result
        end
    
            protected
    
            # Returns the internal data associated with this plugin. This
        # should NOT be called by the general public.
        #
        # @return [Hash]
        def self.data
          @data ||= {}
        end
    
        # Merge one registry with another and return a completely new
    # registry. Note that the result cache is completely busted, so
    # any gets on the new registry will result in a cache miss.
    def merge(other)
      self.class.new.tap do |result|
        result.merge!(self)
        result.merge!(other)
      end
    end
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
          # An array containing the arguments of the method definition.
      #
      # @return [Array<Node>] the arguments of the method definition
      def arguments
        node_parts[1]
      end
    
    module RuboCop
  module AST
    # Common functionality for nodes that can be used as hash elements:
    # `pair`, `kwsplat`
    module HashElementNode
      # Returns the key of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the key of the hash element
      def key
        node_parts[0]
      end
    
          # A shorthand for getting the first argument of the node.
      # Equivalent to `arguments.first`.
      #
      # @return [Node, nil] the first argument of the node,
      #                     or `nil` if there are no arguments
      def first_argument
        arguments[0]
      end
    
          # Calls the given block for each condition node in the `when` branch.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_condition
        return conditions.to_enum(__method__) unless block_given?