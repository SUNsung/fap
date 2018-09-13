
        
          context 'displaying the correct information' do
    before(:each) do
      visit new_agent_path
    end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
              expect(trigger_agent.name).to eq('listen for weather')
          expect(trigger_agent.sources).to eq([weather_agent])
          expect(trigger_agent.schedule).to be_nil
          expect(trigger_agent.keep_events_for).to eq(0)
          expect(trigger_agent.propagate_immediately).to be_truthy
          expect(trigger_agent).not_to be_disabled
          expect(trigger_agent.memory).to be_empty
          expect(trigger_agent.options).to eq(trigger_agent_options)
        end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        stub.any_instance_of(Agents::SchedulerAgent).second_precision_enabled { true }
    
      describe 'migrating an actual agent' do
    before do
      valid_params = {
                        'auth_token' => 'token',
                        'room_name' => 'test',
                        'room_name_path' => '',
                        'username' => 'Huginn',
                        'username_path' => '$.username',
                        'message' => 'Hello from Huginn!',
                        'message_path' => '$.message',
                        'notify' => false,
                        'notify_path' => '',
                        'color' => 'yellow',
                        'color_path' => '',
                      }
    
        it 'interpolates jsonpath expressions between matching <>'s' do
      expect(Utils.interpolate_jsonpaths('hello <$.there.world> this <escape works>', payload)).to eq('hello WORLD this should+work')
    end
    
      it 'truncates message to a reasonable length' do
    log = AgentLog.new(:agent => agents(:jane_website_agent), :level => 3)
    log.message = 'a' * 11_000
    log.save!
    expect(log.message.length).to eq(10_000)
  end
    
      # Returns a request packet
  def to_s
    str = ''
    if self.junk_pipeline
      host = ''
      if self.headers['Host']
        host = 'Host: #{self.headers['Host']}\r\n'
      end
      str << 'GET / HTTP/1.1\r\n#{host}Connection: Keep-Alive\r\n\r\n' * self.junk_pipeline
      self.headers['Connection'] = 'Closed'
    end
    str + super
  end
    
      #
  # The current request context.
  #
  attr_accessor :request
  #
  # Boolean that indicates whether or not the connection supports keep-alive.
  #
  attr_accessor :keepalive
  #
  # A reference to the server the client is associated with.
  #
  attr_accessor :server
    
              # Decodes the enc_part
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Rex::Proto::Kerberos::Model::EncryptedData]
          def decode_enc_part(input)
            Rex::Proto::Kerberos::Model::EncryptedData.decode(input.value[0])
          end
        end
      end
    end
  end
end
    
              # Decodes the pvno from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_pvno(input)
            input.value[0].value.to_i
          end
    
              def set_local_#{name}(name, value)
            @#{name}s ||= {}
            @#{name}s[name.tr('_', '-')] = value
          end
    
        # Processes the options set by the command-line arguments. In particular,
    # sets `@options[:input]` and `@options[:output]` to appropriate IO streams.
    #
    # This is meant to be overridden by subclasses
    # so they can run their respective programs.
    def process_result
      input, output = @options[:input], @options[:output]
      args = @args.dup
      input ||=
        begin
          filename = args.shift
          @options[:filename] = filename
          open_file(filename) || $stdin
        end
      @options[:output_filename] = args.shift
      output ||= @options[:output_filename] || $stdout
      @options[:input], @options[:output] = input, output
    end
    
    Description:
  Converts between CSS, indented syntax, and SCSS files. For example,
  this can convert from the indented syntax to SCSS, or from CSS to
  SCSS (adding appropriate nesting).
END
    
          raise <<MSG if @args.empty?
What files should I watch? Did you mean something like:
    #{@default_syntax} --watch input.#{@default_syntax}:output.css
    #{@default_syntax} --watch input-dir:output-dir
MSG
    
              if arg.braces?
            unless braces_around_second_from_end
              add_arg_offense(arg, :redundant)
            end
          elsif braces_around_second_from_end
            add_arg_offense(arg, :missing)
          end
        end
    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
            attr_reader :first, :second