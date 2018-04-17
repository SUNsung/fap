  before do
    sign_in user, scope: :user
  end
    
    def process_args
  until ARGV.empty?
    if ARGV.first =~ %r{^-+t(?:est)?$} && ARGV.length > 1
      ARGV.shift
      $opt_test = ARGV.shift
    elsif ARGV.first =~ %r{^-+h(?:elp)?$}
      puts usage
      exit 0
    else
      puts usage
      exit 1
    end
  end
end
    
          # bootstrap requires minimum precision of 8, see https://github.com/twbs/bootstrap-sass/issues/409
      ::Sass::Script::Number.precision = [8, ::Sass::Script::Number.precision].max
    end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
      find_files = ->(path) {
    Find.find(Pathname.new(path).relative_path_from(Pathname.new Dir.pwd).to_s).map do |path|
      path if File.file?(path)
    end.compact
  }
    
      subject { described_class.new(lambda {}) }
    
      context 'with custom session key' do
    it 'denies requests with duplicate session cookies' do
      mock_app do
        use Rack::Protection::CookieTossing, :session_key => '_session'
        run DummyApp
      end
    
            post '/', :file => Rack::Test::UploadedFile.new(temp_file.path), :other => '<bar>'
        expect(body).to eq('_escaped_params_tmp_file\nhello world\n&lt;bar&gt;')
      ensure
        File.unlink(temp_file.path)
      end
    end
  end
end

    
      before(:each) do
    mock_app do
      use Rack::Protection::HttpOrigin
      run DummyApp
    end
  end
    
      it 'allows passing on values in env' do
    klass    = described_class
    changer  = Struct.new(:app) do
      def call(env)
        env['foo.bar'] = 42
        app.call(env)
      end
    end
    detector = Struct.new(:app) do
      def call(env)
        app.call(env)
      end
    end
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN