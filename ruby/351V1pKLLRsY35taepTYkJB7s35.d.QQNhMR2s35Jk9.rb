
        
                def tag_options(options, escape = true)
          return if options.blank?
          output = ''.dup
          sep    = ' '
          options.each_pair do |key, value|
            if TAG_PREFIXES.include?(key) && value.is_a?(Hash)
              value.each_pair do |k, v|
                next if v.nil?
                output << sep
                output << prefix_tag_option(key, k, v, escape)
              end
            elsif BOOLEAN_ATTRIBUTES.include?(key)
              if value
                output << sep
                output << boolean_tag_option(key)
              end
            elsif !value.nil?
              output << sep
              output << tag_option(key, value, escape)
            end
          end
          output unless output.empty?
        end
    
            def test_encoded_password
          password = 'am@z1ng_p@ssw0rd#!'
          encoded_password = URI.encode_www_form_component(password)
          spec = resolve 'abstract://foo:#{encoded_password}@localhost/bar'
          assert_equal password, spec['password']
        end
    
              # Returns fully resolved connection, accepts hash, string or symbol.
          # Always returns a hash.
          #
          # == Examples
          #
          # Symbol representing current environment.
          #
          #   Resolver.new('production' => {}).resolve_connection(:production)
          #   # => {}
          #
          # One layer deep hash of connection values.
          #
          #   Resolver.new({}).resolve_connection('adapter' => 'sqlite3')
          #   # => { 'adapter' => 'sqlite3' }
          #
          # Connection URL.
          #
          #   Resolver.new({}).resolve_connection('postgresql://localhost/foo')
          #   # => { 'host' => 'localhost', 'database' => 'foo', 'adapter' => 'postgresql' }
          #
          def resolve_connection(spec)
            case spec
            when Symbol
              resolve_symbol_connection spec
            when String
              resolve_url_connection spec
            when Hash
              resolve_hash_connection spec
            end
          end
    
        response = ActionDispatch::TestResponse.create(200, { 'Content-Type' => 'application/json' }, '{ 'foo': 'fighters' }')
    assert_equal({ 'foo' => 'fighters' }, response.parsed_body)
  end
    
        # fun/games_helper.rb
    assert_includes methods, :stratego
    
      test 'authentication request with badly formatted header' do
    @request.env['HTTP_AUTHORIZATION'] = 'Token token$'lifo''
    get :index
    
      class ExclaimerMiddleware
    def initialize(app)
      @app = app
    end
    
        private
      # 'Deserialize' the mailer class name by hand in case another argument
      # (like a Global ID reference) raised DeserializationError.
      def mailer_class
        if mailer = Array(@serialized_arguments).first || Array(arguments).first
          mailer.constantize
        end
      end
    
          text.split.each do |word|
        if sentences.first.present? && (sentences.last + [word]).join(' ').length > len
          sentences << [word]
        else
          sentences.last << word
        end
      end
    
            in_root do
          if behavior == :invoke && !File.exist?(application_mailer_file_name)
            template 'application_mailer.rb', application_mailer_file_name
          end
        end
      end
    
    class ActiveSupport::TestCase
  include ActiveSupport::Testing::MethodCallAssertions
    
      it 'allows for underscores, even in the decimal side' do
    '1_234_567.890_1'.to_f.should == 1_234_567.890_1
  end
    
      it 'returns a Fixnum for long strings with trailing spaces' do
    '0                             '.to_i.should == 0
    '0                             '.to_i.should be_an_instance_of(Fixnum)
    
          str.tr_s('e'.taint, 'a').tainted?.should == false
      str.tr_s('e', 'a'.taint).tainted?.should == false
    end
  end
    
      it 'accepts c1-c2 notation to denote ranges of characters' do
    'hello'.tr('a-y', 'b-z').should == 'ifmmp'
    '123456789'.tr('2-5','abcdefg').should == '1abcd6789'
    'hello ^-^'.tr('e-', '__').should == 'h_llo ^_^'
    'hello ^-^'.tr('---', '_').should == 'hello ^_^'
  end
    
      it 'sends #to_str to the argument and returns the result if it's a kind of String' do
    x = StringSpecs::MyString.new
    obj = mock('to_str')
    obj.should_receive(:to_str).and_return(x)
    String.try_convert(obj).should equal(x)
  end
    
      it 'raises an ArgumentError if the count exceeds the size of the String' do
    lambda { '\x01\x02\x03\x04'.unpack('C2@5C') }.should raise_error(ArgumentError)
  end
end

    
          # Prints a title in blue with surrounding newlines.
      def title(text)
        # Use $stdout directly to bypass the indentation that our `puts` does.
        $stdout.puts(color.colorize('\n#{text}\n', :blue))
      end
    
            on roles(target_roles) do
          unless test '[ -f #{file.to_s.shellescape} ]'
            info 'Uploading #{prerequisite_file} to #{file}'
            upload! File.open(prerequisite_file), file
          end
        end
      end
    end
    
      desc 'Finished'
  task :finished do
  end
    
      def command_line(*options)
    options.each { |opt| ARGV << opt }
    subject.define_singleton_method(:exit) do |*_args|
      throw(:system_exit, :exit)
    end
    subject.run
    subject.options
  end
    
            def find_order
          @order = Spree::Order.find_by!(number: order_id)
        end
    
            def destroy
          authorize! :destroy, stock_location
          stock_location.destroy
          respond_with(stock_location, status: 204)
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
            def autocorrect(node)
          lambda do |corrector|
            each_unnecessary_space_match(node) do |range|
              corrector.replace(range, ' ')
            end
          end
        end
    
            def argument_positions(arguments)
          optarg_positions = []
          arg_positions = []