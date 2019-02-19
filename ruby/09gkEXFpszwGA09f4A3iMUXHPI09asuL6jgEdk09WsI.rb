
        
            def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
        describe 'shell escaping' do
      let(:keychain_name) { 'keychain with spaces.keychain' }
      let(:shell_escaped_name) { keychain_name.shellescape }
      let(:name_regex) { Regexp.new(Regexp.escape(shell_escaped_name)) }
    
      it 'raises a TypeError when passed a String' do
    lambda { sleep('2')   }.should raise_error(TypeError)
  end
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:test)
  end
    
          it 'raises TypeError if passed not Integer' do
        -> { warn '', uplevel: '' }.should raise_error(TypeError)
        -> { warn '', uplevel: [] }.should raise_error(TypeError)
        -> { warn '', uplevel: {} }.should raise_error(TypeError)
        -> { warn '', uplevel: Object.new }.should raise_error(TypeError)
      end
    end
  end
end

    
    module Sass
  # This class converts CSS documents into Sass or SCSS templates.
  # It works by parsing the CSS document into a {Sass::Tree} structure,
  # and then applying various transformations to the structure
  # to produce more concise and idiomatic Sass/SCSS.
  #
  # Example usage:
  #
  #     Sass::CSS.new('p { color: blue }').render(:sass) #=> 'p\n  color: blue'
  #     Sass::CSS.new('p { color: blue }').render(:scss) #=> 'p {\n  color: blue; }'
  class CSS
    # @param template [String] The CSS stylesheet.
    #   This stylesheet can be encoded using any encoding
    #   that can be converted to Unicode.
    #   If the stylesheet contains an `@charset` declaration,
    #   that overrides the Ruby encoding
    #   (see {file:SASS_REFERENCE.md#Encodings the encoding documentation})
    # @option options :old [Boolean] (false)
    #     Whether or not to output old property syntax
    #     (`:color blue` as opposed to `color: blue`).
    #     This is only meaningful when generating Sass code,
    #     rather than SCSS.
    # @option options :indent [String] ('  ')
    #     The string to use for indenting each line. Defaults to two spaces.
    def initialize(template, options = {})
      if template.is_a? IO
        template = template.read
      end
    
        # Adds an entry to the exception's Sass backtrace.
    #
    # @param attrs [{Symbol => Object}] The information in the backtrace entry.
    #   See \{#sass\_backtrace}
    def add_backtrace(attrs)
      sass_backtrace << attrs.reject {|_k, v| v.nil?}
    end
    
          if !colon_path?(@args[0]) && probably_dest_dir?(@args[1])
        flag = @options[:update] ? '--update' : '--watch'
        err =
          if !File.exist?(@args[1])
            'doesn't exist'
          elsif @args[1] =~ /\.css$/
            'is a CSS file'
          end
        raise <<MSG if err
File #{@args[1]} #{err}.
    Did you mean: #{@default_syntax} #{flag} #{@args[0]}:#{@args[1]}
MSG
      end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
          def lines
        lines = []
        @diff.diff.split('\n')[2..-1].each_with_index do |line, line_index|
          lines << { :line  => line,
                     :class => line_class(line),
                     :ldln  => left_diff_line_number(0, line),
                     :rdln  => right_diff_line_number(0, line) }
        end if @diff
        lines
      end
    
    def testpath(path)
  File.join(TEST_DIR, path)
end
    
        author = page2.version.author
    assert_equal 'ghi', author.name
    assert_equal 'jkl', author.email
  end
    
        before do
      allow_any_instance_of(Spree::Api::V2::Storefront::CartController).to receive(:spree_current_order).and_return(order)
      patch '/api/v2/storefront/cart/empty', headers: headers_bearer
    end
    
          it 'returns account data with included default billing and shipping addresses' do
        expect(json_response['included']).to    include(have_type('address'))
        expect(json_response['included'][0]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.billing_address).as_json['data'])
        expect(json_response['included'][1]).to eq(Spree::V2::Storefront::AddressSerializer.new(user.shipping_address).as_json['data'])
      end
    end
    
        context 'as a guest user' do
      include_context 'creates guest order with guest token'
    
          it 'returns countries that the current store ships to' do
        get shippable_url
        expect(json_response['data'].size).to eq(to_return.size)
      end
    
            it 'returns proper links data' do
          expect(json_response['links']['self']).to include('/api/v2/storefront/products?page=1&per_page=2')
          expect(json_response['links']['next']).to include('/api/v2/storefront/products?page=2&per_page=2')
          expect(json_response['links']['prev']).to include('/api/v2/storefront/products?page=1&per_page=2')
        end
      end
    
              def resource_finder
            Spree::Api::Dependencies.storefront_completed_order_finder.constantize
          end
    
            quantity = line_item.quantity - unit_count
        return if quantity.zero?
    
      def for_each_gem
    SPREE_GEMS.each do |gem_name|
      yield 'pkg/spree_#{gem_name}-#{version}.gem'
    end
    yield 'pkg/spree-#{version}.gem'
  end
    
              def order_token
            request.headers['X-Spree-Order-Token'] || params[:order_token]
          end
    
        # Default values
    set :sessions, true