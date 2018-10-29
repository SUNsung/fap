
        
                private
    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
            private
    
              # Determines whether the current action has a layout definition by
          # checking the action name against the :only and :except conditions
          # set by the <tt>layout</tt> method.
          #
          # ==== Returns
          # * <tt>Boolean</tt> - True if the action has a layout definition, false otherwise.
          def _conditional_layout?
            return unless super
    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
        initializer 'action_view.logger' do
      ActiveSupport.on_load(:action_view) { self.logger ||= Rails.logger }
    end
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Environment] env Vagrant::Environment object of the
        #   environment that this configuration has been loaded into. This
        #   gives you convenient access to things like the the root path
        #   and so on.
        # @param [ErrorRecorder] errors
        def validate(env, errors)
        end
      end
    end
  end
end

    
            # Configures the given list of networks on the virtual machine.
        #
        # The networks parameter will be an array of hashes where the hashes
        # represent the configuration of a network interface. The structure
        # of the hash will be roughly the following:
        #
        # {
        #   type:      :static,
        #   ip:        '192.168.33.10',
        #   netmask:   '255.255.255.0',
        #   interface: 1
        # }
        #
        def configure_networks(networks)
          raise BaseError, _key: :unsupported_configure_networks
        end
    
              # Register a new config class only if a name was given.
          if name != UNSET_VALUE
            data[:config].register(name.to_sym, &block)
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V2 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # This is an internal initialize function that should never be
        # overridden. It is used to initialize some common internal state
        # that is used in a provider.
        def _initialize(name, machine)
          initialize_capabilities!(
            name.to_sym,
            { name.to_sym => [Class.new, nil] },
            Vagrant.plugin('2').manager.provider_capabilities,
            machine,
          )
        end
      end
    end
  end
end

    
        private
    
    class Api::SalmonController < Api::BaseController
  include SignatureVerification
    
            format('%1$*2$c', 97, 10).should == '         a'
        format('%1$*2$p', [], 10).should == '        []'
        format('%1$*2$s', 'abc', 10).should == '       abc'
      end
    
        t.wakeup
    t.value.should == 5
  end
end
    
      # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
      it 'writes the default record separator and NOT $/ to $stderr after the warning message' do
    lambda {
      $VERBOSE = true
      $/ = 'rs'
      warn('')
    }.should output(nil, /\n/)
  end
    
          @devel.instance_eval(&block)
    end
    
            login_items.each do |name|
          ohai 'Removing login item #{name}'
          command.run!(
            '/usr/bin/osascript',
            args: [
              '-e',
              %Q(tell application 'System Events' to delete every login item whose name is '#{name}'),
            ],
            sudo: false,
          )
          sleep 1
        end
      end
    
    # Undocumented options:
#     `-D` activates debugging and profiling of the audit methods (not the same as `--debug`)
#     `--list-checks` lists all audit methods
    
        it 'parses short option' do
      parser.parse(['-v'])
      expect(Homebrew.args).to be_verbose
    end
    
      def existing
    existing_path = select(&File.method(:directory?))
    # return nil instead of empty PATH, to unset environment variables
    existing_path unless existing_path.empty?
  end
    
    def get_stdin(message)
  print message
  STDIN.gets.chomp
end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        it 'accepts multiple non-hash parameters' do
      expect_no_offenses('where(1, '2')')
    end
    
      it 'ignores empty arrays' do
    expect_no_offenses('[]')
  end
    
      include_examples 'multiline literal brace layout' do
    let(:open) { '{' }
    let(:close) { '}' }
    let(:a) { 'a: 1' }
    let(:b) { 'b: 2' }
    let(:multi_prefix) { 'b: ' }
    let(:multi) do
      <<-RUBY.strip_indent.chomp
        [
        1
        ]
      RUBY
    end
  end
    
          # Returns the else branch of the `case` statement, if any.
      #
      # @return [Node] the else branch node of the `case` statement
      # @return [nil] if the case statement does not have an else branch.
      def else_branch
        node_parts[-1]
      end
    
          # Returns an array of all the values in the `hash` literal.
      #
      # @return [Array<Node>] an array of values in the `hash` literal
      def values
        each_pair.map(&:value)
      end
    
          # Checks whether the `if` node is in a modifier form, i.e. a condition
      # trailing behind an expression. Only `if` and `unless` nodes without
      # other branches can be modifiers.
      #
      # @return [Boolean] whether the `if` node is a modifier
      def modifier_form?
        (if? || unless?) && super
      end
    
          # Returns the operator for the `kwsplat` as a string.
      #
      # @return [String] the double splat operator
      def operator
        DOUBLE_SPLAT
      end