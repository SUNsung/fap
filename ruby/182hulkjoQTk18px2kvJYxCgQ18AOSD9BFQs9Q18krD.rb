
        
          def self.increment!(type, opts = nil)
    perform_increment!(redis_key(type), opts)
  end
    
          RailsMultisite::ConnectionManagement.with_connection(db) do
        begin
          warning_job = @reactor.queue(@timeout) do
            Rails.logger.error ''#{desc}' is still running after #{@timeout} seconds on db #{db}, this process may need to be restarted!'
          end if !non_block
          job.call
        rescue => ex
          Discourse.handle_job_exception(ex, message: 'Running deferred code '#{desc}'')
        ensure
          warning_job&.cancel
        end
      end
    rescue => ex
      Discourse.handle_job_exception(ex, message: 'Processing deferred code queue')
    ensure
      ActiveRecord::Base.connection_handler.clear_active_connections!
    end
  end
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
        # if you need to test this and are having ssl issues see:
    #  http://stackoverflow.com/questions/6756460/openssl-error-using-omniauth-specified-ssl-path-but-didnt-work
    # OpenSSL::SSL::VERIFY_PEER = OpenSSL::SSL::VERIFY_NONE if Rails.env.development?
    @omniauth = OmniAuth::Builder.new(app) do
      Discourse.authenticators.each do |authenticator|
        authenticator.register_middleware(self)
      end
    end
    
      def build(theme_ids)
    builder = Builder.new
    
          if !current_user
        @env[BAD_TOKEN] = true
        begin
          limiter.performed!
        rescue RateLimiter::LimitExceeded
          raise Discourse::InvalidAccess.new(
            'Invalid Access',
            nil,
            delete_cookie: TOKEN_COOKIE
          )
        end
      end
    elsif @env['HTTP_DISCOURSE_LOGGED_IN']
      @env[BAD_TOKEN] = true
    end
    
      before_destroy do
    UserAuthToken.log(action: 'destroy',
                      user_auth_token_id: self.id,
                      user_id: self.user_id,
                      user_agent: self.user_agent,
                      client_ip: self.client_ip,
                      auth_token: self.auth_token)
  end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
            # This is what is called on the class to actually execute it. Any
        # subclasses should implement this method and do any option parsing
        # and validation here.
        def execute
        end
    
            # This returns all the registered guests.
        #
        # @return [Hash]
        def hosts
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.hosts)
            end
          end
        end
    
              components.providers.register(name.to_sym) do
            [block.call, options]
          end
    
        def extract_to_dir(unpack_dir, basename:, verbose:)
      system_command! AIR_APPLICATION_INSTALLER,
                      args:    ['-silent', '-location', unpack_dir, path],
                      verbose: verbose
    end
  end
end

    
        if info.include?('repository')
      self.url = info['repository']['url']
    else
      self.url = 'https://npmjs.org/package/#{self.name}'
    end
    
      option '--php-dir', 'PHP_DIR',
    'Specify php dir relative to prefix if differs from pear default (pear/php)'
    
      # Default specfile generator just makes one specfile, whatever that is for
  # this package.
  def generate_specfile(builddir)
    paths = []
    logger.info('PWD: #{File.join(builddir, unpack_data_to)}')
    fileroot = File.join(builddir, unpack_data_to)
    Dir.chdir(fileroot) do
      Find.find('.') do |p|
        next if p == '.'
        paths << p
      end
    end
    logger.info(paths[-1])
    manifests = %w{package.pp package/remove.pp}
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html
    
        unless source_stat.symlink?
      File.chmod(mode, destination)
    end
  end # def copy_metadata