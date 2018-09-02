
        
          describe 'migrating a hash' do
    it 'should convert every attribute' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'})).to eq(
                                  {'a' => '$.data', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should work with leading_dollarsign_is_jsonpath' do
      expect(LiquidMigrator.convert_hash({'a' => '$.data', 'b' => 'This is a <$.test>'}, leading_dollarsign_is_jsonpath: true)).to eq(
                                  {'a' => '{{data}}', 'b' => 'This is a {{test}}'}
      )
    end
    it 'should use the corresponding *_path attributes when using merge_path_attributes'do
      expect(LiquidMigrator.convert_hash({'a' => 'default', 'a_path' => '$.data'}, {leading_dollarsign_is_jsonpath: true, merge_path_attributes: true})).to eq(
                                  {'a' => '{{data}}'}
      )
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_hash({'b' => 'This is <$.complex[2]>'}) }.
        to raise_error('JSONPath '$.complex[2]' is too complex, please check your migration.')
    end
  end
    
        # Check if proper Lockable module methods are present & unlock strategy
    # allows to unlock resource on password reset
    def unlockable?(resource)
      resource.respond_to?(:unlock_access!) &&
        resource.respond_to?(:unlock_strategy_enabled?) &&
        resource.unlock_strategy_enabled?(:email)
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
            if uri 
          path = remove_domain_from_uri(uri)
          path = add_fragment_back_to_path(uri, path)
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
        include Rails.application.routes.url_helpers
    include Rails.application.routes.mounted_helpers
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
        it 'returns the time at which the file was modified when passed ?M' do
      Kernel.test(?M, @tmp_file).should == @tmp_file.mtime
    end
  end
    
      it 'creates a public method in TOPLEVEL_BINDING' do
    eval @code, TOPLEVEL_BINDING
    Object.should have_method :boom
  end
    
      class Mention < ApplicationRecord
  end
    
    require 'cucumber/api_steps'
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
          OptionParser.new do |opts|
        opts.banner = 'See full documentation at http://capistranorb.com/.'
        opts.separator ''
        opts.separator 'Install capistrano in a project:'
        opts.separator '    bundle exec cap install [STAGES=qa,staging,production,...]'
        opts.separator ''
        opts.separator 'Show available tasks:'
        opts.separator '    bundle exec cap -T'
        opts.separator ''
        opts.separator 'Invoke (or simulate invoking) a task:'
        opts.separator '    bundle exec cap [--dry-run] STAGE TASK'
        opts.separator ''
        opts.separator 'Advanced options:'
    
        def is_question?(key)
      value = fetch_for(key, nil)
      !value.nil? && value.is_a?(Question)
    end
    
    MESSAGE
      end
    end
  end
end

    
          def role_properties_for(rolenames)
        roles = rolenames.to_set
        rps = Set.new unless block_given?
        roles_for(rolenames).each do |host|
          host.roles.intersection(roles).each do |role|
            [host.properties.fetch(role)].flatten(1).each do |props|
              if block_given?
                yield host, role, props
              else
                rps << (props || {}).merge(role: role, hostname: host.hostname)
              end
            end
          end
        end
        block_given? ? nil : rps
      end
    
          private
    
    if RUBY_ENGINE == 'ruby'
  gem 'less', '~> 2.0'
  gem 'mini_racer'
  gem 'redcarpet'
  gem 'wlang', '>= 2.0.1'
  gem 'bluecloth'
  gem 'rdiscount'
  gem 'RedCloth'
  gem 'activesupport', '~> 5.1.6'
  gem 'puma'
  gem 'yajl-ruby'
  gem 'nokogiri'
  gem 'thin'
  gem 'slim', '~> 2.0'
  gem 'coffee-script', '>= 2.0'
  gem 'rdoc'
  gem 'kramdown'
  gem 'maruku'
  gem 'creole'
  gem 'wikicloth'
  gem 'markaby'
  gem 'radius'
  gem 'asciidoctor'
  gem 'liquid'
  gem 'stylus'
  gem 'rabl'
  gem 'builder'
  gem 'erubis'
  gem 'haml', '>= 3.0'
  gem 'sass'
  gem 'reel-rack'
  gem 'celluloid', '~> 0.16.0'
  gem 'simplecov', require: false
end
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
      File.open('rack-protection.gemspec', 'w') { |f| f << content }
end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   XSS
    # Supported browsers:: all
    # More infos::         http://en.wikipedia.org/wiki/Cross-site_scripting
    #
    # Automatically escapes Rack::Request#params so they can be embedded in HTML
    # or JavaScript without any further issues. Calls +html_safe+ on the escaped
    # strings if defined, to avoid double-escaping in Rails.
    #
    # Options:
    # escape:: What escaping modes to use, should be Symbol or Array of Symbols.
    #          Available: :html (default), :javascript, :url
    class EscapedParams < Base
      extend Rack::Utils