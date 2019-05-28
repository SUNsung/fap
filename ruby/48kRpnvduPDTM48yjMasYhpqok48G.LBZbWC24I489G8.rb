
        
          def self.period_types
    @types ||= Enum.new(all: 1,
                        yearly: 2,
                        monthly: 3,
                        weekly: 4,
                        daily: 5,
                        quarterly: 6)
  end
    
        # if you need to test this and are having ssl issues see:
    #  http://stackoverflow.com/questions/6756460/openssl-error-using-omniauth-specified-ssl-path-but-didnt-work
    # OpenSSL::SSL::VERIFY_PEER = OpenSSL::SSL::VERIFY_NONE if Rails.env.development?
    @omniauth = OmniAuth::Builder.new(app) do
      Discourse.authenticators.each do |authenticator|
        authenticator.register_middleware(self)
      end
    end
    
        # JOIN of topics table based on manipulating draft_key seems imperfect
    builder = DB.build <<~SQL
      SELECT
        d.*, t.title, t.id topic_id, t.archetype,
        t.category_id, t.closed topic_closed, t.archived topic_archived,
        pu.username, pu.name, pu.id user_id, pu.uploaded_avatar_id, pu.username_lower,
        du.username draft_username, NULL as raw, NULL as cooked, NULL as post_number
      FROM drafts d
      LEFT JOIN LATERAL json_extract_path_text (d.data::json, 'postId') postId ON TRUE
      LEFT JOIN posts p ON postId :: BIGINT = p.id
      LEFT JOIN topics t ON
        CASE
            WHEN d.draft_key LIKE '%' || '#{EXISTING_TOPIC}' || '%'
              THEN CAST(replace(d.draft_key, '#{EXISTING_TOPIC}', '') AS INT)
            ELSE 0
        END = t.id
      JOIN users pu on pu.id = COALESCE(p.user_id, t.user_id, d.user_id)
      JOIN users du on du.id = #{user_id}
      /*where*/
      /*order_by*/
      /*offset*/
      /*limit*/
    SQL
    
        private
    
          svg_sprite = 'window.__svg_sprite = #{SvgSprite.bundle(theme_ids).inspect};'
    
          # Reads an integer from the cache, or returns nil if no value was found.
      #
      # See Caching.read for more information.
      def self.read_integer(raw_key, timeout: TIMEOUT)
        value = read(raw_key, timeout: timeout)
    
          def remaining_requests
        octokit.rate_limit.remaining
      end
    
          # Imports all objects in parallel by scheduling a Sidekiq job for every
      # individual object.
      def parallel_import
        waiter = JobWaiter.new
    
        it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
              expect(weather_agent.name).to eq('a weather agent')
          expect(weather_agent.schedule).to eq('5pm')
          expect(weather_agent.keep_events_for).to eq(14.days)
          expect(weather_agent.propagate_immediately).to be_falsey
          expect(weather_agent).to be_disabled
          expect(weather_agent.memory).to be_empty
          expect(weather_agent.options).to eq(weather_agent_options)
    
          context '#run_workers' do
        it 'runs all the workers' do
          mock.instance_of(HuginnScheduler).run!
          mock.instance_of(DelayedJobWorker).run!
          @agent_runner.send(:run_workers)
        end
    
        it 'should work with nested arrays' do
      @agent.options['array'] = ['one', '$.two']
      LiquidMigrator.convert_all_agent_options(@agent)
      expect(@agent.reload.options).to eq({'auth_token' => 'token', 'color' => 'yellow', 'array' => ['one', '{{two}}'], 'notify' => false, 'room_name' => 'test', 'username' => '{{username}}', 'message' => '{{message}}'})
    end
    
      let :reverted_extract do
    old_extract
  end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        end
  end
end

    
          private
    
        def self.xtest(*args)
    end
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
    # assumes x.y.z all digit version
def next_version
  # x.y.z
  v = version.split '.'
  # bump z
  v[-1] = v[-1].to_i + 1
  v.join '.'
end
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
    module Jekyll
    
          unless file.file?
        return 'File #{file} could not be found'
      end
    
      # Used on the blog index to split posts on the <!--more--> marker
  def excerpt(input)
    if input.index(/<!--\s*more\s*-->/i)
      input.split(/<!--\s*more\s*-->/i)[0]
    else
      input
    end
  end