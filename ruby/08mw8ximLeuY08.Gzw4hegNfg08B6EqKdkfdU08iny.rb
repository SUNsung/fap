
        
              if options[:roles].is_a?(Symbol)
        options[:roles] = [options[:roles]]
      end
    
      list = rss_url && !rss_url.empty? ? blogs : unavailable
  list.push(Struct::Blog.new(name, web_url, rss_url))
end
    
        # Validates that {#boundary} is {#valid_ip_or_range? a valid IP address or
    # IP address range}. Due to this not being tested before it was moved here
    # from Mdm, the default workspace does not validate. We always validate boundaries
    # and a workspace may have a blank default boundary.
    #
    # @return [void]
    def boundary_must_be_ip_range
      unless boundary.blank?
        begin
          boundaries = Shellwords.split(boundary)
        rescue ArgumentError
          boundaries = []
        end
    
    all_environments = [
    :development,
    :production,
    :test
]
    
    class SnifferFTP < BaseProtocolParser
    
    $:.unshift(File.join(File.dirname(__FILE__), '..', '..', '..', 'lib'))
    
    		elsif line =~ /\w+:\t/
			block_do(line)
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # @see \{MediaQuery#to\_a}
    def to_a
      res = []
      res += modifier
      res << ' ' unless modifier.empty?
      res += type
      res << ' and ' unless type.empty? || expressions.empty?
      res += Sass::Util.intersperse(expressions, ' and ').flatten
      res
    end
    
        # @return [Boolean] Whether the original format of the interpolation was
    #   plain text, not an interpolation. This is used when converting back to
    #   SassScript.
    attr_reader :originally_text
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      %w(POST PUT DELETE).each do |method|
    it 'denies #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).not_to be_ok
    end
    
      it 'should allow changing the protection mode' do
    # I have no clue what other modes are available
    mock_app do
      use Rack::Protection::XSSHeader, :xss_mode => :foo
      run DummyApp
    end
    
      # Run specs in random order to surface order dependencies. If you find an
  # order dependency and want to debug it, you can fix the order by providing
  # the seed, which is printed after each run.
  #     --seed 1234
  config.order = :random
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            MULTIPLE_LEFT_HAND_SIDE_TYPE = :mlhs
    
            def immutable_literal?(node)
          return true if node.immutable_literal?