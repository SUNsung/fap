
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
    STDOUT.sync = true
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        self.req_types.each do |key, i|
      query = self.where(req_type: i)
      s['#{key}_total']   = query.sum(:count)
      s['#{key}_30_days'] = query.where('date > ?', 30.days.ago).sum(:count)
      s['#{key}_7_days']  = query.where('date > ?', 7.days.ago).sum(:count)
    end
    
      def report
    @report ||= JSON.parse(request.body.read)['csp-report'].slice(
      'blocked-uri',
      'disposition',
      'document-uri',
      'effective-directive',
      'original-policy',
      'referrer',
      'script-sample',
      'status-code',
      'violated-directive',
      'line-number',
      'source-file'
    )
  end
    
    end

    
      def policy(theme_ids = [])
    ContentSecurityPolicy.policy(theme_ids)
  end
end

    
          response.headers['Last-Modified'] = 10.years.ago.httpdate
      response.headers['Content-Length'] = svg_sprite.bytesize.to_s
      immutable_for 1.year
    
      MAX_TIME_READ_DIFF = 100
  # attempt to add total read time to user based on previous time this was called
  def self.update_time_read!(id)
    if last_seen = last_seen_cached(id)
      diff = (Time.now.to_f - last_seen.to_f).round
      if diff > 0 && diff < MAX_TIME_READ_DIFF
        update_args = ['time_read = time_read + ?', diff]
        UserStat.where(user_id: id).update_all(update_args)
        UserVisit.where(user_id: id, visited_at: Time.zone.now.to_date).update_all(update_args)
      end
    end
    cache_last_seen(id, Time.now.to_f)
  end
    
          launch_event = builder.new_event(:launch)
      post_thread = client.post_event(launch_event)
      unless post_thread.nil?
        @threads << post_thread
      end
    end
    
          def self.available_options
        [
          FastlaneCore::ConfigItem.new(key: :tag,
                                       env_name: 'FL_GIT_TAG_TAG',
                                       description: 'Define your own tag text. This will replace all other parameters',
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :grouping,
                                       env_name: 'FL_GIT_TAG_GROUPING',
                                       description: 'Is used to keep your tags organised under one 'folder'',
                                       default_value: 'builds'),
          FastlaneCore::ConfigItem.new(key: :prefix,
                                       env_name: 'FL_GIT_TAG_PREFIX',
                                       description: 'Anything you want to put in front of the version number (e.g. 'v')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :postfix,
                                       env_name: 'FL_GIT_TAG_POSTFIX',
                                       description: 'Anything you want to put at the end of the version number (e.g. '-RC1')',
                                       default_value: ''),
          FastlaneCore::ConfigItem.new(key: :build_number,
                                       env_name: 'FL_GIT_TAG_BUILD_NUMBER',
                                       description: 'The build number. Defaults to the result of increment_build_number if you\'re using it',
                                       default_value: Actions.lane_context[Actions::SharedValues::BUILD_NUMBER],
                                       default_value_dynamic: true,
                                       is_string: false),
          FastlaneCore::ConfigItem.new(key: :message,
                                       env_name: 'FL_GIT_TAG_MESSAGE',
                                       description: 'The tag message. Defaults to the tag's name',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :commit,
                                       env_name: 'FL_GIT_TAG_COMMIT',
                                       description: 'The commit or object where the tag will be set. Defaults to the current HEAD',
                                       default_value_dynamic: true,
                                       optional: true),
          FastlaneCore::ConfigItem.new(key: :force,
                                       env_name: 'FL_GIT_TAG_FORCE',
                                       description: 'Force adding the tag',
                                       optional: true,
                                       is_string: false,
                                       default_value: false),
          FastlaneCore::ConfigItem.new(key: :sign,
                                       env_name: 'FL_GIT_TAG_SIGN',
                                       description: 'Make a GPG-signed tag, using the default e-mail address's key',
                                       optional: true,
                                       is_string: false,
                                       default_value: false)
        ]
      end
    
        # [String] A description shown to the user
    attr_accessor :description
    
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

    
      # https://stackoverflow.com/a/18623297/252627, last variant
  require 'open3'
  Open3.popen3(compare_command) do |stdin, stdout, stderr, thread|
    error = stderr.read.chomp
    # expect(error).to eq(expected_compare_error)
    expect(error).to eq(expected_compare_error) # match(/#{expected_compare_error}/)
  end
end
    
    full_params = ARGV.shelljoin
    
            it 'sets up screenshots folder in current folder' do
          expect(options[:screenshots_path]).to eq('./screenshots')
        end
    
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
    
            # Executes a command on the remote machine with administrative
        # privileges. See {#execute} for documentation, as the API is the
        # same.
        #
        # @see #execute
        def sudo(command, opts=nil)
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

    
            # Halt the machine. This method should gracefully shut down the
        # operating system. This method will cause `vagrant halt` and associated
        # commands to _block_, meaning that if the machine doesn't halt
        # in a reasonable amount of time, this method should just return.
        #
        # If when this method returns, the machine's state isn't 'powered_off,'
        # Vagrant will proceed to forcefully shut the machine down.
        def halt
          raise BaseError, _key: :unsupported_halt
        end
    
              hosts
        end
    
                    @env.machine_names.each do |machine_name|
                  if machine_name =~ regex
                    machines << get_machine.call(machine_name)
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

    
        def dependencies
      @dependencies ||= [Cask::CaskLoader.load('adobe-air')]
    end
    
          it 'adds per_page parameter to url' do
        expect(current_url).to match(/per_page\=45/)
      end
    
              def order_token
            request.headers['X-Spree-Order-Token'] || params[:order_token]
          end
    
              def payment_methods_serializer
            Spree::Api::Dependencies.storefront_payment_method_serializer.constantize
          end
    
          @@return_authorization_attributes = [
        :id, :number, :state, :order_id, :memo, :created_at, :updated_at
      ]