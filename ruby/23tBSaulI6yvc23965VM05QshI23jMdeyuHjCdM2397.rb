
        
          def test_redirect_to_url_with_network_path_reference
    get :redirect_to_url_with_network_path_reference
    assert_response :redirect
    assert_equal '//www.rubyonrails.org/', redirect_to_url
  end
    
            # Require the adapter itself and give useful feedback about
        #   1. Missing adapter gems and
        #   2. Adapter gems' missing dependencies.
        path_to_adapter = 'action_cable/subscription_adapter/#{adapter}'
        begin
          require path_to_adapter
        rescue LoadError => e
          # We couldn't require the adapter itself. Raise an exception that
          # points out config typos and missing gems.
          if e.path == path_to_adapter
            # We can assume that a non-builtin adapter was specified, so it's
            # either misspelled or missing from Gemfile.
            raise e.class, 'Could not load the '#{adapter}' Action Cable pubsub adapter. Ensure that the adapter is spelled correctly in config/cable.yml and that you've added the necessary adapter gem to your Gemfile.', e.backtrace
    
            def test_url_from_environment
          spec = resolve :production, 'production' => 'abstract://foo?encoding=utf8'
          assert_equal({
            'adapter'  =>  'abstract',
            'host'     =>  'foo',
            'encoding' => 'utf8',
            'name'     => 'production' }, spec)
        end
    
        # Reset all attributes. Should be called before and after actions, when used as a per-request singleton.
    def reset
      run_callbacks :reset do
        self.attributes = {}
      end
    end
    
      def call_controller(klass, action)
    klass.action(action).call(@request.env)
  end
    
    module Rails
  def self.root
    File.expand_path('..', __dir__)
  end
end
    
      class FeatureTopicUsers < Jobs::Base
    
        user.reload
    assert user.confirmed?
    assert_equal original_token, user.confirmation_token
  end
    
      def test_returns_success
    Warden.test_mode!
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified. Requires --from.') do
        @options[:input] = $stdin
      end
    
        # Merges this query with another. The returned query queries for
    # the intersection between the two inputs.
    #
    # Both queries should be resolved.
    #
    # @param other [Query]
    # @return [Query?] The merged query, or nil if there is no intersection.
    def merge(other)
      m1, t1 = resolved_modifier.downcase, resolved_type.downcase
      m2, t2 = other.resolved_modifier.downcase, other.resolved_type.downcase
      t1 = t2 if t1.empty?
      t2 = t1 if t2.empty?
      if (m1 == 'not') ^ (m2 == 'not')
        return if t1 == t2
        type = m1 == 'not' ? t2 : t1
        mod = m1 == 'not' ? m2 : m1
      elsif m1 == 'not' && m2 == 'not'
        # CSS has no way of representing 'neither screen nor print'
        return unless t1 == t2
        type = t1
        mod = 'not'
      elsif t1 != t2
        return
      else # t1 == t2, neither m1 nor m2 are 'not'
        type = t1
        mod = m1.empty? ? m2 : m1
      end
      Query.new([mod], [type], other.expressions + expressions)
    end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
            Readline::HISTORY << text
        parse_input(environment, text)
      end
    end
    
          expect('.margin-all').to have_rule(rule)
    end
  end
    
          expect('.padding-explicit').to have_rule(rule)
    end
  end
    
          expect('.prefix--moz-ms').to have_ruleset(rule)
    end
  end
end
