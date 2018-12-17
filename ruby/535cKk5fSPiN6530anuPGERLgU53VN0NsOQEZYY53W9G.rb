
        
        describe GivenDailyLike do
    
      it { is_expected.to belong_to :user }
  it { is_expected.to belong_to :topic }
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
      it 'shows the dry run pop up without previous events and selects the log tab when no event was created' do
    stub_request(:get, 'http://xkcd.com/').
      with(:headers => {'Accept-Encoding'=>'gzip,deflate', 'User-Agent'=>'Huginn - https://github.com/huginn/huginn'}).
      to_return(:status => 200, :body => '', :headers => {})
    
      describe '#omniauth_provider_icon' do
    it 'returns a correct icon tag for Twitter' do
      icon = omniauth_provider_icon(:twitter)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-twitter')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
      describe 'DotHelper::DotDrawer' do
    describe '#id' do
      it 'properly escapes double quotaion and backslash' do
        expect(DotHelper::DotDrawer.draw(foo: '') {
          id('hello\\'')
        }).to eq(''hello\\\\\\''')
      end
    end
  end
end

    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
        context 'when an a scenario already exists with the given guid for the importing user' do
      let!(:existing_scenario) do
        _existing_scenerio = users(:bob).scenarios.build(:name => 'an existing scenario', :description => 'something')
        _existing_scenerio.guid = guid
        _existing_scenerio.save!
    
      describe 'cleanup_failed_jobs!' do
    before do
      3.times do |i|
        Delayed::Job.create(failed_at: Time.now - i.minutes)
      end
      @keep = Delayed::Job.order(:failed_at)[1]
    end
    
      it 'provides hash-style access to its properties with both symbol and string keys' do
    expect(location[:lat]).to be_a Float
    expect(location[:lat]).to eq 2.0
    expect(location['lat']).to be_a Float
    expect(location['lat']).to eq 2.0
  end
    
        # If a procedure was passed, mount the resource with it.
    if (opts['Proc'])
      mount(name, Handler::Proc, false, opts['Proc'], opts['VirtualDirectory'])
    else
      raise ArgumentError, 'You must specify a procedure.'
    end
  end
    
    
end
end
end

    
    
end
end
end

    
      # open rmcpplus_request
  def self.create_ipmi_session_open_request(console_session_id)
    head = [
      0x06, 0x00, 0xff, 0x07,   # RMCP Header
      0x06,                     # RMCP+ Authentication Type
      PAYLOAD_RMCPPLUSOPEN_REQ, # Payload Type
      0x00, 0x00, 0x00, 0x00,   # Session ID
      0x00, 0x00, 0x00, 0x00    # Sequence Number
    ].pack('C*')
    
              # Encodes the pvno field
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_pvno
            bn = OpenSSL::BN.new(pvno.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
              # Decodes the key from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [EncryptionKey]
          def decode_key(input)
            Rex::Proto::Kerberos::Model::EncryptionKey.decode(input.value[0])
          end
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_msg_type(input)
            input.value[0].value.to_i
          end
    
        context 'but no comment after the last element' do
      it 'autocorrects the closing brace' do
        new_source = autocorrect_source(source)
    
          # Checks whether this node is an `unless` statement. (This is not true
      # of ternary operators and `if` statements.)
      #
      # @return [Boolean] whether the node is an `unless` statement
      def unless?
        keyword == 'unless'
      end
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def colon?
        false
      end
    
              raise ArgumentError unless valid_argument_types?
        end