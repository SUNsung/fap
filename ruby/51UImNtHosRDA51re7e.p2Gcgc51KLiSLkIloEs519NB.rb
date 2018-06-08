
        
            brew cask install mactex
    EOS
  when 'pip' then <<-EOS.undent
    Homebrew provides pip via: `brew install python`. However you will then
    have two Pythons installed on your Mac, so alternatively you can install
    pip via the instructions at:
    
          return true if prune == 'all'
    
      def core_tap_last_commit
    CoreTap.instance.git_last_commit || 'never'
  end
    
          puts_columns Array(result)
    else
      query = ARGV.first
      rx = query_regexp(query)
      local_results = search_formulae(rx)
      puts_columns(local_results)
      tap_results = search_taps(rx)
      puts_columns(tap_results)
    
        def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
      def revoke_moderation!
    set_permission('moderator', false)
  end
    
        options[:container] = ->(filter) {
      filter.current_url.path.start_with?('/getting-started') ? '#main' : '#content'
    }
    options[:title] = false
    options[:root_title] = 'Elixir'
    
        def process_response?(response)
      !(response.body =~ REDIRECT_RGX || response.body =~ NOT_FOUND_RGX || response.body.blank?)
    end
  end
end

    
        version '5' do
      self.release = '5.0.7'
      self.base_url = 'http://sinonjs.org/releases/v#{release}/'
    end
    
        version do
      self.release = '4.8.3'
      self.base_url = 'https://webpack.js.org/'
      self.root_path = 'guides/'
      self.initial_paths = %w(
        concepts/
        guides/
        api/
        configuration/
        loaders/
        plugins/
      )
      self.links = {
        home: 'https://webpack.js.org/',
        code: 'https://github.com/webpack/webpack'
      }
    
        def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
        attr_accessor :name, :type, :path
    
      module DSL
    def env(*settings)
      @env ||= BuildEnvironment.new
      @env.merge(settings)
    end
  end
end
    
      %w(GET HEAD POST PUT DELETE).each do |method|
    it 'accepts #{method} requests when allow_if is true' do
      mock_app do
        use Rack::Protection::HttpOrigin, :allow_if => lambda{|env| env.has_key?('HTTP_ORIGIN') }
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://any.domain.com')).to be_ok
    end
  end
    
        it 'should be able to deal with PATH_INFO = nil (fcgi?)' do
      app = Rack::Protection::PathTraversal.new(proc { 42 })
      expect(app.call({})).to eq(42)
    end
  end
    
      it 'should not interfere with normal head requests' do
    expect(head('/')).to be_ok
  end