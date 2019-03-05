
        
            def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
        get '/'
    assert last_response.ok?
  end
    
              path
        end
      end
    
          def template_paths
        template_path = _prefixes.dup
        template_path.unshift '#{@devise_mapping.scoped_path}/mailer' if self.class.scoped_views?
        template_path
      end
    
            # The token is only valid if:
        # 1. we have a date
        # 2. the current time does not pass the expiry period
        # 3. the record has a remember_created_at date
        # 4. the token date is bigger than the remember_created_at
        # 5. the token matches
        generated_at.is_a?(Time) &&
         (self.class.remember_for.ago < generated_at) &&
         (generated_at > (remember_created_at || Time.now).utc) &&
         Devise.secure_compare(rememberable_value, token)
      end
    
      def process_push_request
    case hub_mode
    when 'subscribe'
      Pubsubhubbub::SubscribeService.new.call(account_from_topic, hub_callback, hub_secret, hub_lease_seconds, verified_domain)
    when 'unsubscribe'
      Pubsubhubbub::UnsubscribeService.new.call(account_from_topic, hub_callback)
    else
      ['Unknown mode: #{hub_mode}', 422]
    end
  end
    
      def subscription
    @_subscription ||= @account.subscription(
      api_subscription_url(@account.id)
    )
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
      def set_rate_limit_headers
    apply_header_limit
    apply_header_remaining
    apply_header_reset
  end
    
          # @see Base#\_retrieve
      def _retrieve(key, version, sha)
        return unless File.readable?(path_to(key))
        begin
          File.open(path_to(key), 'rb') do |f|
            if f.readline('\n').strip == version && f.readline('\n').strip == sha
              return f.read
            end
          end
          File.unlink path_to(key)
        rescue Errno::ENOENT
          # Already deleted. Race condition?
        end
        nil
      rescue EOFError, TypeError, ArgumentError => e
        Sass::Util.sass_warn 'Warning. Error encountered while reading cache #{path_to(key)}: #{e}'
      end
    
        # Create a {Sass::Selector::CommaSequence} containing only a single
    # {Sass::Selector::Sequence}.
    #
    # @param sseqs [Array<Sass::Selector::Sequence, String>]
    # @return [Sass::Selector::CommaSequence]
    def make_seq(*sseqs)
      make_cseq(Sass::Selector::Sequence.new(sseqs))
    end
    
        # The name of the file in which the exception was raised.
    # This could be `nil` if no filename is available.
    #
    # @return [String, nil]
    def sass_filename
      sass_backtrace.first[:filename]
    end
    
        # @param args [Array<String>] The command-line arguments
    def initialize(args, default_syntax)
      super(args)
      @options[:sourcemap] = :auto
      @options[:for_engine] = {
        :load_paths => default_sass_path
      }
      @default_syntax = default_syntax
    end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
        def dry_run
      ['--dry-run', '-n',
       'Do a dry run without executing actions',
       lambda do |_value|
         Configuration.env.set(:sshkit_backend, SSHKit::Backend::Printer)
       end]
    end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
            value_to_evaluate = block || value
    
          it 'autocorrects closing brace on same line from last element' do
        new_source = autocorrect_source(construct(true, false))
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
              delta(first.key.loc, second.key.loc, alignment)
        end