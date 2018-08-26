
        
        require_relative 'options'
require_relative 'runner'
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
          def self.output
        # Define the shared values you are going to provide
        # Example
        [
          ['[[NAME_UP]]_CUSTOM_VALUE', 'A description of what this value contains']
        ]
      end
    
          def self.category
        :source_control
      end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :public_key,
                                       env_name: 'APPETIZE_PUBLICKEY',
                                       description: 'Public key of the app you wish to update',
                                       is_string: true,
                                       sensitive: true,
                                       default_value: Actions.lane_context[SharedValues::APPETIZE_PUBLIC_KEY],
                                       default_value_dynamic: true,
                                       optional: false,
                                       verify_block: proc do |value|
                                         if value.start_with?('private_')
                                           UI.user_error!('You provided a private key to appetize, please provide the public key')
                                         end
                                       end),
          FastlaneCore::ConfigItem.new(key: :base_url,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_BASE',
                                       description: 'Base URL of Appetize service',
                                       is_string: true,
                                       default_value: 'https://appetize.io/embed',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :device,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_DEVICE',
                                       description: 'Device type: iphone4s, iphone5s, iphone6, iphone6plus, ipadair, iphone6s, iphone6splus, ipadair2, nexus5, nexus7 or nexus9',
                                       is_string: true,
                                       default_value: 'iphone5s'),
          FastlaneCore::ConfigItem.new(key: :scale,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_SCALE',
                                       description: 'Scale of the simulator',
                                       is_string: true,
                                       optional: true,
                                       verify_block: proc do |value|
                                         available = ['25', '50', '75', '100']
                                         UI.user_error!('Invalid scale, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :orientation,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_ORIENTATION',
                                       description: 'Device orientation',
                                       is_string: true,
                                       default_value: 'portrait',
                                       verify_block: proc do |value|
                                         available = ['portrait', 'landscape']
                                         UI.user_error!('Invalid device, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :language,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_LANGUAGE',
                                       description: 'Device language in ISO 639-1 language code, e.g. 'de'',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :color,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_COLOR',
                                       description: 'Color of the device',
                                       is_string: true,
                                       default_value: 'black',
                                       verify_block: proc do |value|
                                         available = ['black', 'white', 'silver', 'gray']
                                         UI.user_error!('Invalid device color, available: #{available.join(', ')}') unless available.include?(value)
                                       end),
          FastlaneCore::ConfigItem.new(key: :launch_url,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_LAUNCH_URL',
                                       description: 'Specify a deep link to open when your app is launched',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :os_version,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_OS_VERSION',
                                       description: 'The operating system version on which to run your app, e.g. 10.3, 8.0',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :params,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_PARAMS',
                                       description: 'Specifiy params value to be passed to Appetize',
                                       is_string: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :proxy,
                                       env_name: 'APPETIZE_VIEWING_URL_GENERATOR_PROXY',
                                       description: 'Specify a HTTP proxy to be passed to Appetize',
                                       is_string: true,
                                       optional: true)
        ]
      end
    
            # Maps parameter hash to CLI args
        appledoc_args = params_hash_to_cli_args(params_hash)
        UI.success('Generating documentation.')
        cli_args = appledoc_args.join(' ')
        input_cli_arg = Array(params_hash[:input]).map(&:shellescape).join(' ')
        command = 'appledoc #{cli_args}'.strip + ' ' + input_cli_arg
        UI.verbose(command)
        Actions.sh(command)
      end
    
        # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
            # Executes a command and returns true if the command succeeded,
        # and false otherwise. By default, this executes as a normal user,
        # and it is up to the communicator implementation if they expose an
        # option for running tests as an administrator.
        #
        # @see #execute
        def test(command, opts=nil)
        end
      end
    end
  end
end

    
            # Initializes the system. Any subclasses MUST make sure this
        # method is called on the parent. Therefore, if a subclass overrides
        # `initialize`, then you must call `super`.
        def initialize(vm)
          @vm = vm
        end
    
                # If we were told this is an upgrade safe configuration class
            # then we add it to the set.
            if upgrade_safe
              data[:config_upgrade_safe] ||= Set.new
              data[:config_upgrade_safe].add(name.to_sym)
            end
          end
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
                    raise Errors::VMNoMatchError if machines.empty?
              else
                # String name, just look for a specific VM
                @logger.debug('Finding machine that match name: #{name}')
                machines << get_machine.call(name.to_sym)
                raise Errors::VMNotFoundError, name: name if !machines[0]
              end
            end
          else
            # No name was given, so we return every VM in the order
            # configured.
            @logger.debug('Loading all machines...')
            machines = @env.machine_names.map do |machine_name|
              get_machine.call(machine_name)
            end
          end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # Called after the configuration is finalized and loaded to validate
        # this object.
        #
        # @param [Machine] machine Access to the machine that is being
        #   validated.
        # @return [Hash]
        def validate(machine)
          return { self.to_s => _detected_errors }
        end
    
          # Starting with the parent node and recursively for the parent node's
      # children, check if the node is a HEREDOC and if the HEREDOC ends below
      # or on the last line of the parent node.
      #
      # Example:
      #
      #   # node is `b: ...` parameter
      #   # last_line_heredoc?(node) => false
      #   foo(a,
      #     b: {
      #       a: 1,
      #       c: <<-EOM
      #         baz
      #       EOM
      #     }
      #   )
      #
      #   # node is `b: ...` parameter
      #   # last_line_heredoc?(node) => true
      #   foo(a,
      #     b: <<-EOM
      #       baz
      #     EOM
      #   )
      def last_line_heredoc?(node, parent = nil)
        parent ||= node
    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
      let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.
  let(:b_comment) { '' } # Comment after the second element.
  let(:multi_prefix) { '' } # Prefix multi and heredoc with this.
  let(:multi) do # A viable multi-line element.
    <<-RUBY.strip_indent.chomp
      {
      foo: bar
      }
    RUBY
  end
  # This heredoc is unsafe to edit around because it ends on the same line as
  # the node itself.
  let(:heredoc) do
    <<-RUBY.strip_indent.chomp
      <<-EOM
      baz
      EOM
    RUBY
  end
  # This heredoc is safe to edit around because it ends on a line before the
  # last line of the node.
  let(:safe_heredoc) do
    <<-RUBY.strip_indent.chomp
      {
      a: <<-EOM
      baz
      EOM
      }
    RUBY
  end
    
        it 'does not match dir/** for file in hidden dir' do
      expect(described_class.match_path?('dir/**', 'dir/.hidden/file'))
        .to be(false)
      expect($stderr.string).to eq('')
    end
    
              if variables.nil?
            replacement_range = replacement_range(node, node.loc.begin.end_pos)
            correction = 'for _ in #{enumerable.source} do'
          else
            replacement_range = replacement_range(node,
                                                  items.loc.expression.end_pos)
            correction = 'for #{variables.source} in #{enumerable.source} do'
          end
    
        it 'when using #{method} with multiple conditional' do
      inspect_source(<<-RUBY.strip_indent)
        if true && object.active? && object.#{method}
          something
        end
      RUBY
      if update
        expect(cop.messages.empty?).to be(true)
      else
        expect(cop.messages)
          .to eq(['`#{method}` returns a model which is always truthy.'])
      end
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