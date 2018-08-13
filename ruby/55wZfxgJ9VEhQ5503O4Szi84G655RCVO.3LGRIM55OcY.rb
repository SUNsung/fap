
        
        Applications attributed to Apple are excluded from the output.
    
              # Prefer HTTP/S when possible over FTP protocol due to possible firewalls.
          mirror_service_pattern = %r{^ftp://ftp\.mirrorservice\.org}
          audit_urls(urls, mirror_service_pattern) do |_, url|
            problem 'Please use https:// for #{url}'
          end
    
      def xcode_app_path
    File.expand_path('../..', developer_prefix)
  end
    
            def validate!
          super
          if @pod_name.nil? && !@wipe_all
            # Security measure, to avoid removing the pod cache too agressively by mistake
            help! 'You should either specify a pod name or use the --all flag'
          end
        end
    
          def self.options
        [
          ['--update', 'Run `pod repo update` before listing'],
          ['--stats',  'Show additional stats (like GitHub watchers and forks)'],
        ].concat(super)
      end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'adds the correct Set-Cookie header' do
      get '/some/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
    
        it 'should be able to deal with PATH_INFO = nil (fcgi?)' do
      app = Rack::Protection::PathTraversal.new(proc { 42 })
      expect(app.call({})).to eq(42)
    end
  end
    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end

    
    ERR
      end
    end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
            def show
          respond_with(stock_location)
        end
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
    module Paperclip
  module Validators
    extend ActiveSupport::Concern