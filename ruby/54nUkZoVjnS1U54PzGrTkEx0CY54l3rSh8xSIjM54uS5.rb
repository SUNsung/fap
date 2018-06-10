
        
                expect(result).to eq('hg parent --template '{node|short}'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('hg parent --template '{node|short}'')
      end
    
        options[:attribution] = <<-HTML
      &copy; 2009&ndash;2018 Jeremy Ashkenas<br>
      Licensed under the MIT License.
    HTML
    
        options[:attribution] = <<-HTML
      &copy; 2010 The Rust Project Developers<br>
      Licensed under the Apache License, Version 2.0 or the MIT license, at your option.
    HTML
    
    module Docs
  class Tensorflow < UrlScraper
    self.name = 'TensorFlow'
    self.type = 'tensorflow'
    self.release = '1.8'
    self.root_path = 'index.html'
    self.links = {
      home: 'https://www.tensorflow.org/',
      code: 'https://github.com/tensorflow/tensorflow'
    }
    
        def relative_path_from(url)
      self.class.parse(url).relative_path_to(self)
    end
  end
end

    
      it 'decodes two doubles for two format characters' do
    '@\x07333333?\xf6ffffff'.unpack(unpack_format(nil, 2)).should == [2.9, 1.4]
  end
    
      it 'raises an ArgumentError if not passed a block' do
    lambda {
      Thread.send(@method)
    }.should raise_error(ArgumentError)
  end
    
        # apply general less to scss conversion
    def convert_to_scss(file)
      # get local mixin names before converting the definitions
      mixins = shared_mixins + read_mixins(file)
      file   = replace_vars(file)
      file   = replace_mixin_definitions(file)
      file   = replace_mixins(file, mixins)
      file   = extract_mixins_from_selectors(file, CLASSES_TO_MIXINS.inject({}) { |h, cl| h.update('.#{cl}' => cl) })
      file   = replace_spin(file)
      file   = replace_fadein(file)
      file   = replace_image_urls(file)
      file   = replace_escaping(file)
      file   = convert_less_ampersand(file)
      file   = deinterpolate_vararg_mixins(file)
      file   = replace_calculation_semantics(file)
      file   = replace_file_imports(file)
      file   = wrap_at_groups_with_at_root(file)
      file
    end
    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
          default_options :escape => :html,
        :escaper => defined?(EscapeUtils) ? EscapeUtils : self
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      it 'accepts requests with a changing Version header'do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.0'
    get '/', {}, 'rack.session' => session, 'HTTP_VERSION' => '1.1'
    expect(session[:foo]).to eq(:bar)
  end
end

    
      it 'should not override the header if already set X-Content-Type-Options' do
    mock_app with_headers('X-Content-Type-Options' => 'sniff')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Content-Type-Options']).to eq('sniff')
  end
end

    
      # These two settings work together to allow you to limit a spec run
  # to individual examples or groups you care about by tagging them with
  # `:focus` metadata. When nothing is tagged with `:focus`, all examples
  # get run.
  config.filter_run :focus
  config.run_all_when_everything_filtered = true