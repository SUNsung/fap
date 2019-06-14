
        
        SUITE.each do |key, text|
  Benchmark.ips do |x|
    x.report('regex-check   - #{key}') { check_with_regex(text) }
    x.report('builtin-check - #{key}') { check_with_builtin(text) }
    x.compare!
  end
end
# ------------------------------------------------------------------------
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    if pathutil_relative == native_relative
  Benchmark.ips do |x|
    x.report('pathutil') { pathutil_relative }
    x.report('native')   { native_relative }
    x.compare!
  end
else
  print 'PATHUTIL: '
  puts pathutil_relative
  print 'NATIVE:   '
  puts native_relative
end

    
                  EM.start_server(
                opts['host'],
                opts['livereload_port'],
                HttpAwareConnection,
                opts
              ) do |ws|
                handle_websockets_event(ws)
              end
    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
      def self.redis_key(req_type, time = Time.now.utc)
    'app_req_#{req_type}#{time.strftime('%Y%m%d')}'
  end
    
        it 'rejects invalid directives and ones that are not allowed to be extended' do
      builder << {
        invalid_src: ['invalid'],
      }
    
        result
  end
    
              extension[directive] ||= []
          extension[directive] << source
        end
      end
    end
  end
end

    
          global_setting(:s3_cdn_url, 'https://s3-cdn.com')
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
      # Configure static asset server for tests with Cache-Control for performance.
  if config.respond_to?(:serve_static_files)
    # rails >= 4.2
    config.serve_static_files = true
  elsif config.respond_to?(:serve_static_assets)
    # rails < 4.2
    config.serve_static_assets = true
  end
  config.static_cache_control = 'public, max-age=3600'
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
          @left_diff_line_number = nil
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    context 'Frontend Unicode support' do
  include Rack::Test::Methods
    
      if cfg = options[:config]
    # If the path begins with a '/' it will be considered an absolute path,
    # otherwise it will be relative to the CWD
    cfg = File.join(Dir.getwd, cfg) unless cfg.slice(0) == File::SEPARATOR
    require cfg
  end
    
    # external
require 'github/markup'
require 'sanitize'