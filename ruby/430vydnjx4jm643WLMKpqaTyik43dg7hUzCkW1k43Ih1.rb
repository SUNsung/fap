
        
            it 'returns a label 'Yes' if a given agent is working' do
      stub(@agent).working? { true }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'Yes'
    end
    
              it 'doesn't crash without any control links' do
            valid_parsed_data.delete(:control_links)
    
    describe HuginnScheduler do
  before(:each) do
    @rufus_scheduler = Rufus::Scheduler.new
    @scheduler = HuginnScheduler.new
    stub(@scheduler).setup {}
    @scheduler.setup!(@rufus_scheduler, Mutex.new)
  end
    
        it 'returns nil when passed nil' do
      expect(Utils.parse_duration(nil)).to be_nil
    end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
          @log.level = 0
      expect(@log).to be_valid
    end
  end
    
          it 'makes options symbol-indifferent before validating' do
        agent = Agents::SomethingSource.new(:name => 'something')
        agent.user = users(:bob)
        agent.options['bad'] = true
        expect(agent).to have(1).error_on(:base)
        agent.options['bad'] = false
        expect(agent).to have(0).errors_on(:base)
      end
    
      it 'raises a TypeError when passed nil' do
    lambda { srand(nil) }.should raise_error(TypeError)
  end
    
      ruby_version_is '2.5' do
    describe ':uplevel keyword argument' do
      before :each do
        $VERBOSE = true
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
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
        it 'corrects one hash parameter with braces and a trailing comma' do
      corrected = autocorrect_source('where({ x: 1, y: 2, })')
      expect(corrected).to eq('where(x: 1, y: 2)')
    end