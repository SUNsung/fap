
        
            it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
              # Already exists
          expect(weather_agent_diff.agent).to eq(agents(:bob_weather_agent))
          valid_parsed_weather_agent_data.each do |key, value|
            next if key == :type
            expect(weather_agent_diff.send(key).current).to eq(agents(:bob_weather_agent).send(key))
          end
    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      it 'converts values to Float' do
    expect(location.lat).to be_a Float
    expect(location.lat).to eq 2.0
    expect(location.lng).to be_a Float
    expect(location.lng).to eq 3.0
    expect(location.radius).to be_a Float
    expect(location.radius).to eq 300.0
    expect(location.speed).to be_a Float
    expect(location.speed).to eq 2.0
    expect(location.course).to be_a Float
    expect(location.course).to eq 30.0
  end
    
        it 'requires a valid log level' do
      @log.level = nil
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        ActiveSupport.on_load(:action_view) do
      include scope::UrlHelpers
    end
  end
    
            if options[:bypass]
          ActiveSupport::Deprecation.warn(<<-DEPRECATION.strip_heredoc, caller)
          [Devise] bypass option is deprecated and it will be removed in future version of Devise.
          Please use bypass_sign_in method instead.
          Example:
    
          protected
    
                if class_mod.respond_to?(:available_configs)
              available_configs = class_mod.available_configs
              available_configs.each do |config|
                next unless options.key?(config)
                send(:'#{config}=', options.delete(config))
              end
            end
          end
    
          def run
        UI.puts report
      end
    
        file package(gem, '.tar.gz') => ['pkg/'] do |f|
      sh <<-SH
        git archive \
          --prefix=#{gem}-#{source_version}/ \
          --format=tar \
          HEAD -- #{directory} | gzip > #{f.name}
      SH
    end
  end
    
    desc 'generate gemspec'
task 'rack-protection.gemspec' do
  require 'rack/protection/version'
  content = File.binread 'rack-protection.gemspec'
    
          def warn(env, message)
        return unless options[:logging]
        l = options[:logger] || env['rack.logger'] || ::Logger.new(env['rack.errors'])
        l.warn(message)
      end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          def base_url
        @base_url
      end
    
          def content
        content_without_page_header(@content)
      end
    
        get page
    expected = '<h2><a class=\'anchor\' (href|id)=\'(#)?#{text}\' (href|id)=\'(#)?#{text}\'><i class=\'fa fa-link\'></i></a>#{text}</h2>'
    actual   = nfd(last_response.body)
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
      teardown do
    FileUtils.rm_rf(@path)
  end