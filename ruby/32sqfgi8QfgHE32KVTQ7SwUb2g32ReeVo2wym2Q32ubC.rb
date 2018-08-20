
        
          # True if a {Formula} is being built without a specific option.
  # <pre>args << '--no-spam-plz' if build.without? 'spam'
  def without?(val)
    !with?(val)
  end
    
            begin
          f = Formulary.from_rack(HOMEBREW_CELLAR/name)
        rescue FormulaUnavailableError, TapFormulaAmbiguityError, TapFormulaWithOldnameAmbiguityError
          next
        end
    
        version 'JavaScript' do
      self.base_url = 'https://api.haxe.org/js/'
    end
    
        options[:attribution] = <<-HTML
      &copy; 2010 The Rust Project Developers<br>
      Licensed under the Apache License, Version 2.0 or the MIT license, at your option.
    HTML
    
        def initialize(name = nil, path = nil, type = nil)
      self.name = name
      self.path = path
      self.type = type
    
      it 'considers a zero integer in expression result as true' do
    if 0
      123
    else
      456
    end.should == 123
  end
    
      def test_input_line_number_range
    bug12947 = '[ruby-core:78162] [Bug #12947]'
    ary = b1 = b2 = nil
    EnvUtil.suppress_warning do
      b1 = eval('proc {|i| i if 2..4}')
      b2 = eval('proc {|i| if 2..4; i; end}')
    end
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b1.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
    IO.pipe {|r, w|
      th = Thread.start {(1..5).each {|i| w.puts i};w.close}
      ary = r.map {|i| b2.call(i.chomp)}
      th.join
    }
    assert_equal([nil, '2', '3', '4', nil], ary, bug12947)
  end
end

    
      it 'adds the directory after directories added by -I within RUBYOPT' do
    rubyopt_dir = tmp('rubyopt_include')
    rubylib_dir = tmp('rubylib_include')
    ENV['RUBYLIB'] = @pre + rubylib_dir
    paths = ruby_exe('puts $LOAD_PATH', env: { 'RUBYOPT' => '-I#{rubyopt_dir}' }).lines.map(&:chomp)
    paths.should include(rubyopt_dir)
    paths.should include(rubylib_dir)
    paths.index(rubyopt_dir).should < paths.index(rubylib_dir)
  end
    
      end
    
      def test_ri
    @cmd.handle_options %w[--no-ri]
    
      def create_hash(model, opts={})
    opts[:range] ||= 1.day
    plural = model.to_s.underscore.pluralize
    eval(<<DATA
      @#{plural} = {
        :day_before => #{model}.where(:created_at => ((Time.now.midnight - #{opts[:range]*2})..Time.now.midnight - #{opts[:range]})).count,
        :yesterday => #{model}.where(:created_at => ((Time.now.midnight - #{opts[:range]})..Time.now.midnight)).count
      }
      @#{plural}[:change] = percent_change(@#{plural}[:yesterday], @#{plural}[:day_before])
DATA
    )
  end
    
          def create
        req = Rack::Request.new(request.env)
        if req['client_assertion_type'] == 'urn:ietf:params:oauth:client-assertion-type:jwt-bearer'
          handle_jwt_bearer(req)
        end
        self.status, headers, self.response_body = Api::OpenidConnect::TokenEndpoint.new.call(request.env)
        headers.each {|name, value| response.headers[name] = value }
        nil
      end