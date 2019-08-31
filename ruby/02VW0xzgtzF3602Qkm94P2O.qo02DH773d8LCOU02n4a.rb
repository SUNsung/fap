
        
            it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
    describe ScenarioHelper do
  let(:scenario) { users(:bob).scenarios.build(name: 'Scene', tag_fg_color: '#AAAAAA', tag_bg_color: '#000000') }
    
        it 'can be turned off' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'false' }
      DefaultScenarioImporter.import(user)
    end
    
      it_behaves_like AgentControllerConcern
    
        SPLIT_INTS = /(?<=\d)\.(?=[\s\d])/.freeze
    
        def as_json
      @pages
    end
    
            css('code code').each do |node|
          node.before(node.children).remove
        end
    
            location_badge = at_css('.location-badge')
        if location_badge && doc.last_element_child != location_badge
          doc.last_element_child.after(location_badge)
        end
    
            subtitle = at_css('.hero-subtitle').try(:content)
        breadcrumbs = css('.breadcrumbs li').map(&:content)[2..-2]
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
    require 'devise/hooks/timeoutable'
    
    require 'utils/bottles'
    
              def install
            xcodebuild '-project', 'meow.xcodeproject'
            ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ xcodebuild should be passed an explicit \'SYMROOT\'
          end
        end
      RUBY
    end
    
          def toolchain_path
        Pathname.new('#{prefix}/Toolchains/XcodeDefault.xctoolchain')
      end
    
        let(:follow)  { double(account: account, errors: errors) }
    let(:errors)  { double(add: nil) }
    let(:account) { double(nil?: _nil, local?: local, following_count: 0, followers_count: 0) }
    let(:_nil)    { true }
    let(:local)   { false }
    
        def quote(field)
      if @force_quotes
        quote_field(field)
      else
        if field.nil?  # represent +nil+ fields as empty unquoted fields
          ''
        else
          field = String(field)  # Stringify fields
          # represent empty fields as empty quoted fields
          if (@quote_empty and field.empty?) or @quotable_pattern.match?(field)
            quote_field(field)
          else
            field  # unquoted field
          end
        end
      end
    end
  end
end

    
      def test_sqrt
    assert_equal 1, CMath.sqrt(1)
    assert_equal CMath.sqrt(1i), CMath.sqrt(1.0i), '[ruby-core:31672]'
    assert_equal Complex(0,2), CMath.sqrt(-4.0)
    assert_equal Complex(0,2), CMath.sqrt(-4)
    assert_equal Complex(0,2), CMath.sqrt(Rational(-4))
    assert_equal Complex(0,3), CMath.sqrt(-9.0)
    assert_equal Complex(0,3), CMath.sqrt(-9)
    assert_equal Complex(0,3), CMath.sqrt(Rational(-9))
    assert_in_delta (1.272019649514069+0.7861513777574233i), CMath.sqrt(1+2i)
    assert_in_delta 3.0i, CMath.sqrt(-9)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sqrt('1') }
  end
    
      it 'increments position before calling the block' do
    gz = Zlib::GzipReader.new @io
    
    end

    
    describe 'GzipReader#ungetbyte' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new @zip
  end
    
        private
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
          # Creates a masked version of the authenticity token that varies
      # on each request. The masking is used to mitigate SSL attacks
      # like BREACH.
      def mask_token(token)
        token = decode_token(token)
        one_time_pad = SecureRandom.random_bytes(token.length)
        encrypted_token = xor_byte_strings(one_time_pad, token)
        masked_token = one_time_pad + encrypted_token
        encode_token(masked_token)
      end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   Cookie Tossing
    # Supported browsers:: all
    # More infos::         https://github.com/blog/1466-yummy-cookies-across-domains
    #
    # Does not accept HTTP requests if the HTTP_COOKIE header contains more than one
    # session cookie. This does not protect against a cookie overflow attack.
    #
    # Options:
    #
    # session_key:: The name of the session cookie (default: 'rack.session')
    class CookieTossing < Base
      default_reaction :deny
    
            modes       = Array options[:escape]
        @escaper    = options[:escaper]
        @html       = modes.include? :html
        @javascript = modes.include? :javascript
        @url        = modes.include? :url
    
          def react_and_close(env, body)
        reaction = react(env)
    
          get '/', {}, 'HTTP_COOKIE' => '_session=EVIL_SESSION_TOKEN; _session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
  end
end

    
      it_behaves_like 'any rack application'