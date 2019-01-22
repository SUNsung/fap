
        
        def linkify_prs(markdown)
  markdown.gsub(%r!(?<\!&)#(\d+)!) do |word|
    '[#{word}]({{ site.repository }}/issues/#{word.delete('#')})'
  end
end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
    def global_require
  JSON.pretty_generate(DATA)
end
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
            def disconnect(websocket)
          @websockets.delete(websocket)
        end
    
        def arg_is_present?(args, deprecated_argument, message)
      deprecation_message(message) if args.include?(deprecated_argument)
    end
    
        def rescue_connection_failed_error(e)
      if e.message.include?('Connection reset by peer - SSL_connect')
        handle_tls_error!(e)
      else
        handle_unknown_error!(e)
      end
    end
    
          context 'when specify list of files to process' do
        it 'adds use script input files option and environment variables' do
          result = Fastlane::FastFile.new.parse('lane :test do
            swiftlint(
              files: ['AppDelegate.swift', 'path/to/project/src/Model.swift', 'path/to/project/test/Test.swift']
            )
          end').runner.execute(:test)
    
              it 'cuts fraction part to have only 6 digits at all' do
            format('%#{f}', 1.1234567).should == '1.12346'
            format('%#{f}', 12.1234567).should == '12.1235'
            format('%#{f}', 123.1234567).should == '123.123'
            format('%#{f}', 1234.1234567).should == '1234.12'
            format('%#{f}', 12345.1234567).should == '12345.1'
            format('%#{f}', 123456.1234567).should == '123456'
          end
        end
    
        it 'raises Errno::ENOENT when `exception: true` is given and the specified command does not exist' do
      lambda { @object.system('feature_14386', exception: true) }.should raise_error(Errno::ENOENT)
    end
  end
    
      it 'raises #{frozen_error_class} on an untainted, frozen object' do
    o = Object.new.freeze
    lambda { o.taint }.should raise_error(frozen_error_class)
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
        # /RAND/../RAND../
    if self.junk_directories
      str.gsub!(/\//) {
        dirs = ''
        (rand(5)+5).times {
          dirs << '/' + Rex::Text.rand_text_alpha(rand(5) + 1) + '/..'
        }
        dirs + '/'
      }
    end
    
        # Default responses to auto content length on
    self.auto_cl = true
    
            # Creates a connection through a Rex socket
        #
        # @return [Rex::Socket::Tcp]
        # @raise [RuntimeError] if the connection can not be created
        def connect
          return connection if connection
    
              # Encodes the msg_type field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_msg_type
            bn = OpenSSL::BN.new(msg_type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
                res = ''
            case etype
            when RC4_HMAC
              res = encrypt_rc4_hmac(data, key, 5)
            else
              raise ::NotImplementedError, 'EncryptedData schema is not supported'
            end
    
              # Encodes the Rex::Proto::Kerberos::Model::Element into an ASN.1 String. This
          # method has been designed to be overridden by subclasses.
          #
          # @raise [NoMethodError]
          def encode
            raise ::NoMethodError, 'Method designed to be overridden'
          end
        end
      end
    end
  end
end
    
              # Decodes the key_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_type(input)
            input.value[0].value.to_i
          end
    
    RSpec::Matchers.define :have_value do |expected|
  match do |actual|
    await_condition { actual.value && actual.value.include?(expected) }
  end
    
          sign_in alice, scope: :user
    end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        it 'should return a dummy value in the json version' do
      FactoryGirl.create(:notification, recipient: alice, target: post)
      get :read_all, format: :json
      expect(response).not_to be_redirect
    end
  end
end

    
        context 'opening brace on separate line from first element' do
      it 'allows closing brace on separate line from last element' do
        expect_no_offenses(construct(true, true))
      end
    
          # Calls the given block for each `pair` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_pair
        return each_child_node(:pair).to_enum unless block_given?
    
          # Custom destructuring method. This is used to normalize the branches
      # for `pair` and `kwsplat` nodes, to add duck typing to `hash` elements.
      #
      # @return [Array<KeywordSplatNode>] the different parts of the `kwsplat`
      def node_parts
        [self, self]
      end
    end
  end
end

    
    module RuboCop
  module AST
    # Common functionality for nodes that are parameterized:
    # `send`, `super`, `zsuper`, `def`, `defs`
    module ParameterizedNode
      # Checks whether this node's arguments are wrapped in parentheses.
      #
      # @return [Boolean] whether this node's arguments are
      #                   wrapped in parentheses
      def parenthesized?
        loc.end && loc.end.is?(')')
      end
    
            def advance
          authorize! :update, @order, order_token
          while @order.next; end
          respond_with(@order, default_template: 'spree/api/v1/orders/show', status: 200)
        end
    
            def show
          @option_type = Spree::OptionType.accessible_by(current_ability, :read).find(params[:id])
          respond_with(@option_type)
        end
    
            def create
          authorize! :create, Property
          @property = Spree::Property.new(property_params)
          if @property.save
            respond_with(@property, status: 201, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end
    
            def new; end
    
            def update
          authorize! :update, user
          if user.update_attributes(user_params)
            respond_with(user, status: 200, default_template: :show)
          else
            invalid_resource!(user)
          end
        end
    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)
