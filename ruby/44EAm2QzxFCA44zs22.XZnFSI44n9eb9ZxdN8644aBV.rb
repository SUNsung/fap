
        
                context 'when command is archive' do
          it 'adds one framework' do
            result = Fastlane::FastFile.new.parse('lane :test do
                carthage(command: '#{command}', frameworks: ['myframework'])
              end').runner.execute(:test)
            expect(result).to eq('carthage archive myframework')
          end
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
            a_split <=> b_split
      else
        a.casecmp(b)
      end
    end
  end
end

    
    module Docs
  class Filter < ::HTML::Pipeline::Filter
    def css(*args)
      doc.css(*args)
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
        def initialize(content)
      @content = content
      @html = document? ? parse_as_document : parse_as_fragment
    end
    
        def html?
      mime_type.include? 'html'
    end
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          def timeout_in
        self.class.timeout_in
      end
    
      puts '* [Sinatra](#sinatra)'
  title = Regexp.new('(?<=\* )(.*)') # so Ruby 1.8 doesn't complain
  File.binread(a.readme).scan(/^##.*/) do |line|
    puts line.gsub(/#(?=#)/, '    ').gsub('#', '*').gsub(title) { '[#{$1}](##{link($1)})' }
  end
end
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
          env['rack.errors'] = errors
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def permitted_attributes_for_create
    %i[body_markdown commentable_id commentable_type parent_id]
  end
    
      def new
    @broadcast = Broadcast.new
  end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def get_cached_gist(gist, file)
      return nil if @cache_disabled
      cache_file = get_cache_file_for gist, file
      File.read cache_file if File.exist? cache_file
    end
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
        def render(context)
      output = super
      types = {
        '.mp4' => 'type='video/mp4; codecs=\'avc1.42E01E, mp4a.40.2\''',
        '.ogv' => 'type='video/ogg; codecs=theora, vorbis'',
        '.webm' => 'type='video/webm; codecs=vp8, vorbis''
      }
      if @videos.size > 0
        video =  '<video #{sizes} preload='metadata' controls #{poster}>'
        @videos.each do |v|
          video << '<source src='#{v}' #{types[File.extname(v)]}>'
        end
        video += '</video>'
      else
        'Error processing input, expected syntax: {% video url/to/video [url/to/video] [url/to/video] [width height] [url/to/poster] %}'
      end
    end
    
          it 'accepts additional arguments' do
        ARGV.replace(['start', 'foo', 'bar', 'three=four'])
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
end
