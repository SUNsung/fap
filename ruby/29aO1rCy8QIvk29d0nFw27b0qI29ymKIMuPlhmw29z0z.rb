
        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
    require 'action_view/rendering'
require 'active_support/core_ext/module/redefine_method'
    
        # Direct access to partial rendering.
    def render_partial(context, options, &block) #:nodoc:
      PartialRenderer.new(@lookup_context).render(context, options, block)
    end
    
        def initialize
      Fastlane.load_actions
      @runner = Runner.new
      @actions_requiring_special_handling = ['sh'].to_set
    end
    
            context 'when slather version is 2.4.0' do
          let(:version) { '2.4.0' }
          it 'configuration option is not available' do
            expect(action.configuration_available?).to be_falsey
          end
        end
    
            # NOTE: feed_token was renamed from rss_token but both needs to be supported because
        #       users might have already added the feed to their RSS reader before the rename
        token = current_request.params[:feed_token].presence || current_request.params[:rss_token].presence
        return unless token
    
              builds = scope_relevant.select('count(*)').to_sql
          created = scope_relevant.created.select('count(*)').to_sql
          success = scope_relevant.success.select('count(*)').to_sql
          manual = scope_relevant.manual.select('count(*)').to_sql
          pending = scope_relevant.pending.select('count(*)').to_sql
          running = scope_relevant.running.select('count(*)').to_sql
          skipped = scope_relevant.skipped.select('count(*)').to_sql
          canceled = scope_relevant.canceled.select('count(*)').to_sql
          warnings = scope_warnings.select('count(*) > 0').to_sql
    
            def value_color
          STATUS_COLOR[@status.to_sym] || STATUS_COLOR[:unknown]
        end
      end
    end
  end
end

    
            # Checks if the target machine is ready for communication. If this
        # returns true, then all the other methods for communicating with
        # the machine are expected to be functional.
        #
        # @return [Boolean]
        def ready?
          false
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
    
            # This registers a plugin. This should _NEVER_ be called by the public
        # and should only be called from within Vagrant. Vagrant will
        # automatically register V1 plugins when a name is set on the
        # plugin.
        def register(plugin)
          if !@registered.include?(plugin)
            @logger.info('Registered plugin: #{plugin.name}')
            @registered << plugin
          end
        end
    
            # The configuration for this provisioner. This will be an instance of
        # the `Config` class which is part of the provisioner.
        attr_reader :config
    
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

    
        # Make rules use parent refs so that
    #
    #     foo
    #       color: green
    #     foo.bar
    #       color: blue
    #
    # becomes
    #
    #     foo
    #       color: green
    #       &.bar
    #         color: blue
    #
    # @param root [Tree::Node] The parent node
    def parent_ref_rules(root)
      current_rule = nil
      root.children.map! do |child|
        unless child.is_a?(Tree::RuleNode)
          parent_ref_rules(child) if child.is_a?(Tree::DirectiveNode)
          next child
        end
    
        # Finds the line of the source template
    # on which an exception was raised.
    #
    # @param exception [Exception] The exception
    # @return [String] The line number
    def get_line(exception)
      # SyntaxErrors have weird line reporting
      # when there's trailing whitespace
      if exception.is_a?(::SyntaxError)
        return (exception.message.scan(/:(\d+)/).first || ['??']).first
      end
      (exception.backtrace[0].scan(/:(\d+)/).first || ['??']).first
    end
    
            raise error unless error.is_a?(Sass::SyntaxError) && !@options[:stop_on_error]
        had_error = true
        puts_action :error, :red,
          '#{error.sass_filename} (Line #{error.sass_line}: #{error.message})'
        STDOUT.flush
      end
    
      desc 'Run all specs'
  task :spec => [:check_submodules, 'spec:all']
    
    if $PROGRAM_NAME == __FILE__ && !ENV['COCOAPODS_NO_BUNDLER']
  ENV['BUNDLE_GEMFILE'] = File.expand_path('../../Gemfile', __FILE__)
  require 'rubygems'
  require 'bundler/setup'
  $LOAD_PATH.unshift File.expand_path('../../lib', __FILE__)
elsif ENV['COCOAPODS_NO_BUNDLER']
  require 'rubygems'
  gem 'cocoapods'
end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
      require 'cocoapods/gem_version'
  require 'cocoapods-core'
  require 'cocoapods/config'
  require 'cocoapods/downloader'