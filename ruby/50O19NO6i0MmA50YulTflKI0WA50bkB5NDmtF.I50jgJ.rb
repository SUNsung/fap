
        
            def order_top_with_pinned_category_for(score)
      # display pinned topics first
      -'CASE WHEN (COALESCE(topics.pinned_at, '#{lowest_date}') > COALESCE(tu.cleared_pinned_at, '#{lowest_date}')) THEN 0 ELSE 1 END,
       top_topics.#{score} DESC,
       topics.bumped_at DESC'
    end
    
      def create
    raise Discourse::NotFound unless report_collection_enabled?
    
          script_srcs = parse(builder.build)['script-src']
    
        def normalize(directive)
      directive.to_s.gsub('-', '_').to_sym
    end
    
        def report_uri
      '#{base_url}/csp_reports'
    end
  end
end

    
        def build_theme_extension(raw)
      {}.tap do |extension|
        raw.split('|').each do |entry|
          directive, source = entry.split(':', 2).map(&:strip)
    
      it 'can be extended by plugins' do
    plugin = Class.new(Plugin::Instance) do
      attr_accessor :enabled
      def enabled?
        @enabled
      end
    end.new(nil, '#{Rails.root}/spec/fixtures/plugins/csp_extension/plugin.rb')
    
      def self.last_seen_key(id)
    # frozen
    -'user-last-seen:#{id}'
  end
    
        # possible we have an api call, impersonate
    if api_key
      current_user = lookup_api_user(api_key, request)
      raise Discourse::InvalidAccess.new(I18n.t('invalid_api_credentials'), nil, custom_message: 'invalid_api_credentials') unless current_user
      raise Discourse::InvalidAccess if current_user.suspended? || !current_user.active
      @env[API_KEY_ENV] = true
      rate_limit_admin_api_requests(api_key)
    end
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          def show_revert
        !@message
      end
    
          # return path set in app.rb not @page.path
      def path
        @path
      end
    
          def string_to_code string
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
    MiniTest::Reporters.use!
    
          def call(env)
        @mg.call(env)
      end
    end
    
    # Rack::Handler does not work with Ctrl + C. Use Rack::Server instead.
    Rack::Server.new(:app => MapGollum.new(base_path), :Port => options[:port], :Host => options[:bind]).start
  end
end

    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
      s.authors  = ['Tom Preston-Werner', 'Rick Olson']
  s.email    = 'tom@github.com'
  s.homepage = 'http://github.com/gollum/gollum'
    
        context 'active sessions' do
      before do
        cmd = '#{project.tmux_command} ls 2> /dev/null'
        resp = ''\
          'foo: 1 window (created Sun May 25 10:12:00 1986) [0x0] (detached)\n'\
          'bar: 1 window (created Sat Sept 01 00:00:00 1990) [0x0] (detached)'
        call_tmux_ls = receive(:`).with(cmd).at_least(:once).and_return(resp)
    
        context '$EDITOR is not set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { nil }
      end
    
          Kernel.system('$EDITOR #{new_config_path}')
    end