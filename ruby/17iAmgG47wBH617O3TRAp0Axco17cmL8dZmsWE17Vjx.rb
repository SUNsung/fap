
        
            # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        # The path used after sending unlock password instructions
    def after_sending_unlock_instructions_path_for(resource)
      new_session_path(resource) if is_navigational_format?
    end
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
            token
      end
    
          def timeout_in
        self.class.timeout_in
      end
    
        stub_request(:post, 'https://example.org/inbox').to_return(status: 200)
    stub_request(:post, 'https://example.com/inbox').to_return(status: 200)
    
    RSpec.describe ActivityPub::Activity::Block do
  let(:sender)    { Fabricate(:account) }
  let(:recipient) { Fabricate(:account) }
    
        before do
      get :show, params: { id: user.account.id }
    end
    
      it 'does still notify when sender\'s domain is blocked but sender is followed' do
    recipient.block_domain!(sender.domain)
    recipient.follow!(sender)
    is_expected.to change(Notification, :count)
  end
    
      let(:user)   { Fabricate(:user, account: Fabricate(:account, username: 'alice')) }
  let(:scopes) { 'read:statuses' }
  let(:token)  { Fabricate(:accessible_access_token, resource_owner_id: user.id, scopes: scopes) }
    
        context 'when the sender is relayed' do
      let!(:relay_account) { Fabricate(:account, inbox_url: 'https://relay.example.com/inbox') }
      let!(:relay) { Fabricate(:relay, inbox_url: 'https://relay.example.com/inbox') }
    
      # Default class for buttons
  config.button_class = 'btn'
    
          while (stime + ctimeout > Time.now.to_i)
        begin
          client = Rex::Socket::Udp.create(
            'PeerHost' => rhost,
            'PeerPort' => lport.to_i,
            'Proxies'  => datastore['Proxies'],
            'Context'  =>
              {
                'Msf'        => framework,
                'MsfPayload' => self,
                'MsfExploit' => assoc_exploit
              })
        rescue Rex::ConnectionError => e
          vprint_error(e.message)
        rescue
          wlog('Exception caught in bind handler: #{$!.class} #{$!}')
        end
    
        state.badchars.each_byte do |byte|
      # Last ditch effort, if any of the normal characters used by base64
      # are badchars, try to replace them with something that will become
      # the appropriate thing on the other side.
      if b64.include?(byte.chr)
        b64.gsub!(byte.chr, '.chr(#{byte}).')
      end
    end
    
            # encode the bytes as \x hex string, print using bash's echo, and pass to plutil
        shadow_plist = cmd_exec('/bin/bash -c 'echo -ne \'#{plist_bytes}\' | plutil -convert xml1 - -o -'')
    
    else
  print_error('This version of Meterpreter is not supported with this Script!')
  raise Rex::Script::Completed
end

    
          it 'does not create the ApiSecret' do
        expect { post '/users/api_secrets', params: { api_secret: invalid_params } }.
          not_to(change { user.api_secrets.count })
      end
    
          # Below article HTML variant
      it 'renders below article html variant' do
        html_variant = create(:html_variant, published: true, approved: true, group: 'article_show_below_article_cta')
        article.update_column(:body_markdown, rand(36**1000).to_s(36).to_s) # min length for article
        get article.path + '?variant_version=0'
        expect(response.body).to include html_variant.html
      end