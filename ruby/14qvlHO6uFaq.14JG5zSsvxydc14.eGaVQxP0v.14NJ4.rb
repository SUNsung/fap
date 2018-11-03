
        
              def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
      s.add_runtime_dependency('addressable',           '~> 2.4')
  s.add_runtime_dependency('colorator',             '~> 1.0')
  s.add_runtime_dependency('em-websocket',          '~> 0.5')
  s.add_runtime_dependency('i18n',                  '>= 0.9.5', '< 2')
  s.add_runtime_dependency('jekyll-sass-converter', '~> 1.0')
  s.add_runtime_dependency('jekyll-watch',          '~> 2.0')
  s.add_runtime_dependency('kramdown',              '~> 1.14')
  s.add_runtime_dependency('liquid',                '~> 4.0')
  s.add_runtime_dependency('mercenary',             '~> 0.3.3')
  s.add_runtime_dependency('pathutil',              '~> 0.9')
  s.add_runtime_dependency('rouge',                 '~> 3.0')
  s.add_runtime_dependency('safe_yaml',             '~> 1.0')
end

    
      ActiveSupport.run_load_hooks(:devise_controller, self)
end

    
        def relative_url_root
      @relative_url_root ||= begin
        config = Rails.application.config
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        # This will detect the proper guest OS for the machine and set up
    # the class to actually execute capabilities.
    def detect!
      guest_name = @machine.config.vm.guest
      initialize_capabilities!(guest_name, @guests, @capabilities, @machine)
    rescue Errors::CapabilityHostExplicitNotDetected => e
      raise Errors::GuestExplicitNotDetected, value: e.extra_data[:value]
    rescue Errors::CapabilityHostNotDetected
      raise Errors::GuestNotDetected
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

    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path #{expected.inspect} but it had'
  end
end
    
              if arg.braces?
            unless braces_around_second_from_end
              add_arg_offense(arg, :redundant)
            end
          elsif braces_around_second_from_end
            add_arg_offense(arg, :missing)
          end
        end
    
      it 'ignores single-line arrays' do
    expect_no_offenses('[a, b, c]')
  end
    
    module RuboCop
  module AST
    # A node extension for `def` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `def` nodes within RuboCop.
    class DefNode < Node
      include ParameterizedNode
      include MethodIdentifierPredicates
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
    module RuboCop
  module AST
    # A node extension for `hash` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `hash` nodes within RuboCop.
    class HashNode < Node
      # Returns an array of all the key value pairs in the `hash` literal.
      #
      # @return [Array<PairNode>] an array of `pair` nodes
      def pairs
        each_pair.to_a
      end