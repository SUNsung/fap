
        
        def linkify_prs(markdown)
  markdown.gsub(%r!(?<\!&)#(\d+)!) do |word|
    '[#{word}]({{ site.repository }}/issues/#{word.delete('#')})'
  end
end
    
    module Jekyll
  module Commands
    class Serve
      # The LiveReload protocol requires the server to serve livereload.js over HTTP
      # despite the fact that the protocol itself uses WebSockets.  This custom connection
      # class addresses the dual protocols that the server needs to understand.
      class HttpAwareConnection < EventMachine::WebSocket::Connection
        attr_reader :reload_body, :reload_size
    
      it 'imports a scenario which requires a service' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'spec/data_fixtures/twitter_scenario.json'))
    click_on 'Start Import'
    check('I confirm that I want to import these Agents.')
    expect { click_on 'Finish Import' }.to change(Scenario, :count).by(1)
    expect(page).to have_text('Import successful!')
  end
end

    
        it 'returns a Glyphicon icon element with an addidional class' do
      icon = icon_tag('glyphicon-help', class: 'text-info')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help.text-info')).to be_a Nokogiri::XML::Element
    end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
                expect {
              scenario_import.import
            }.to change { users(:bob).agents.count }.by(2)
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
      def param_string
    params=[]
    self.uri_parts['QueryString'].each_pair { |param, value|
      # inject a random number of params in between each param
      if self.junk_params
        rand(10)+5.times {
          params.push(Rex::Text.rand_text_alpha(rand(16) + 5) + '=' + Rex::Text.rand_text_alpha(rand(10) + 1))
        }
      end
      if value.kind_of?(Array)
        value.each { |subvalue|
    				params.push(Rex::Text.uri_encode(param, self.uri_encode_mode) + '=' + Rex::Text.uri_encode(subvalue, self.uri_encode_mode))
        }
      else
        if !value.nil?
          params.push(Rex::Text.uri_encode(param, self.uri_encode_mode) + '=' + Rex::Text.uri_encode(value, self.uri_encode_mode))
        else
          params.push(Rex::Text.uri_encode(param, self.uri_encode_mode))
        end
      end
    }
    
      attr_accessor :client
  attr_accessor :oseq, :iseq
  attr_accessor :scall, :dcall
  attr_accessor :codec, :state
  attr_accessor :ring_start, :ring_finish
  attr_accessor :itime
  attr_accessor :queue
  attr_accessor :audio_hook
  attr_accessor :audio_buff
  attr_accessor :time_limit
  attr_accessor :busy
    
    require 'rex/proto/ipmi/utils'
    
        head + [data.length].pack('v') + data
  end
    
              private
    
              # Encrypts the cipher using RC4-HMAC schema
          #
          # @param data [String] the data to encrypt
          # @param key [String] the key to encrypt
          # @param msg_type [Integer] the message type
          # @return [String] the encrypted data
          def encrypt_rc4_hmac(data, key, msg_type)
            k1 = OpenSSL::HMAC.digest('MD5', key, [msg_type].pack('V'))
    
                seq.to_der
          end
    
              # Decodes the cipher from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Sting]
          def decode_cipher(input)
            input.value[0].value
          end
    
              # Encodes the value field
          #
          # @return [OpenSSL::ASN1::OctetString]
          def encode_value
            OpenSSL::ASN1::OctetString.new(value)
          end
        end
      end
    end
  end
end
    
        def_delegators :@s, :scan_until, :skip_until, :string
    
    end
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
    module Jekyll