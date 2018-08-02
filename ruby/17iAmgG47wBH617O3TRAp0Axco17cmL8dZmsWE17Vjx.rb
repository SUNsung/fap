
        
          def set_table_sort(sort_options)
    valid_sorts = sort_options[:sorts] or raise ArgumentError.new('You must specify :sorts as an array of valid sort attributes.')
    default = sort_options[:default] || { valid_sorts.first.to_sym => :desc }
    
      def failure
    set_flash_message! :alert, :failure, kind: OmniAuth::Utils.camelize(failed_strategy.name), reason: failure_message
    redirect_to after_omniauth_failure_path_for(resource_name)
  end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
            # Unregisters a SIGINT handler.
        def unregister(sig_callback)
          @@mutex.synchronize do
            registered.delete(sig_callback)
    
      it 'uses 'main' as self' do
    ruby_exe('puts self', escape: false).chomp.should == 'main'
  end
    
      def test_hidden_key
    bug6899 = '[ruby-core:47253]'
    foo = 'foor'
    bar = 'bar'
    assert_nothing_raised(NotImplementedError, bug6899) do
      2000.times {eval %[(foo..bar) ? 1 : 2]}
    end
    foo = bar
  end
    
      describe 'RDATA()' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_rdata(a).should == 1024
    end
    
      it 'keeps spaces in the value' do
    ENV['RUBYLIB'] = @pre + ' rubylib/incl '
    out = ruby_exe('puts $LOAD_PATH')
    out.should include(' rubylib/incl ')
  end
end

    
        File.open path, 'wb', permissions do |io|
      if passphrase and cipher
        io.write pemmable.to_pem cipher, passphrase
      else
        io.write pemmable.to_pem
      end
    end
    
        spec = util_spec 'some_gem' do |s|
      s.signing_key = SIGNING_KEY
      s.cert_chain = [CERT_FILE]
    end
    
      def test_doc_rdoc
    @cmd.handle_options %w[--doc=rdoc]
    
    # added in 1.0.2
have_func('EC_curve_nist2nid')
have_func('X509_REVOKED_dup')
have_func('X509_STORE_CTX_get0_store')
have_func('SSL_CTX_set_alpn_select_cb')
OpenSSL.check_func_or_macro('SSL_CTX_set1_curves_list', 'openssl/ssl.h')
OpenSSL.check_func_or_macro('SSL_CTX_set_ecdh_auto', 'openssl/ssl.h')
OpenSSL.check_func_or_macro('SSL_get_server_tmp_key', 'openssl/ssl.h')
have_func('SSL_is_server')
    
            def stock_location
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:id])
        end
    
            def stock_movement_params
          params.require(:stock_movement).permit(permitted_stock_movement_attributes)
        end
      end
    end
  end
end

    
        module ClassMethods
      def attachment_definitions
        Paperclip::AttachmentRegistry.definitions_for(self)
      end
    end
  end
end

    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end