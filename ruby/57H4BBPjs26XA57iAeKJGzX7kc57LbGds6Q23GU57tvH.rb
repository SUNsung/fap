  def test_redirect_to_url_with_unescaped_query_string
    get :redirect_to_url_with_unescaped_query_string
    assert_response :redirect
    assert_redirected_to 'http://example.com/query?status=new'
  end
    
            def test_url_from_environment
          spec = resolve :production, 'production' => 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  =>  'abstract',
            'host'     =>  'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
        assert_equal 1, david.projects.size
  end
    
      # trivial method for testing Array#to_xml with :methods
  def topic_id
    id
  end
    
      test 'does not execute action if subscription is rejected' do
    subscriptions = Minitest::Mock.new
    subscriptions.expect(:remove_subscription, SecretChannel, [SecretChannel])
    
      module DummyEncoder
    extend self
    def encode(*) '{ 'foo': 'encoded' }' end
    def decode(*) { foo: 'decoded' } end
  end
    
          assert_not connection.connected
      assert_equal [], @server.connections
    end
  end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            def gemfile_contents
          <<~RUBY
            source 'https://rubygems.org'
            # Hello! This is where you manage which Jekyll version is used to run.
            # When you want to use a different version, change it below, save the
            # file and run `bundle install`. Run Jekyll with `bundle exec`, like so:
            #
            #     bundle exec jekyll serve
            #
            # This will help ensure the proper Jekyll version is running.
            # Happy Jekylling!
            gem 'jekyll', '~> #{Jekyll::VERSION}'
            # This is the default theme for new Jekyll sites. You may change this to anything you like.
            gem 'minima', '~> 2.0'
            # If you want to use GitHub Pages, remove the 'gem 'jekyll'' above and
            # uncomment the line below. To upgrade, run `bundle update github-pages`.
            # gem 'github-pages', group: :jekyll_plugins
            # If you have any plugins, put them here!
            group :jekyll_plugins do
              gem 'jekyll-feed', '~> 0.6'
            end
            # Windows does not include zoneinfo files, so bundle the tzinfo-data gem
            gem 'tzinfo-data', platforms: [:mingw, :mswin, :x64_mingw, :jruby]
            # Performance-booster for watching directories on Windows
            gem 'wdm', '~> 0.1.0' if Gem.win_platform?
    
              new_theme_name = args.join('_')
          theme = Jekyll::ThemeBuilder.new(new_theme_name, opts)
          Jekyll.logger.abort_with 'Conflict:', '#{theme.path} already exists.' if theme.path.exist?
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
      it 'returns nil if else-body is empty and expression is false' do
    if false
      123
    else
    end.should == nil
  end
    
      ##
  # Writes +pemmable+, which must respond to +to_pem+ to +path+ with the given
  # +permissions+. If passed +cipher+ and +passphrase+ those arguments will be
  # passed to +to_pem+.
    
              body.rewind
          cred = credentials_for_request('foo', 'Hunter3', params, body)
          post['Authorization'] = cred
          post.body_stream = body
          http.request(post){|res|
            assert_equal('401', res.code, log.call)
            assert_not_equal('bbb', res.body, log.call)
          }
    
            unless password_matches
          error('%s: password unmatch.', userid)
          challenge(req, res)
        end
        info('%s: authentication succeeded.', userid)
        req.user = userid
      end
    
    def assert_not_match(unexpected_pattern, testsrc, message = '')
  newtest
  assert_check(testsrc, message) {|result|
    if unexpected_pattern !~ result
      nil
    else
      desc = '#{unexpected_pattern.inspect} expected to be !~\n#{result.inspect}'
      pretty(testsrc, desc, result)
    end
  }
end
    
      ## Canonical Ordering
  def self.canonical_ordering_one(string)
    sorting = string.each_char.collect { |c| [c, CLASS_TABLE[c]] }
    (sorting.length-2).downto(0) do |i| # almost, but not exactly bubble sort
      (0..i).each do |j|
        later_class = sorting[j+1].last
        if 0<later_class and later_class<sorting[j].last
          sorting[j], sorting[j+1] = sorting[j+1], sorting[j]
        end
      end
    end
    return sorting.collect(&:first).join('')
  end
    
        #
    # @param ips [String] IP range(s)
    # @return [true] if actions on ips are allowed.
    # @return [false] if actions are not allowed on ips.
    def allow_actions_on?(ips)
      return true unless limit_to_network
      return true unless boundary
      return true if boundary.empty?
      boundaries = Shellwords.split(boundary)
      return true if boundaries.empty? # It's okay if there is no boundary range after all
      given_range = Rex::Socket::RangeWalker.new(ips)
      return false unless given_range # Can't do things to nonexistant IPs
      allowed = false
      boundaries.each do |boundary_range|
        ok_range = Rex::Socket::RangeWalker.new(boundary)
        allowed  = true if ok_range.include_range? given_range
      end
      return allowed
    end
    
    begin
  require 'bundler/setup'
rescue LoadError
  $stderr.puts '[*] Metasploit requires the Bundler gem to be installed'
  $stderr.puts '    $ gem install bundler'
  exit(1)
end
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
    
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
      entries = [{ template: deploy_rb, file: config_dir.join('deploy.rb') }]
  entries += envs.split(',').map { |stage| { template: stage_rb, file: deploy_dir.join('#{stage}.rb') } }
    
      it 'displays documentation URL as help banner' do
    expect(help_output.lines.first).to match(/capistranorb.com/)
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''
    
            private
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end
    
        node_cache[:comment][start_index] = r0