
        
            alias_method :blank?, :empty?
    
        def version
      context[:version]
    end
    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
            name = name.split(':').first
    
        def show
      authorize @user, :change_email?
    end
    
      def hub_secret
    params['hub.secret']
  end
    
        head 200
  end
    
      before_action :require_user!
    
        def puts(*args)
      STDERR.puts *args unless @silence
    end
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
      def test_symlink_exists(path)
    exists?('L', path)
  end
    
          def question
        if default.nil?
          I18n.t(:question, key: key, scope: :capistrano)
        else
          I18n.t(:question_default, key: key, default_value: default, scope: :capistrano)
        end
      end
    
          def add_host(host, properties={})
        new_host = Server[host]
        new_host.port = properties[:port] if properties.key?(:port)
        # This matching logic must stay in sync with `Server#matches?`.
        key = ServerKey.new(new_host.hostname, new_host.port)
        existing = servers_by_key[key]
        if existing
          existing.user = new_host.user if new_host.user
          existing.with(properties)
        else
          servers_by_key[key] = new_host.with(properties)
        end
      end
    
    module Capistrano
  class Configuration
    # Holds the variables assigned at Capistrano runtime via `set` and retrieved
    # with `fetch`. Does internal bookkeeping to help identify user mistakes
    # like spelling errors or unused variables that may lead to unexpected
    # behavior.
    class Variables
      CAPISTRANO_LOCATION = File.expand_path('../..', __FILE__).freeze
      IGNORED_LOCATIONS = [
        '#{CAPISTRANO_LOCATION}/configuration/variables.rb:',
        '#{CAPISTRANO_LOCATION}/configuration.rb:',
        '#{CAPISTRANO_LOCATION}/dsl/env.rb:',
        '/dsl.rb:',
        '/forwardable.rb:'
      ].freeze
      private_constant :CAPISTRANO_LOCATION, :IGNORED_LOCATIONS