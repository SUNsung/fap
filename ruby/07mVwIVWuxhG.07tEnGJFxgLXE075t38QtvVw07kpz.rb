
        
          def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
      def respond_to_on_destroy
    # We actually need to hardcode this as Rails default responder doesn't
    # support returning empty response on GET request
    respond_to do |format|
      format.all { head :no_content }
      format.any(*navigational_formats) { redirect_to after_sign_out_path_for(resource_name) }
    end
  end
end

    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
          # Set up a param sanitizer to filter parameters using strong_parameters. See
      # lib/devise/parameter_sanitizer.rb for more info. Override this
      # method in your application controller to use your own parameter sanitizer.
      def devise_parameter_sanitizer
        @devise_parameter_sanitizer ||= Devise::ParameterSanitizer.new(resource_class, resource_name, params)
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
              opts.parse!(argv)
          return argv
        rescue OptionParser::InvalidOption
          raise Errors::CLIInvalidOptions, help: opts.help.chomp
        end
    
            # Mounts a shared folder via NFS. This assumes that the exports
        # via the host are already done.
        def mount_nfs(ip, folders)
          raise BaseError, _key: :unsupported_nfs
        end
    
            def initialize
          @logger = Log4r::Logger.new('vagrant::plugin::v1::manager')
          @registered = []
        end
    
                # If we have this machine in our index, load that.
            entry = @env.machine_index.get(name.to_s)
            if entry
              @env.machine_index.release(entry)
    
            # This contains all the registered host capabilities.
        #
        # @return [Hash<Symbol, Registry>]
        attr_reader :host_capabilities
    
    
    def get_file(url)
      uri = URI(url)
      cache_path = './#@cache_path#{uri.path}#{uri.query.tr('?&=', '-') if uri.query}'
      FileUtils.mkdir_p File.dirname(cache_path)
      if File.exists?(cache_path)
        log_http_get_file url, true
        File.read(cache_path, mode: 'rb')
      else
        log_http_get_file url, false
        content = open(url).read
        File.open(cache_path, 'wb') { |f| f.write content }
        content
      end
    end
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      gem 'cocoapods-dependencies', '~> 1.0.beta.1'
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
        def self.reset!
      @env = new
    end
    
          def echo?
        (options || {}).fetch(:echo, true)
      end
    end
  end
end

    
            value_to_evaluate = block || value
    
          # Keys that have been set, but which have never been fetched.
      def unused_keys
        keys - fetched_keys
      end
    
            if has_vector?(request, headers)
          warn env, 'attack prevented by #{self.class}'
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          require 'bundler'
      LogStash::Bundler.patch!
    
          IGNORE_GEMS_IN_PACK.each do |gem_name|
        packet_gem.ignore(gem_name)
      end
    
      def update_gems!
    # If any error is raise inside the block the Gemfile will restore a backup of the Gemfile
    previous_gem_specs_map = find_latest_gem_specs
    
      # Make sure we dont build this gem from a non jruby
  # environment.
  if RUBY_PLATFORM == 'java'
    gem.platform = 'java'
  else
    raise 'The logstash-core-api need to be build on jruby'
  end
end

    
          puts user_feedback_string_for('halting', args[:platform], machines, {'experimental' => experimental})
      options = {:debug => ENV['LS_QA_DEBUG']}