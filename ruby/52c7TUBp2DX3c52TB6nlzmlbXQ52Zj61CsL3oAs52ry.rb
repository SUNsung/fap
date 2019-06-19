
        
            req_types.each do |req_type, _|
      val = get_and_reset(redis_key(req_type, date))
    
        @omniauth.before_request_phase do |env|
      # If the user is trying to reconnect to an existing account, store in session
      request = ActionDispatch::Request.new(env)
      request.session[:auth_reconnect] = !!request.params['reconnect']
    end
  end
    
        # remove old drafts
    delete_drafts_older_than_n_days = SiteSetting.delete_drafts_older_than_n_days.days.ago
    Draft.where('updated_at < ?', delete_drafts_older_than_n_days).destroy_all
  end
    
        SCRIPT_ASSET_DIRECTORIES = [
      # [dir, can_use_s3_cdn, can_use_cdn]
      ['/assets/',             true, true],
      ['/brotli_asset/',       true, true],
      ['/extra-locales/',      false, false],
      ['/highlight-js/',       false, true],
      ['/javascripts/',        false, true],
      ['/plugins/',            false, true],
      ['/theme-javascripts/',  false, true],
      ['/svg-sprite/',         false, true],
    ]
    
          response
    end
    
        plugin.activate!
    Discourse.plugins << plugin
    
          open_dry_run_modal(formatting_agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('Line 1\nLine 2\nLine 3')
      end
      click_on('Dry Run')
      expect(page).to have_text('Line 1,Line 2,Line 3')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
  end
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
        it 'is turned off for existing instances of Huginn' do
      stub(DefaultScenarioImporter).seed { fail 'seed should not have been called'}
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { nil }
      DefaultScenarioImporter.import(user)
    end
    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end

    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
        def root_page?
      subpath.blank? || subpath == '/' || subpath == root_path
    end
    
        def to_a
      @filters.dup
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
    module Docs
  class Subscriber < ActiveSupport::Subscriber
    cattr_accessor :namespace
    
          private
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
    
      def hub_topic_domain
    hub_topic_uri.host + (hub_topic_uri.port ? ':#{hub_topic_uri.port}' : '')
  end
    
      private
    
      private
    
        if @account.nil?
      render :error
    else
      render :success
    end
  rescue ActiveRecord::RecordNotFound, Mastodon::NotPermittedError
    render :error
  end
    
              # Encodes the components field
          #
          # @return [String]
          def encode_components
            encoded = ''
    
                seq.to_der
          end
    
              # Rex::Proto::Kerberos::Model::Checksum decoding isn't supported
          #
          # @raise [NotImplementedError]
          def decode(input)
            raise ::NotImplementedError, 'Checksum decoding not supported'
          end
    
              # Decrypts the cipher with etype encryption schema
          #
          # @param key [String] the key to decrypt
          # @param msg_type [Integer] the message type
          # @return [String] the decrypted `cipher`
          # @raise [RuntimeError] if decryption doesn't succeed
          # @raise [NotImplementedError] if encryption isn't supported
          def decrypt(key, msg_type)
            if cipher.nil? || cipher.empty?
              return ''
            end
    
              # Decodes the susec field
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_susec(input)
            input.value[0].value.to_i
          end
    
              # Decodes a Rex::Proto::Kerberos::Model::LastReque from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
              # Decodes a Rex::Proto::Kerberos::Model::PreAuthData from an
          # OpenSSL::ASN1::Sequence
          #
          # @param input [OpenSSL::ASN1::Sequence] the input to decode from
          def decode_asn1(input)
            seq_values = input.value
            self.type  = decode_asn1_type(seq_values[0])
            self.value = decode_asn1_value(seq_values[1])
          end
    
        shared_examples 'on a visible post' do
      it 'creates the participation' do
        post :create, params: {post_id: @post.id}
        expect(alice.participations.where(:target_id => @post.id)).to exist
        expect(response.code).to eq('201')
      end
    end
    
      describe '#create' do
    it 'redirects to /stream for a non-mobile user' do
      post :create, params: {user: {remember_me: '0', username: @user.username, password: 'evankorth'}}
      expect(response).to be_redirect
      expect(response.location).to match /^#{stream_url}\??$/
    end
    
    describe ShareVisibilitiesController, :type => :controller do
  before do
    @status = alice.post(:status_message, :text => 'hello', :to => alice.aspects.first)
  end
    
    run SinatraStaticServer

    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end