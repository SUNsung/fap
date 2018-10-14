
        
                  # Depending on the attribute, multiple values may
          # be returned. We need only one for username.
          # Ex. `uid` returns only one value but `mail` may
          # return an array of multiple email addresses.
          [username].flatten.first.tap do |username|
            username.downcase! if config.lowercase_usernames
          end
        end
    
            def uid
          @uid ||= Gitlab::Utils.force_utf8(auth_hash.uid.to_s)
        end
    
    module Gitlab
  module BackgroundMigration
    class PopulateMergeRequestsLatestMergeRequestDiffId
      BATCH_SIZE = 1_000
    
            private
    
          def image_url
        raise NotImplementedError
      end
    
            def value_width
          54
        end
    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
        it 'in the future' do
      expect(relative_distance_of_time_in_words(Time.now+5.minutes)).to eq('in 5m')
    end
  end
end

    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
      let :old_template do
    {
      'url' => '{{url}}',
      'title' => '{{ title }}',
      'description' => '{{ hovertext }}',
      'comment' => '{{ comment }}'
    }
  end
    
            expect(@checker.reload.schedule).to eq('5pm')
    
        # This will detect the proper guest OS for the machine and set up
    # the class to actually execute capabilities.
    def detect!
      guest_name = @machine.config.vm.guest
      initialize_capabilities!(guest_name, @guests, @capabilities, @machine)
    rescue Errors::CapabilityHostExplicitNotDetected => e
      raise Errors::GuestExplicitNotDetected, value: e.extra_data[:value]
    rescue Errors::CapabilityHostNotDetected
      raise Errors::GuestNotDetected
    end
    
            # Upload a file to the remote machine.
        #
        # @param [String] from Path of the file locally to upload.
        # @param [String] to Path of where to save the file on the remote
        #   machine.
        def upload(from, to)
        end
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
        describe '0 (zero)' do
      context 'applies to numeric formats bBdiouxXaAeEfgG and width is specified' do
        it 'pads with zeros, not spaces' do
          format('%010b', 10).should == '0000001010'
          format('%010B', 10).should == '0000001010'
          format('%010d', 112).should == '0000000112'
          format('%010i', 112).should == '0000000112'
          format('%010o', 87).should == '0000000127'
          format('%010u', 112).should == '0000000112'
          format('%010x', 196).should == '00000000c4'
          format('%010X', 196).should == '00000000C4'
    
        Thread.pass until running
    Thread.pass while t.status and t.status != 'sleep'
    
    script_binding = binding
    
              # @!attribute type
          #   @return [Integer] The algorithm used to generate the checksum
          attr_accessor :type
          # @!attribute checksum
          #   @return [String] The checksum itself
          attr_accessor :checksum
    
              include Rex::Proto::Kerberos::Crypto
          include Rex::Proto::Kerberos::Model
    
              # Decodes the realm field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [String]
          def decode_realm(input)
            input.value[0].value
          end
    
    
    {    # @include transition(#{border-color ease-in-out .15s, box-shadow ease-in-out .15s})
    # to
    # @include transition(border-color ease-in-out .15s, box-shadow ease-in-out .15s)
    def deinterpolate_vararg_mixins(scss)
      scss = scss.dup
      VARARG_MIXINS.each do |mixin|
        if scss.gsub! /(@include\s*#{Regexp.quote(mixin)})\(\s*\#\{([^}]+)\}\s*\)/, '\1(\2)'
          log_transform mixin
        end
      end
      scss
    end