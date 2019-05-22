
        
                  def render_component(builder)
            builder.radio_button + builder.label
          end
      end
    end
  end
end

    
          id = req_id(date, req_type)
      where(id: id).update_all(['count = count + ?', val])
    end
  rescue Redis::CommandError => e
    raise unless e.message =~ /READONLY/
    nil
  end
    
        def script_assets(base = base_url, s3_cdn = GlobalSetting.s3_cdn_url, cdn = GlobalSetting.cdn_url)
      SCRIPT_ASSET_DIRECTORIES.map do |dir, can_use_s3_cdn, can_use_cdn|
        if can_use_s3_cdn && s3_cdn
          s3_cdn + dir
        elsif can_use_cdn && cdn
          cdn + dir
        else
          base + dir
        end
      end
    end
    
      def build(theme_ids)
    builder = Builder.new
    
        it 'whitelists CDN assets when integrated' do
      set_cdn_url('https://cdn.com')
    
        result
  ensure
    if (limiters = env['DISCOURSE_RATE_LIMITERS']) && env['DISCOURSE_IS_ASSET_PATH']
      limiters.each(&:rollback!)
      env['DISCOURSE_ASSET_RATE_LIMITERS'].each do |limiter|
        begin
          limiter.performed!
        rescue RateLimiter::LimitExceeded
          # skip
        end
      end
    end
    log_request_info(env, result, info) unless !log_request || env['discourse.request_tracker.skip']
  end
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
    Rake::TestTask.new(:'test:core') do |t|
  core_tests = %w[base delegator encoding extensions filter
     helpers mapped_error middleware radius rdoc
     readme request response result route_added_hook
     routing server settings sinatra static templates]
  t.test_files = core_tests.map {|n| 'test/#{n}_test.rb'}
  t.ruby_opts = ['-r rubygems'] if defined? Gem
  t.ruby_opts << '-I.'
  t.warning = true
end
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
          def self.default_options(options)
        define_method(:default_options) { super().merge(options) }
      end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
      it 'should set the Content Security Policy' do
    expect(
      get('/', {}, 'wants' => 'text/html').headers['Content-Security-Policy']
    ).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end