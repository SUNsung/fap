
        
                      accept = if current_value.respond_to?(:call)
                current_value.call(item)
              else
                Array(current_value).map(&:to_s).include?(value.to_s)
              end
    
        def message
      @string.force_encoding(Encoding::ASCII_8BIT)
      'Your template was not saved as valid #{@encoding}. Please ' \
      'either specify #{@encoding} as the encoding for your template ' \
      'in your text editor, or mark the template with its ' \
      'encoding by inserting the following as the first line ' \
      'of the template:\n\n# encoding: <name of correct encoding>.\n\n' \
      'The source of your template was:\n\n#{@string}'
    end
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

    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
          #
    
    module Jekyll
  module Drops
    class UnifiedPayloadDrop < Drop
      mutable true
    
    
    
          NO_ARG_DIRECTIVES = %i(block_all_mixed_content disown_opener
                             upgrade_insecure_requests).freeze
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
      it 'should not set the Content Security Policy for other content types' do
    headers = get('/', {}, 'wants' => 'text/foo').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to be_nil
  end
    
        def match(request_method, path)
      case matcher
      when String
        {} if path == matcher
      else
        if path_match = path.match(matcher)
          Hash[path_match.names.map(&:to_sym).zip(path_match.captures)]
        end
      end
    end
  end
end

    
        # Returns the #to_param of the instance.
    def param attachment, style_name
      attachment.instance.to_param
    end