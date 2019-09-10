
        
                    @config['syntax_highlighter_opts'] = begin
              strip_coderay_prefix(
                @config['syntax_highlighter_opts'] \
                  .merge(CODERAY_DEFAULTS) \
                  .merge(@config['coderay'])
              )
            end
          end
        end
      end
    end
  end
end

    
    class TestKramdown < JekyllUnitTest
  context 'kramdown' do
    setup do
      @config = {
        'markdown' => 'kramdown',
        'kramdown' => {
          'smart_quotes'            => 'lsquo,rsquo,ldquo,rdquo',
          'entity_output'           => 'as_char',
          'toc_levels'              => '1..6',
          'auto_ids'                => false,
          'footnote_nr'             => 1,
          'show_warnings'           => true,
    }
    }
    
          build_phases.each { |phase| site.send phase }
    
    CONTENT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
          def step_name(_keyword, _step_match, status, _source_indent, _background, _file_colon_line)
        @io.print CHARS[status]
        @io.print ' '
      end
      # rubocop:enable Metrics/ParameterLists
    
      def sign_in_params
    devise_parameter_sanitizer.sanitize(:sign_in)
  end
    
          # Sign out a given user or scope. This helper is useful for signing out a user
      # after deleting accounts. Returns true if there was a logout and false if there
      # is no user logged in on the referred scope
      #
      # Examples:
      #
      #   sign_out :user     # sign_out(scope)
      #   sign_out @user     # sign_out(resource)
      #
      def sign_out(resource_or_scope=nil)
        return sign_out_all_scopes unless resource_or_scope
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        user = warden.user(scope: scope, run_callbacks: false) # If there is no user
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
            public
    
          # @param  [Pathname] framework
      #         The vendored framework to search into.
      # @return [Pathname] The path of the header directory of the
      #         vendored framework.
      #
      def self.vendored_frameworks_headers_dir(framework)
        dir = framework + 'Headers'
        dir.directory? ? dir.realpath : dir
      end
    
    get '/' do
  halt erb(:login) unless params[:user]
  erb :chat, :locals => { :user => params[:user].gsub(/\W/, '') }
end
    
        def bad_request?(e)
      Sinatra::BadRequest === e
    end
    
      # fetch data
  fields = {
    :authors => `git shortlog -sn`.force_encoding('utf-8').scan(/[^\d\s].*/),
    :email   => ['mail@zzak.io', 'konstantin.haase@gmail.com'],
    :files   => %w(License README.md Rakefile Gemfile rack-protection.gemspec) + Dir['lib/**/*']
  }
    
          # Checks the client's masked token to see if it matches the
      # session token.
      def valid_token?(session, token)
        return false if token.nil? || token.empty?
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
        it 'allows option overrides' do
      q = Sidekiq::Queue.new('bar')
      assert_equal 0, q.size
      assert SetWorker.set(queue: :bar).perform_async(1)
      job = q.first
      assert_equal 'bar', job['queue']
      assert_equal 12, job['retry']
    end
    
        def with_sidekiq_option(name, value)
      _original, Sidekiq.options[name] = Sidekiq.options[name], value
      begin
        yield
      ensure
        Sidekiq.options[name] = _original
      end
    end
    
      it 'perform_one raise error upon empty queue' do
    DirectWorker.clear
    assert_raises Sidekiq::EmptyQueueError do
      DirectWorker.perform_one
    end
  end