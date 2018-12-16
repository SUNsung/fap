
        
                case array.length
        when 0
          ''.html_safe
        when 1
          ERB::Util.html_escape(array[0])
        when 2
          safe_join([array[0], array[1]], options[:two_words_connector])
        else
          safe_join([safe_join(array[0...-1], options[:words_connector]), options[:last_word_connector], array[-1]], nil)
        end
      end
    end
  end
end

    
            def initialize(object_name, method_name, template_object, checked_value, unchecked_value, options)
          @checked_value   = checked_value
          @unchecked_value = unchecked_value
          super(object_name, method_name, template_object, options)
        end
    
                  yield item, value, text, default_html_options.merge(additional_html_options)
            end.join.html_safe
          end
    
    module ActionView
  module Helpers
    module Tags # :nodoc:
      class DateSelect < Base # :nodoc:
        def initialize(object_name, method_name, template_object, options, html_options)
          @html_options = html_options
    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
    module ActionView #:nodoc:
  # = Action View PathSet
  #
  # This class is used to store and access paths in Action View. A number of
  # operations are defined so that you can search among the paths in this
  # set and also perform operations on other +PathSet+ objects.
  #
  # A +LookupContext+ will use a +PathSet+ to store the paths in its context.
  class PathSet #:nodoc:
    include Enumerable
    
          def prepend_formats(formats) # :doc:
        formats = Array(formats)
        return if formats.empty? || @lookup_context.html_fallback_for_js
    
        it 'works for queued jobs' do
      expect(status(job)).to eq('<span class='label label-warning'>queued</span>')
    end
  end
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
          AgentLog.log_for_agent(agents(:jane_website_agent), 'some message', :level => 4, :outbound_event => events(:jane_website_agent_event))
      expect(agents(:jane_website_agent).reload.last_error_log_at.to_i).to be_within(2).of(Time.now.to_i)
    end
    
      it 'accepts a Rational' do
    sleep(Rational(1, 9)).should be_close(0, 2)
  end
    
      it 'accepts and uses a seed of 0' do
    srand(0)
    srand.should == 0
  end
    
      it 'returns false when the command exits with a non-zero exit status' do
    @object.system(ruby_cmd('exit 1')).should == false
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
        it 'returns true when passed ?w if the argument is readable by the effective uid' do
      Kernel.test(?w, @tmp_file).should be_true
    end
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
    # Supported
IAX_SUPPORTED_CODECS  = IAX_CODEC_G711_MULAW | IAX_CODEC_G711_ALAW | IAX_CODEC_LINEAR_PCM
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
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
    
              # Decodes a Rex::Proto::Kerberos::Model::EncKdcResponse
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @raise [RuntimeError] if decoding doesn't succeed
          def decode_asn1(input)
            input.value[0].value.each do |val|
              case val.tag
              when 0
                self.key = decode_key(val)
              when 1
                self.last_req = decode_last_req(val)
              when 2
                self.nonce = decode_nonce(val)
              when 3
                self.key_expiration = decode_key_expiration(val)
              when 4
                self.flags = decode_flags(val)
              when 5
                self.auth_time = decode_auth_time(val)
              when 6
                self.start_time = decode_start_time(val)
              when 7
                self.end_time = decode_end_time(val)
              when 8
                self.renew_till = decode_renew_till(val)
              when 9
                self.srealm = decode_srealm(val)
              when 10
                self.sname = decode_sname(val)
              else
                raise ::RuntimeError, 'Failed to decode ENC-KDC-RESPONSE SEQUENCE'
              end
            end
          end
    
    source 'https://rubygems.org'
    
          def stack
        UI::ErrorReport.stack
      end